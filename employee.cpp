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
    QList<CrudEmployee> employeesList = crudEmployee.getAllEmployees();

    int rowCount = ui->emp->rowCount();

    for (int row = 0; row < employeesList.size(); ++row) {
        ui->emp->insertRow(row);

        for (int col = 0; col < headers.size(); ++col) {
            QString fieldData = employeesList.at(row).getFieldByIndex(col).toString();
            QTableWidgetItem *item = new QTableWidgetItem(fieldData);
            ui->emp->setItem(row, col, item);
        }
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
