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
    if (!ui) {
            qDebug() << "Error: UI object is not initialized.";
            return;
        }

        qDebug() << "Setting data for employee: " << employeeData.getId();

        if (!ui->name || !ui->lastname || !ui->post || !ui->salary || !ui->starttime || !ui->endtime || !ui->login || !ui->dob || !ui->gender) {
            qDebug() << "Error: One or more UI elements are not initialized.";
            return;
        }
    ui->id->setText(QString::number(employeeData.getId()));
    ui->name->setText(employeeData.getEmployeeName());
    ui->lastname->setText(employeeData.getEmployeeLastName());
    ui->post->setText(employeeData.getPost());
    ui->salary->setText(QString::number(employeeData.getSalary()));
    ui->starttime->setTime(employeeData.getStartTime());
    ui->endtime->setTime(employeeData.getEndTime());
    ui->login->setText(employeeData.getLogin());
    ui->dob->setDate(employeeData.getDob());
    ui->gender->setCurrentText(employeeData.getGender());
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
    c.setPassword("placeholder");
    c.setDob(ui->dob->date());
    c.setGender(ui->dob->text());
    c.updateEmployee(c.getId(),c);
    emit onButtonClick();
    this->close();
}
