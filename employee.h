#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <QWidget>
#include <QTime>
#include <QDate>
#include "addemployee.h"
#include "employeeedit.h"

namespace Ui {
class Employee;
}

class Employee : public QWidget
{
    Q_OBJECT

public:
    explicit Employee(QWidget *parent = nullptr);
    ~Employee();
    void refreshTable();
    void filterTable(const QString &text);
    void onAddEmployeeDialogClosed();

private slots:
    void on_add_btn_2_clicked();
    void onDeleteButtonClicked(int row);
    void onEditButtonClicked(int row);
    void on_add_btn_3_clicked();

    void on_add_btn_4_clicked();

private:
    Ui::Employee *ui;
    addEmployee *employeeDialog;
    employeeedit *edit;
};

class CrudEmployee
{
public:
    CrudEmployee(unsigned int id = 0, QString name = "", QString lastName = "", QString post = "", unsigned int salary = 0, QTime startTime = QTime(), QTime endTime = QTime(), QString login = "", QString password = "", QDate dob = QDate(), QString gender = "");
    void setId(unsigned int id);
    unsigned int getId() const;


    void setEmployeeName(QString name);
    QString getEmployeeName() const;

    void setEmployeeLastName(QString lastName);
    QString getEmployeeLastName() const;

    void setPost(QString post);
    QString getPost() const;

    void setSalary(unsigned int email);
    unsigned int getSalary() const;

    void setStartTime(QTime startTime);
    QTime getStartTime() const;

    void setEndTime(QTime endTime);
    QTime getEndTime() const;

    void setPassword(QString password);
    QString getPassword() const;

    void setLogin(QString login);
    QString getLogin() const;

    void setDob(QDate dob);
    QDate getDob() const;

    void setGender(QString gender);
    QString getGender() const;

    bool createEmployee(CrudEmployee emp);
    CrudEmployee getEmployee(unsigned int id);
    QList<CrudEmployee> getAllEmployees();
    QVariant getFieldByIndex(int index) const;
    bool updateEmployee(unsigned int idToUpdate, CrudEmployee emp);
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

#endif // EMPLOYEE_H
