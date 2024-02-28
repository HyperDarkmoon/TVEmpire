#ifndef CRUDCrudEmployee_H
#define CRUDCrudEmployee_H
#include <QWidget>
#include <QTime>
#include <QDate>

class CrudEmployee
{
public:
    CrudEmployee(unsigned int id = 0, QString name = "", QString lastName = "", QString post = "", unsigned int salary = 0, QTime startTime = QTime(), QTime endTime = QTime(), QString login = "", QString password = "", QDate dob = QDate(), QString gender = "");
    void setId(unsigned int id);
    unsigned int getId();


    void setEmployeeName(QString name);
    QString getEmployeeName();

    void setEmployeeLastName(QString lastName);
    QString getEmployeeLastName();

    void setPost(QString post);
    QString getPost();

    void setSalary(unsigned int email);
    unsigned int getSalary();

    void setStartTime(QTime startTime);
    QTime getStartTime();

    void setEndTime(QTime endTime);
    QTime getEndTime();

    void setPassword(QString password);
    QString getPassword();

    void setLogin(QString login);
    QString getLogin();

    void setDob(QDate dob);
    QDate getDob();

    void setGender(QString gender);
    QString getGender();

    bool createEmployee(CrudEmployee emp);
    CrudEmployee getEmployee(unsigned int id);
    CrudEmployee getAllEmployees();
    QVariant getFieldByIndex(int index);
    bool updateEmployee(unsigned int id, CrudEmployee emp);
    bool deleteEmployee(unsigned int id);
private: 
    unsigned int id;
    QString CrudEmployeeName;
    QString CrudEmployeeLastName;
    QString post;
    unsigned int salary;
    QTime startTime;
    QTime endTime;
    QString password;
    QString login;
    QDate dob;
    QString gender;

};

#endif // CRUDCrudEmployee_H
