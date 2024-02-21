#ifndef ADDEMPLOYEE_H
#define ADDEMPLOYEE_H

#include <QDialog>


namespace Ui {
class addEmployee;
}

class addEmployee : public QDialog
{
    Q_OBJECT

public:
    explicit addEmployee(QWidget *parent = nullptr);
    ~addEmployee();

private:
    Ui::addEmployee *ui;
    addEmployee *Addemployee;
};

#endif // ADDEMPLOYEE_H
