#include "dbconnection.h"

dbconnection::dbconnection()
{

}


bool dbconnection::createconnect()
{
    bool test = false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("slimane");
    db.setUserName("slimane");
    db.setPassword("267501");

    if (db.open())
        test = true;

    return test;
}
