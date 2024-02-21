#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QWidget>
#include "addemployee.h"

namespace Ui {
class Employee;
}

class Employee : public QWidget
{
    Q_OBJECT

public:
    explicit Employee(QWidget *parent = nullptr);
    ~Employee();

private slots:
    void on_addEmpButton_clicked();

private:
    Ui::Employee *ui;
    addEmployee *employeeDialog;

};

#endif // EMPLOYEE_H
