#include "addemployee.h"
#include "ui_addemployee.h"
#include "crudemployee.h"
addEmployee::addEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addEmployee)
{
    ui->setupUi(this);
}

addEmployee::~addEmployee()
{
    delete ui;
}

void addEmployee::on_pushButton_5_clicked()
{
    CrudEmployee Emp(2, ui->name->text(), ui->lastname->text(), ui->post->text(), ui->salary->text().toUInt(), ui->starttime->time(), ui->endtime->time(), ui->login->text(), ui->password->text(), ui->dob->date(), ui->gender->currentText());
    Emp.createEmployee(Emp);
}
