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

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::addEmployee *ui;
    addEmployee *Addemployee;
};

#endif // ADDEMPLOYEE_H