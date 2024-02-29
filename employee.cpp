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
    ui->emp->setColumnCount(headers.size() + 1);  // Increase column count for delete button
    ui->emp->setHorizontalHeaderLabels(headers);

    // Create an object of CrudEmployee
    CrudEmployee crudEmployee;

    // Fetch all employees using getAllEmployees method
    QList<CrudEmployee> employeesList = crudEmployee.getAllEmployees();

    int rowCount = ui->emp->rowCount();

    for (int row = 0; row < employeesList.size(); ++row) {
        ui->emp->insertRow(row);

        // Add delete button for each row in the first column
        QPushButton *deleteButton = new QPushButton("Delete", this);
        connect(deleteButton, &QPushButton::clicked, [this, row]() {
            onDeleteButtonClicked(row);
        });
        ui->emp->setCellWidget(row, 0, deleteButton);

        for (int col = 0; col < headers.size(); ++col) {
            QString fieldData = employeesList.at(row).getFieldByIndex(col).toString();
            QTableWidgetItem *item = new QTableWidgetItem(fieldData);
            ui->emp->setItem(row, col + 1, item);  // Shift columns by 1 to accommodate delete button
        }
    }
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



Employee::~Employee()
{
    delete ui;
}

void Employee::on_add_btn_2_clicked()
{
    qDebug() << "Add button clicked. Showing employee dialog...";
    employeeDialog->show();
}
