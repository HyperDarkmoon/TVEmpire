#ifndef DBCONNECTION_H
#define DBCONNECTION_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class dbconnection
{
public:
    dbconnection();
    bool createconnect();
};

#endif // DBCONNECTION_H
