#include "crudemployee.h"
#include <QtSql>

CrudEmployee::CrudEmployee(unsigned int id, QString name, QString lastName, QString post, unsigned int salary, QTime startTime, QTime endTime, QString login, QString password, QDate dob, QString gender)
{
    this->id = id;
    this->CrudEmployeeName = name;
    this->CrudEmployeeLastName = lastName;
    this->post = post;
    this->salary = salary;
    this->startTime = startTime;
    this->endTime = endTime;
    this->login = login;
    this->password = password;
    this->dob = dob;
    this->gender = gender;
}


void CrudEmployee::setId(unsigned int id)
{
    this->id = id;
}

unsigned int CrudEmployee::getId()
{
    return id;
}


void CrudEmployee::setCrudEmployeeName(QString name)
{
    this->CrudEmployeeName = name;
}

QString CrudEmployee::getCrudEmployeeName()
{
    return CrudEmployeeName;
}

void CrudEmployee::setCrudEmployeeLastName(QString lastName)
{
    this->CrudEmployeeLastName = lastName;
}

QString CrudEmployee::getCrudEmployeeLastName()
{
    return CrudEmployeeLastName;
}

void CrudEmployee::setPost(QString post)
{
    this->post = post;
}

QString CrudEmployee::getPost()
{
    return post;
}

void CrudEmployee::setSalary(unsigned int salary)
{
    this->salary = salary;
}

unsigned int CrudEmployee::getSalary()
{
    return salary;
}

void CrudEmployee::setStartTime(QTime startTime)
{
    this->startTime = startTime;
}

QTime CrudEmployee::getStartTime()
{
    return startTime;
}

void CrudEmployee::setEndTime(QTime endTime)
{
    this->endTime = endTime;
}

QTime CrudEmployee::getEndTime()
{
    return endTime;
}

void CrudEmployee::setPassword(QString password)
{
    this->password = password;
}

QString CrudEmployee::getPassword()
{
    return password;
}

void CrudEmployee::setLogin(QString login)
{
    this->login = login;
}

QString CrudEmployee::getLogin()
{
    return login;
}

void CrudEmployee::setDob(QDate dob)
{
    this->dob = dob;
}

QDate CrudEmployee::getDob()
{
    return dob;
}

void CrudEmployee::setGender(QString gender) {
    this->gender = gender;
}

QString CrudEmployee::getGender() {
    return gender;
}

bool CrudEmployee::createEmployee(CrudEmployee emp) {
    QSqlQuery query;
    query.prepare("INSERT INTO employees (id, name, last_name, post, salary, start_time, end_time, password, login, dob, gender) VALUES (:id, :name, :last_name, :post, :salary, :start_time, :end_time, :password, :login, :dob, :gender)");

    query.bindValue(":id", emp.getId());
    query.bindValue(":name", emp.getCrudEmployeeName());
    query.bindValue(":last_name", emp.getCrudEmployeeLastName());
    query.bindValue(":post", emp.getPost());
    query.bindValue(":salary", emp.getSalary());
    query.bindValue(":start_time", emp.getStartTime());
    query.bindValue(":end_time", emp.getEndTime());
    query.bindValue(":password", emp.getPassword());
    query.bindValue(":login", emp.getLogin());
    query.bindValue(":dob", emp.getDob());
    query.bindValue(":gender", emp.getGender());

    if (!query.exec()) {
        qDebug() << "Error executing query:";
        qDebug() << "Query:" << query.lastQuery();
        qDebug() << "Error:" << query.lastError().text();
        return false;
    } else {
        qDebug() << "Query executed successfully:";
        qDebug() << "Query:" << query.lastQuery();
        return true;
    }
}


CrudEmployee CrudEmployee::getEmployee(unsigned int id) {
    QSqlQuery query;
    query.prepare("SELECT * FROM employees WHERE id = :id");
    query.bindValue(":id", id);
    query.exec();
    CrudEmployee emp(0, "", "", "", 0, QTime(), QTime(), "", "", QDate(), "");
    while (query.next()) {
        emp.setId(query.value(0).toUInt());
        emp.setCrudEmployeeName(query.value(2).toString());
        emp.setCrudEmployeeLastName(query.value(3).toString());
        emp.setPost(query.value(4).toString());
        emp.setSalary(query.value(5).toUInt());
        emp.setStartTime(query.value(6).toTime());
        emp.setEndTime(query.value(7).toTime());
        emp.setPassword(query.value(8).toString());
        emp.setLogin(query.value(9).toString());
        emp.setDob(query.value(10).toDate());
        emp.setGender(query.value(11).toString());
    }
    return emp;
}

bool CrudEmployee::updateEmployee(unsigned int id, CrudEmployee emp) {
    QSqlQuery query;
    query.prepare("UPDATE employees SET id = :id, name = :name, last_name = :last_name, post = :post, salary = :salary, start_time = :start_time, end_time = :end_time, password = :password, login = :login, dob = :dob, gender = :gender WHERE id = :id");
    query.bindValue(":id", emp.getId());
    query.bindValue(":name", emp.getCrudEmployeeName());
    query.bindValue(":last_name", emp.getCrudEmployeeLastName());
    query.bindValue(":post", emp.getPost());
    query.bindValue(":salary", emp.getSalary());
    query.bindValue(":start_time", emp.getStartTime());
    query.bindValue(":end_time", emp.getEndTime());
    query.bindValue(":password", emp.getPassword());
    query.bindValue(":login", emp.getLogin());
    query.bindValue(":dob", emp.getDob());
    query.bindValue(":gender", emp.getGender());
    return query.exec();
}

bool CrudEmployee::deleteEmployee(unsigned int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM employees WHERE id = :id");
    query.bindValue(":id", id);
    return query.exec();
}

