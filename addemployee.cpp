#include "addemployee.h"
#include "ui_addemployee.h"
#include <QDebug>
#include <QMessageBox>
#include "employee.h"
#include <QRegExpValidator>
#include <QDate>

addEmployee::addEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addEmployee)
{
    ui->setupUi(this);

    // Set up a validator for the salary field to accept only numerical characters
    QRegExpValidator* salaryValidator = new QRegExpValidator(QRegExp("[0-9]*"), this);
    ui->salary->setValidator(salaryValidator);

    // Connect a custom validator for the password field
    connect(ui->password, &QLineEdit::textChanged, this, &addEmployee::validatePassword);
}

addEmployee::~addEmployee()
{
    delete ui;
}

void addEmployee::validatePassword()
{
    // Check if the password contains at least one uppercase, one number, and one symbol
    QRegExp passwordRegex("^(?=.*[A-Z])(?=.*\\d)(?=.*[!@#$%^&*()_+])[A-Za-z\\d!@#$%^&*()_+]+$");

    if (!passwordRegex.exactMatch(ui->password->text())) {
        ui->password->setStyleSheet("QLineEdit { border: 1px solid red; }");
    } else {
        ui->password->setStyleSheet(""); // Reset the style
    }
}

void addEmployee::on_pushButton_5_clicked()
{
    // Check if any of the fields are empty
    if (ui->name->text().isEmpty() || ui->lastname->text().isEmpty() || ui->post->text().isEmpty() ||
        ui->salary->text().isEmpty() || ui->starttime->time().isNull() || ui->endtime->time().isNull() ||
        ui->login->text().isEmpty() || ui->password->text().isEmpty() || ui->dob->date().isNull() ||
        ui->gender->currentText().isEmpty()) {

        // Show an error dialog
        QMessageBox::critical(this, "Error", "Please fill in all the fields.");
        return;
    }

    // Check if the date of birth is greater than the system date
    QDate currentDate = QDate::currentDate();
    QDate inputDate = ui->dob->date();

    if (inputDate > currentDate) {
        // Show an error dialog
        QMessageBox::critical(this, "Error", "Date of Birth cannot be in the future.");
        return;
    }

    // Validate the password
    validatePassword();

    // Check if the password meets the requirements
    if (ui->password->styleSheet() == "QLineEdit { border: 1px solid red; }") {
        // Show an error dialog
        QMessageBox::critical(this, "Error", "Password must have at least one uppercase letter, one number, and one symbol.");
        return;
    }

    // Proceed with creating the employee if fields are not empty and password is valid
    CrudEmployee Emp(0, ui->name->text(), ui->lastname->text(), ui->post->text(), ui->salary->text().toUInt(),
                     ui->starttime->time(), ui->endtime->time(), ui->login->text(), ui->password->text(),
                     ui->dob->date(), ui->gender->currentText());

    bool check =  Emp.createEmployee(Emp);
    qDebug() << check;

    if (check) {
        this->close();
    } else {
        // Show an error dialog
        QMessageBox::critical(this, "Error", "Unable to create employee.");
    }
}
