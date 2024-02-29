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
    QString username = settings.value("Database/Username", "DefaultUsername").toString();
    QString password = settings.value("Database/Password", "DefaultPassword").toString();
    qDebug() << "Username from settings: " << username;
    qDebug() << "Password from settings: " << password;
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
