#include "dbconnection.h"
#include <QSqlDatabase>
#include <QSettings>
#include <QDebug>

dbconnection::dbconnection()
{
}

bool dbconnection::createconnect()
{
    bool test = false;

    // Read credentials from config file
    QSettings settings("config.ini", QSettings::IniFormat);
    QString username = settings.value("Database/Username", "defaultUsername").toString();
    QString password = settings.value("Database/Password", "defaultPassword").toString();

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("TVEmpire");
    db.setUserName(username);
    db.setPassword(password);
    qDebug() << username << password;
    if (db.open())
    {
        test = true;
    }

    return test;
}
