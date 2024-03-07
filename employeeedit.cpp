#include "employeeedit.h"
#include "ui_employeeedit.h"
#include "employee.h"
#include <QDebug>

employeeedit::employeeedit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employeeedit)
{
    ui->setupUi(this);
}

employeeedit::~employeeedit()
{
    delete ui;
}

void employeeedit::setData(const CrudEmployee &employeeData)
{
    qDebug() << "Setting data for employee: " << employeeData.getId();

    // Debug statements to check if data retrieval is successful
    qDebug() << "Name: " << employeeData.getEmployeeName();
    qDebug() << "Last Name: " << employeeData.getEmployeeLastName();
    // Add similar statements for other data fields

    ui->name->setText(employeeData.getEmployeeName());
    ui->lastname->setText(employeeData.getEmployeeLastName());
    ui->post->setText(employeeData.getPost());
    ui->salary->setText(QString::number(employeeData.getSalary()));
    ui->starttime->setTime(employeeData.getStartTime());
    ui->endtime->setTime(employeeData.getEndTime());
    ui->login->setText(employeeData.getLogin());
    ui->dob->setDate(employeeData.getDob());
    ui->gender->setCurrentText("1");

    qDebug() << "Data set successfully.";
}

void employeeedit::on_pushButton_5_clicked()
{
    CrudEmployee c;
    c.setId(ui->id->text().toUInt());
    c.setEmployeeName(ui->name->text());
    c.setEmployeeLastName(ui->lastname->text());
    c.setPost(ui->post->text());
    c.setSalary(ui->salary->text().toUInt());
    c.setStartTime(ui->starttime->time());
    c.setEndTime(ui->endtime->time());
    c.setLogin(ui->login->text());
    c.setPassword(ui->password->text());
    c.setDob(ui->dob->date());
    c.setGender(ui->dob->text());
    c.updateEmployee(c.getId(),c);
    emit onButtonClick();
    this->close();
}
