#include "employee.h"
#include "ui_employee.h"
#include "addemployee.h"
#include "crudemployee.h"
#include <QtWidgets>
#include <QtSql>

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
    refreshTable();
}

void Employee::onDeleteButtonClicked(int row)
{
    qDebug() << "Delete button clicked for row:" << row;

    // Here, you can implement the logic to delete the corresponding row from your data source
    // For example, you might want to delete the record from the database using CrudEmployee class

    // Remove the row from QTableWidget
    ui->emp->removeRow(row);
}

// ... rest of your code ...

void Employee::refreshTable()
{
    // Clear the existing content of the table
    ui->emp->clearContents();
    ui->emp->setRowCount(0);

    QStringList headers = {"ID", "Name", "Lastname", "Post", "Salary", "Start Time", "End Time", "Login", "DOB", "Gender", "Options"};
    ui->emp->setColumnCount(headers.size());
    ui->emp->setHorizontalHeaderLabels(headers);

    // Create an object of CrudEmployee
    CrudEmployee crudEmployee;

    // Fetch all employees using getAllEmployees method
    QList<CrudEmployee> employeesList = crudEmployee.getAllEmployees();

    for (int row = 0; row < employeesList.size(); ++row) {
        ui->emp->insertRow(row);

        for (int col = 0; col < headers.size() - 1; ++col) {
            QString fieldData = employeesList.at(row).getFieldByIndex(col).toString();
            QTableWidgetItem *item = new QTableWidgetItem(fieldData);
            ui->emp->setItem(row, col, item);
        }

        // Add delete button for each row in the "Options" column
        QPushButton *deleteButton = new QPushButton("Delete", this);
        connect(deleteButton, &QPushButton::clicked, [this, row]() {
            onDeleteButtonClicked(row);
        });
        ui->emp->setCellWidget(row, headers.size() - 1, deleteButton);
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

void Employee::on_add_btn_3_clicked()
{
    refreshTable();
}
