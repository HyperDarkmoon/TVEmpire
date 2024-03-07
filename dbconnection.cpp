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
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    qDebug() << username << "   " << password;
    db.setDatabaseName("TVEmpire");
    db.setUserName(username);
    db.setPassword(password);

    if (db.open())
        test = true;

    return test;
}
