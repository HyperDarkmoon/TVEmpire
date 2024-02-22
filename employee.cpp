#include "employee.h"
#include "ui_employee.h"
#include "addemployee.h"

Employee::Employee(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Employee), employeeDialog(new addEmployee())
{

    ui->setupUi(this);

}

Employee::~Employee()
{
    delete ui;
}



void Employee::on_add_btn_clicked()
{
    employeeDialog->show();
}

