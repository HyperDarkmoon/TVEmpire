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

    QStringList headers = {"ID", "Name", "Lastname", "Post", "Salary", "Start Time", "End Time", "Login", "DOB", "Gender"};
    ui->emp->setColumnCount(headers.size());
    ui->emp->setHorizontalHeaderLabels(headers);

    // Create an object of CrudEmployee
    CrudEmployee crudEmployee;

    // Fetch all employees using getAllEmployees method
    CrudEmployee emp = crudEmployee.getAllEmployees();

    int rowCount = ui->emp->rowCount();  // Get the current number of rows


    ui->emp->insertRow(0);  // Insert a new row at the beginning

    for (int i = 0; i < headers.size(); ++i) {
        qDebug() << "help me" << emp.getFieldByIndex(i);
        QString fieldData = emp.getFieldByIndex(i).toString();
        QTableWidgetItem *item = new QTableWidgetItem(fieldData);
        ui->emp->setItem(0, i, item);  // Set the item at row 0
        qDebug() << "test";
        qDebug() << headers.at(i) << ": " << fieldData;
    }
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
