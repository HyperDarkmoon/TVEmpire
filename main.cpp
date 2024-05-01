#include "mainwindow.h"
#include "form2.h"
#include <QApplication>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <qsqldatabase.h>
#include "dbconnection.h"
#include <QMessageBox>
// #include "mailing.h"
#include "../smtp/src/SmtpMime"
#include "employee.h"
#include <QCoreApplication>
#include <arduino.h>
#include "usersession.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dbconnection db;
    bool test = db.createconnect();

    if (test)
    {
        Form2 loginpage;
        loginpage.show();

        MainWindow mainWindow; // Create MainWindow object here but do not show it yet

        // Create an Employee object here
        Employee employee;

        // Connect authenticationSuccessful signal to show MainWindow upon successful authentication
        QObject::connect(&loginpage, &Form2::authenticationSuccessful, [&mainWindow, &employee]()
                         {
            mainWindow.show(); // Show MainWindow upon successful authentication
            // Call the refreshTable function only after authentication succeeds
            employee.refreshTable(); });
        // Connect aboutToQuit signal to updateAllEmployeesStatusToAbsent slot
        QObject::connect(&a, &QCoreApplication::aboutToQuit, [&]()
                         { UserSession::getInstance().updateAllEmployeesStatusToAbsent(); });
        return a.exec();
    }
    else
    {
        qDebug() << "fail to connect to db";
        return 1; // Indicate failure to connect to the database
    }
}
