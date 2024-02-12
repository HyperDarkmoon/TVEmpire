#include "mainwindow.h"
#include "form2.h"
#include <QApplication>
#include <QFile>
#include <QDir>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // File path to the style.qss file
    QString styleFilePath = "style.qss";

    // Open the style.qss file
    QFile styleFile(styleFilePath);
    if (styleFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        // Read the contents of the file and set it as the application's stylesheet
        QString styleSheet = QLatin1String(styleFile.readAll());
        a.setStyleSheet(styleSheet);
        styleFile.close();

        // Create and show the main application window (MainWindow)
        MainWindow mainWindow;
        //mainWindow.show();
        Form2 loginpage;
        loginpage.show();

        // Start the application event loop
        return a.exec();
    } else {
        // Print an error message if opening the file fails
        qDebug() << "Failed to open style.qss file! Error: " << styleFile.errorString();
        return -1; // Return an error code or handle accordingly
    }
}
