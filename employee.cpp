#include "employee.h"
#include "ui_employee.h"
#include "addemployee.h"
#include "crudemployee.h"
#include <QtWidgets>
#include <QtSql>

Employee::Employee(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Employee), employeeDialog(new addEmployee())
{
    ui->setupUi(this);

    qDebug() << "Setting up UI and headers...";

    QStringList headers = {"ID", "Name", "Lastname", "Post", "Salary", "Start Time", "End Time", "Login", "Password", "DOB", "Gender"};
    ui->emp->setColumnCount(headers.size());
    ui->emp->setHorizontalHeaderLabels(headers);

    // Create an object of CrudEmployee
    qDebug() << "Creating CrudEmployee object...";
    CrudEmployee crudEmployee;

    // Fetch all employees using getAllEmployees method
    qDebug() << "Fetching all employees...";
    CrudEmployee emp = crudEmployee.getAllEmployees();

    int row = ui->emp->rowCount();
    ui->emp->insertRow(row);

    qDebug() << "Inserting data into QTableWidget...";

    for (int i = 0; i < headers.size(); ++i) {
        QString fieldData = emp.getFieldByIndex(i).toString();
        QTableWidgetItem *item = new QTableWidgetItem(fieldData);
        ui->emp->setItem(row, i, item);
        qDebug() << "test";
        qDebug() << headers.at(i) << ": " << fieldData;
    }

    qDebug() << "Debug statements added successfully.";
}

Employee::~Employee()
{
    delete ui;
}

void Employee::on_add_btn_2_clicked()
{
    qDebug() << "Add button clicked. Showing employee dialog...";
    employeeDialog->show();
}
