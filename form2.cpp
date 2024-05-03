#include "form2.h"
#include "ui_form2.h"
#include "employee.h"
#include <QMessageBox>
#include "usersession.h"
#include <QTimer>
#include "arduino.h"
#include "emission.h"
Form2::Form2(QWidget *parent) : QWidget(parent),
                                ui(new Ui::Form2),
                                mainWindow(new MainWindow()),
                                arduino(new Arduino()),
                                cardCheckTimer(new QTimer(this))
{
    ui->setupUi(this);

    arduino->connectArduino(); // Connect to the Arduino
    // ESP32Serial *esp = new ESP32Serial();
    // esp->connectToESP32("COM8",9600);
    //  Connect lineEdit_2 returnPressed signal to custom lambda slot for authentication
    connect(ui->lineEdit_2, &QLineEdit::returnPressed, this, [this]()
            {
        QString text = ui->lineEdit_2->text();
        authenticate(text); });

    // Connect cardCheckTimer timeout signal to checkForScannedCard slot
    connect(cardCheckTimer, &QTimer::timeout, this, &Form2::checkForScannedCard);

    cardCheckTimer->start(100); // Start the timer
    CrudEmission e;
    QList<CrudEmission> emission = e.getAll();
    //sort the emission by date
    std::sort(emission.begin(), emission.end(), [](const CrudEmission &a, const CrudEmission &b) {
        return a.getHoraire() < b.getHoraire();
    });
    // sent the  emission with the nearest date name and date to arduino 
    QString a =  emission[0].getNom() + " " + emission[0].getHoraire().toString("yyyy-MM-dd") ;
    arduino->writeToArduino(a.toUtf8());

}

Form2::~Form2()
{
    delete ui;
    delete mainWindow;
    delete arduino;
}

void Form2::authenticate(QString arduinoAuth)
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    bool authenticated = false;

    if (arduinoAuth.isEmpty())
    {
        CrudEmployee employee;                                      // Create an object of CrudEmployee
        QList<CrudEmployee> employees = employee.getAllEmployees(); // Call non-static member function on the object

        for (const auto &emp : employees)
        {
            if (emp.getLogin() == username && emp.getPassword() == password)
            {
                authenticated = true;
                break;
            }
        }
    }
    else
    {
        // Authenticate based on RFID card data
        if (arduinoAuth == "E3 64 7E 2E")
        {
            username = "admeen";
            password = "admeen";
            qDebug() << "Pass from Card";
            authenticated = true;
            UserSession::getInstance().findRFIDAuthAndUpdateStatus(arduinoAuth);
        }
    }

    if (authenticated)
    {
        UserSession::getInstance().setUsername(username);
        // Update the role of the user from the database
        UserSession::getInstance().updateRoleFromDatabase();
        qDebug() << "Role:" << UserSession::getInstance().getRole();
        // Disconnect the timeout() signal of cardCheckTimer from checkForScannedCard()
        disconnect(cardCheckTimer, &QTimer::timeout, this, &Form2::checkForScannedCard);
        emit authenticationSuccessful(); // Emit signal upon successful authentication
        this->close();                   // Close the login form
    }
    else
    {
        QMessageBox::warning(this, "Authentication Failed", "Invalid username or password.");
    }
}

void Form2::on_pushButton_clicked()
{
    authenticate();
}

void Form2::on_pushButton_2_clicked()
{
    // Your existing code for button 2
}

void Form2::on_forgotPushButton_clicked()
{
    forgotDialog.show();
}

void Form2::checkForScannedCard()
{
    QString lastScannedRFID = arduino->readFromArduino();
    if (lastScannedRFID == "E3 64 7E 2E")
    {
        qDebug() << "memes";
        // Call authenticate() method with RFID data to proceed with authentication
        authenticate(lastScannedRFID);
    }
}
