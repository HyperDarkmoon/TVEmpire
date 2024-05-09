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
    /*CrudEmission e;
    QList<CrudEmission> emission = e.getAll();
    //sort the emission by date
    std::sort(emission.begin(), emission.end(), [](const CrudEmission &a, const CrudEmission &b) {
        return a.getHoraire() < b.getHoraire();
    });
    // sent all the emission to the arduino


    QString a;
    for (const auto& em : emission)
    {
        a += em.getNom() + " " + em.getHoraire().toString("yyyy-MM-dd") + "\n";
        arduino->writeToArduino(a.toUtf8());
    }*/
    

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
        QList<CrudEmployee> employees = CrudEmployee().getAllEmployees();
        for (const auto &emp : employees)
        {
            qDebug () << emp.getRfidAuth() << "sooo " << arduinoAuth;
            if (emp.getRfidAuth() == arduinoAuth)
            {
                username = emp.getLogin();
                password = emp.getPassword();
                authenticated = true;
                UserSession::getInstance().findRFIDAuthAndUpdateStatus(arduinoAuth);
                            //output
                UserSession::getInstance().setUsername(username);
                UserSession::getInstance().updateRoleFromDatabase();
                QString afficher = UserSession::getInstance().getUsername() + " & " + UserSession::getInstance().getRole() + "\n";
                arduino->writeToArduino(afficher.toUtf8());
                break;
            }
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
        arduino->writeToArduino("OPEN_DOOR\n");
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
    QString scannedRFID = arduino->readFromArduino(); // Read last scanned RFID from Arduino

    // Split the scanned RFID data by spaces
    QStringList parts = scannedRFID.split(" ");

    // Check if there are exactly 4 parts (assuming valid RFID data format)
    if (parts.size() == 4)
    {
        bool isValidRFID = true;

        // Verify each part is a valid hexadecimal value
        for (const QString& part : parts)
        {
            bool conversionOk;
            part.toUInt(&conversionOk, 16); // Convert part to unsigned integer (hexadecimal)

            if (!conversionOk)
            {
                isValidRFID = false;
                break; // Exit loop if any part is not a valid hexadecimal value
            }
        }

        if (isValidRFID)
        {
            // Call authenticate() method with RFID data to proceed with authentication
            authenticate(scannedRFID);
        }
        else
        {
            // Handle invalid RFID format (e.g., show error message)
        }
    }
    else
    {
        // Handle invalid RFID format (e.g., show error message)
    }
}
