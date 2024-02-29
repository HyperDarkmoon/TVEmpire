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

unsigned int CrudEmployee::getId() const
{
    return id;
}


void CrudEmployee::setEmployeeName(QString name)
{
    this->CrudEmployeeName = name;
}

QString CrudEmployee::getEmployeeName() const
{
    return CrudEmployeeName;
}

void CrudEmployee::setEmployeeLastName(QString lastName)
{
    this->CrudEmployeeLastName = lastName;
}

QString CrudEmployee::getEmployeeLastName() const
{
    return CrudEmployeeLastName;
}

void CrudEmployee::setPost(QString post)
{
    this->post = post;
}

QString CrudEmployee::getPost() const
{
    return post;
}

void CrudEmployee::setSalary(unsigned int salary)
{
    this->salary = salary;
}

unsigned int CrudEmployee::getSalary() const
{
    return salary;
}

void CrudEmployee::setStartTime(QTime startTime)
{
    this->startTime = startTime;
}

QTime CrudEmployee::getStartTime() const
{
    return startTime;
}

void CrudEmployee::setEndTime(QTime endTime)
{
    this->endTime = endTime;
}

QTime CrudEmployee::getEndTime() const
{
    return endTime;
}

void CrudEmployee::setPassword(QString password)
{
    this->password = password;
}

QString CrudEmployee::getPassword() const
{
    return password;
}

void CrudEmployee::setLogin(QString login)
{
    this->login = login;
}

QString CrudEmployee::getLogin() const
{
    return login;
}

void CrudEmployee::setDob(QDate dob)
{
    this->dob = dob;
}

QDate CrudEmployee::getDob() const
{
    return dob;
}

void CrudEmployee::setGender(QString gender) {
    this->gender = gender;
}

QString CrudEmployee::getGender() const {
    return gender;
}

bool CrudEmployee::createEmployee(CrudEmployee emp) {
    QSqlQuery query;
    query.prepare("INSERT INTO employees (id, name, last_name, post, salary, start_time, end_time, password, login, dob, gender) VALUES (employee_seq.NEXTVAL, :name, :last_name, :post, :salary, :start_time, :end_time, :password, :login, :dob, :gender)");

    query.bindValue(":name", emp.getEmployeeName());
    query.bindValue(":last_name", emp.getEmployeeLastName());
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
    query.prepare("SELECT  FROM employees WHERE id = :id");
    query.bindValue(":id", id);
    query.exec();
    CrudEmployee emp;
    while (query.next()) {
        emp.setId(query.value(0).toUInt());
        emp.setEmployeeName(query.value(2).toString());
        emp.setEmployeeLastName(query.value(3).toString());
        emp.setPost(query.value(4).toString());
        emp.setSalary(query.value(5).toUInt());
        emp.setStartTime(query.value(6).toTime());
        emp.setEndTime(query.value(7).toTime());
        emp.setLogin(query.value(9).toString());
        emp.setDob(query.value(10).toDate());
        emp.setGender(query.value(11).toString());
    }
    return emp;
}


QList<CrudEmployee> CrudEmployee::getAllEmployees() {
    QSqlQuery query;
    query.prepare("SELECT id, name, last_name, post, salary, start_time, end_time, login, dob, gender FROM employees");
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }

    QList<CrudEmployee> employeeList;  // Use a list to store all records

    while (query.next()) {
        CrudEmployee emp;  // Create a new object for each record
        emp.setId(query.value(0).toUInt());
        emp.setEmployeeName(query.value(1).toString());
        emp.setEmployeeLastName(query.value(2).toString());
        emp.setPost(query.value(3).toString());
        emp.setSalary(query.value(4).toUInt());
        emp.setStartTime(query.value(5).toTime());
        emp.setEndTime(query.value(6).toTime());
        emp.setLogin(query.value(7).toString());
        emp.setDob(query.value(8).toDate());
        emp.setGender(query.value(9).toString());

        employeeList.append(emp);  // Add the object to the list
    }

    return employeeList;
}


QVariant CrudEmployee::getFieldByIndex(int index) const {
    switch (index) {
    case 0:
        return getId();
    case 1:
        return getEmployeeName();
    case 2:
        return getEmployeeLastName();
    case 3:
        return getPost();
    case 4:
        return getSalary();
    case 5:
        return getStartTime();
    case 6:
        return getEndTime();
    case 7:
        return getLogin();
    case 8:
        return getDob();
    case 9:
        return getGender();
    default:
        return QVariant();
    }
}

bool CrudEmployee::updateEmployee(unsigned int id, CrudEmployee emp) {
    QSqlQuery query;
    query.prepare("UPDATE employees SET id = :id, name = :name, last_name = :last_name, post = :post, salary = :salary, start_time = :start_time, end_time = :end_time, password = :password, login = :login, dob = :dob, gender = :gender WHERE id = :id");
    query.bindValue(":id", emp.getId());
    query.bindValue(":name", emp.getEmployeeName());
    query.bindValue(":last_name", emp.getEmployeeLastName());
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

