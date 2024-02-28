#include "mainwindow.h"
#include "form2.h"
#include <QApplication>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <qsqldatabase.h>
#include "dbconnection.h"
#include <QMessageBox>
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    dbconnection db;
    bool test = db.createconnect();


        // Create and show the main application window (MainWindow)
        MainWindow mainWindow;
        //mainWindow.show();
        Form2 loginpage;
        loginpage.show();

        if (test)
        {
            qDebug() << "success";
            return a.exec();
        }
        else qDebug() << "fail to connect to db";
        // Start the application event loop


}
