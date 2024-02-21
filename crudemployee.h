#ifndef CRUDCrudEmployee_H
#define CRUDCrudEmployee_H
#include <QWidget>
#include <QTime>
#include <QDate>

class CrudEmployee
{
public:
    CrudEmployee();
     void setId(unsigned int id);
    unsigned int getId();

    void setScene(QString scene);
    QString getScene();

    void setCrudEmployeeName(QString name);
    QString getCrudEmployeeName();

    void setCrudEmployeeLastName(QString lastName);
    QString getCrudEmployeeLastName();

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
    bool updateEmployee(unsigned int id, CrudEmployee emp);
    bool deleteEmployee(unsigned int id);
private: 
    unsigned int id;
    QString scene;
    QString CrudEmployeeName;
    QString CrudEmployeeLastName;
    QString post;
    unsigned int salary;
    QTime startTime;
    QTime endTime;
    QString password;
    QString login;
    QDate dob;

};

#endif // CRUDCrudEmployee_H
