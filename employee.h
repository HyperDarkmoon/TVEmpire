#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QWidget>

namespace Ui {
class Employee;
}

class Employee : public QWidget
{
    Q_OBJECT

public:
    explicit Employee(QWidget *parent = nullptr);
    ~Employee();

private:
    Ui::Employee *ui;
};

#endif // EMPLOYEE_H
