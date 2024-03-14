#include "mainwindow.h"
#include "form2.h"
#include <QApplication>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <qsqldatabase.h>
#include "dbconnection.h"
#include <QMessageBox>
#include "weatherapicall.h"
int main(int argc, char *argv[]) {
        QApplication a(argc, argv);
        dbconnection db;
        bool test = db.createconnect();
        WeatherApiClient client;
        QString temperature = client.getTemperature(40.7128, -74.0060, "4532eb473c444451c6c57986a7f7f4c9");

        if (!temperature.isEmpty()) {
            qDebug() << "Current temperature:" << temperature;
        } else {
            qDebug() << "Failed to retrieve temperature";
        }
        if (test)
        {
            // Create and show the main application window (MainWindow)
            //mainWindow.show();
            Form2 loginpage;
            loginpage.show();
            return a.exec();
        }
        else qDebug() << "fail to connect to db";
        // Start the application event loop


}
