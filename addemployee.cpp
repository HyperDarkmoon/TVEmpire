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
    CrudEmployee Emp(NULL, ui->name->text(), ui->lastname->text(), );

}
