#include "crudemployee.h"
#include <QtSql>

CrudEmployee::CrudEmployee()
{
    id = 0;
    scene = "";
    CrudEmployeeName = "";
    CrudEmployeeLastName = "";
    post = "";
    salary = 0;
    startTime = QTime();
    endTime = QTime();
    password = "";
    login = "";
}

void CrudEmployee::setId(unsigned int id)
{
    this->id = id;
}

unsigned int CrudEmployee::getId()
{
    return id;
}

void CrudEmployee::setScene(QString scene)
{
    this->scene = scene;
}

QString CrudEmployee::getScene()
{
    return scene;
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

bool CrudEmployee::createEmployee(CrudEmployee emp) {
    QSqlQuery query;
    query.prepare("INSERT INTO employee (id, scene, name, last_name, post, salary, start_time, end_time, password, login, dob) VALUES (:id, :scene, :name, :last_name, :post, :salary, :start_time, :end_time, :password, :login, :dob)");
    query.bindValue(":id", emp.getId());
    query.bindValue(":scene", emp.getScene());
    query.bindValue(":name", emp.getCrudEmployeeName());
    query.bindValue(":last_name", emp.getCrudEmployeeLastName());
    query.bindValue(":post", emp.getPost());
    query.bindValue(":salary", emp.getSalary());
    query.bindValue(":start_time", emp.getStartTime());
    query.bindValue(":end_time", emp.getEndTime());
    query.bindValue(":password", emp.getPassword());
    query.bindValue(":login", emp.getLogin());
    query.bindValue(":dob", emp.getDob());
    return query.exec();
}

CrudEmployee CrudEmployee::getEmployee(unsigned int id) {
    QSqlQuery query;
    query.prepare("SELECT * FROM employee WHERE id = :id");
    query.bindValue(":id", id);
    query.exec();
    CrudEmployee emp;
    while (query.next()) {
        emp.setId(query.value(0).toUInt());
        emp.setScene(query.value(1).toString());
        emp.setCrudEmployeeName(query.value(2).toString());
        emp.setCrudEmployeeLastName(query.value(3).toString());
        emp.setPost(query.value(4).toString());
        emp.setSalary(query.value(5).toUInt());
        emp.setStartTime(query.value(6).toTime());
        emp.setEndTime(query.value(7).toTime());
        emp.setPassword(query.value(8).toString());
        emp.setLogin(query.value(9).toString());
        emp.setDob(query.value(10).toDate());
    }
    return emp;
}

bool CrudEmployee::updateEmployee(unsigned int id, CrudEmployee emp) {
    QSqlQuery query;
    query.prepare("UPDATE employee SET id = :id, scene = :scene, name = :name, last_name = :last_name, post = :post, salary = :salary, start_time = :start_time, end_time = :end_time, password = :password, login = :login, dob = :dob WHERE id = :id");
    query.bindValue(":id", emp.getId());
    query.bindValue(":scene", emp.getScene());
    query.bindValue(":name", emp.getCrudEmployeeName());
    query.bindValue(":last_name", emp.getCrudEmployeeLastName());
    query.bindValue(":post", emp.getPost());
    query.bindValue(":salary", emp.getSalary());
    query.bindValue(":start_time", emp.getStartTime());
    query.bindValue(":end_time", emp.getEndTime());
    query.bindValue(":password", emp.getPassword());
    query.bindValue(":login", emp.getLogin());
    query.bindValue(":dob", emp.getDob());
    return query.exec();
}

bool CrudEmployee::deleteEmployee(unsigned int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM employee WHERE id = :id");
    query.bindValue(":id", id);
    return query.exec();
}

