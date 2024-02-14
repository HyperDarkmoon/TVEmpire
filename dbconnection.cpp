#include "dbconnection.h"
#include <QDebug>
dbconnection::dbconnection()
{

}


bool dbconnection::createconnect()
{
    bool test = false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("tvempire");
    db.setUserName("slimane");
    db.setPassword("267501");

    if (db.open())
    {
        test = true;

        //*********************************
        // test query REMOVE LATER
        //***************************************************************
    /*
        QString queryStr = "SELECT * FROM SPONSOR"; // Adjust query and table name

        QSqlQuery query(db);
        if (!query.prepare(queryStr)) {
            qDebug() << "Error preparing query:" << query.lastError().text();
        }
        if (!query.exec()) {
            qDebug() << "Error executing query:" << query.lastError().text();

        }

    */


    }

    return test;
}
