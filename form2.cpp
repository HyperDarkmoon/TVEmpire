#include "form2.h"
#include "ui_form2.h"
#include "employee.h"
#include <QMessageBox>
#include "usersession.h"
#include <QTimer>
#include "arduino.h"

Form2::Form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form2),
    mainWindow(new MainWindow()),
    arduino(new Arduino()),
    cardCheckTimer(new QTimer(this))
{
    ui->setupUi(this);
    arduino = new Arduino(); // Create an instance of Arduino
    arduino->connectArduino(); // Connect to the Arduino
    connect(ui->lineEdit_2, &QLineEdit::returnPressed, this, &Form2::authenticate);

    connect(cardCheckTimer, &QTimer::timeout, this, &Form2::checkForScannedCard);

    cardCheckTimer->start(1000); // Start the timer

    // Initialize mainWindow in the constructor
    // mainWindow = new MainWindow(); // You already have this line in the initialization list
}

Form2::~Form2()
{
    delete ui;
    delete mainWindow;
    delete arduino;
}

void Form2::authenticate()
{
    QString username = ui->lineEdit->text();
        QString password = ui->lineEdit_2->text();
        qDebug() << "rfid memes" << lastScannedRFID;
        if (lastScannedRFID == "E3 64 7E 2E") {
                username = "admeen";
                password = "admeen";
                qDebug() << "Pass from Card";
            }
        CrudEmployee employee; // Create an object of CrudEmployee
        QList<CrudEmployee> employees = employee.getAllEmployees(); // Call non-static member function on the object
        bool authenticated = false;

        for (const auto& emp : employees) {
            if (emp.getLogin() == username && emp.getPassword() == password) {
                authenticated = true;
                // Store the username in the UserSession class
                UserSession::getInstance().setUsername(username);
                // Update the role of the user from the database
                UserSession::getInstance().updateRoleFromDatabase();
                qDebug() << "Role:" << UserSession::getInstance().getRole();
                break;
            }
        }

        if (authenticated) {
              // Disconnect the timeout() signal of cardCheckTimer from checkForScannedCard()
              disconnect(cardCheckTimer, &QTimer::timeout, this, &Form2::checkForScannedCard);
              emit authenticationSuccessful(); // Emit signal upon successful authentication
              this->close(); // Close the login form
          } else {
              QMessageBox::warning(this, "Authentication Failed", "Invalid username or password.");
          }
}

void Form2::on_pushButton_clicked()
{
    authenticate();
}

void Form2::on_pushButton_2_clicked()
{
    // Your existing code
}

void Form2::on_forgotPushButton_clicked()
{
    forgotDialog.show();
}

void Form2::checkForScannedCard()
{
    arduino->readFromArduino();
    qDebug() << "rfid memes 2" << lastScannedRFID << "?";
    if (lastScannedRFID == "E3 64 7E 2E") {
           // Call authenticate() method to proceed with authentication
           authenticate();
       }
}
