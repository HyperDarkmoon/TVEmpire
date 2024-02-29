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

    // Get the ID of the employee in the selected row
    QTableWidgetItem* idItem = ui->emp->item(row, 0);  // Assuming ID is in the first column
    if (idItem) {
        unsigned int employeeId = idItem->text().toUInt();

        // Here, you can implement the logic to delete the corresponding row from your data source
        // For example, you might want to delete the record from the database using CrudEmployee class
        CrudEmployee crudEmployee;
        if (crudEmployee.deleteEmployee(employeeId)) {
            qDebug() << "Employee deleted successfully from the database.";

            // Remove the row from QTableWidget
            ui->emp->removeRow(row);
        } else {
            qDebug() << "Error deleting employee from the database.";
        }
    } else {
        qDebug() << "Unable to get employee ID from the selected row.";
    }
}

void Employee::onEditButtonClicked(int row)
{
    qDebug() << "Edit button clicked for row:" << row;

    // Get the ID of the employee in the selected row
    QTableWidgetItem* idItem = ui->emp->item(row, 0);  // Assuming ID is in the first column
    if (idItem) {
        unsigned int employeeId = idItem->text().toUInt();

        // Here, you can implement the logic to open the edit dialog for the corresponding employee
        // For example, you might want to pass the employeeId to the edit dialog
        // and then open the dialog for editing
        // For now, let's just print the ID for demonstration purposes
        qDebug() << "Editing employee with ID:" << employeeId;
    } else {
        qDebug() << "Unable to get employee ID from the selected row.";
    }
}

// ... rest of your code ...
void Employee::refreshTable()
{
    // Clear the existing content of the table
    ui->emp->clearContents();
    ui->emp->setRowCount(0);

    QStringList headers = {"ID", "Name", "Lastname", "Post", "Salary", "Start Time", "End Time", "Login", "DOB", "Gender", "Delete", "Edit"};
    ui->emp->setColumnCount(headers.size());
    ui->emp->setHorizontalHeaderLabels(headers);

    // Create an object of CrudEmployee
    CrudEmployee crudEmployee;

    // Fetch all employees using getAllEmployees method
    QList<CrudEmployee> employeesList = crudEmployee.getAllEmployees();

    for (int row = 0; row < employeesList.size(); ++row) {
        ui->emp->insertRow(row);

        for (int col = 0; col < headers.size() - 2; ++col) {  // Adjusted loop to skip the "Delete" and "Edit" columns
            QString fieldData = employeesList.at(row).getFieldByIndex(col).toString();
            QTableWidgetItem *item = new QTableWidgetItem(fieldData);
            ui->emp->setItem(row, col, item);
        }

        // Add "Delete" button for each row in the "Delete" column
        QPushButton *deleteButton = new QPushButton("Delete", this);
        connect(deleteButton, &QPushButton::clicked, [this, row]() {
            onDeleteButtonClicked(row);
        });
        ui->emp->setCellWidget(row, headers.size() - 2, deleteButton);

        // Add "Edit" button for each row in the "Edit" column
        QPushButton *editButton = new QPushButton("Edit", this);
        connect(editButton, &QPushButton::clicked, [this, row]() {
            onEditButtonClicked(row);
        });
        ui->emp->setCellWidget(row, headers.size() - 1, editButton);
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
