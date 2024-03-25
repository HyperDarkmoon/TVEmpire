#include "employee.h"
#include "ui_employee.h"
#include "addemployee.h"
#include <QtWidgets>
#include <QtSql>
#include "pdfexport.h"
#include "usersession.h"

Employee::Employee(QWidget *parent) : QWidget(parent),
                                      ui(new Ui::Employee), employeeDialog(new addEmployee())
{
    ui->setupUi(this);
    refreshTable();
    connect(employeeDialog, &addEmployee::buttonClicked, this, &Employee::onAddEmployeeDialogClosed);
    connect(ui->search_input, &QLineEdit::textChanged, this, &Employee::filterTable);
}

void Employee::onDeleteButtonClicked(int row)
{

    QTableWidgetItem *idItem = ui->emp->item(row, 0); // Assuming ID is in the first column
    if (idItem)
    {
        unsigned int employeeId = idItem->text().toUInt();
        CrudEmployee crudEmployee;
        if (crudEmployee.deleteEmployee(employeeId))
        {
            ui->emp->removeRow(row);
            refreshTable();
        }
    }
}

void Employee::onEditButtonClicked(int row)
{
    QTableWidgetItem *idItem = ui->emp->item(row, 0);
    if (idItem)
    {
        unsigned int emissionId = idItem->text().toUInt();
        CrudEmployee employeeData; // Retrieve the data from the database
        edit = new employeeedit();
        employeeData = employeeData.getEmployee(emissionId);
        // Pass the data to the edit dialog
        edit->setData(employeeData);
        edit->show();
    }
    else
    {
        qDebug() << "Unable to get emission ID from the selected row.";
    }
}

void Employee::onAddEmployeeDialogClosed()
{
    refreshTable();
}

void Employee::refreshTable()
{
    // Update the user's role from the database
    UserSession::getInstance().updateRoleFromDatabase();

    // Get the current user's role from the session
    QString currentUserRole = UserSession::getInstance().getRole();
    qDebug() << "Current user's role:" << currentUserRole;

    // Clear the existing content of the table
    ui->emp->clearContents();
    ui->emp->setRowCount(0);

    QStringList headers = {"ID", "Name", "Lastname", "Post", "Salary", "Start Time", "End Time", "Login", "Password", "DOB", "Gender", "Delete", "Edit"};
    ui->emp->setColumnCount(headers.size());
    ui->emp->setHorizontalHeaderLabels(headers);

    // Create an object of CrudEmployee
    CrudEmployee crudEmployee;

    // Fetch all employees using getAllEmployees method
    QList<CrudEmployee> employeesList = crudEmployee.getAllEmployees();

    for (int row = 0; row < employeesList.size(); ++row)
    {
        const CrudEmployee& employee = employeesList.at(row);

        // Check if the current user has access to view this employee's details
        if (currentUserRole == "Personnel" && employee.getLogin() != UserSession::getInstance().getUsername()) {
            // If the user is "Personnel" and the employee is not the current user, skip this row
            continue;
        }

        ui->emp->insertRow(row);

        for (int col = 0; col < headers.size() - 2; ++col)
        { // Adjusted loop to skip the "Delete" and "Edit" columns
            QString fieldData = employee.getFieldByIndex(col).toString();
            QTableWidgetItem *item = new QTableWidgetItem(fieldData);
            ui->emp->setItem(row, col, item);
        }

        // Add "Delete" button for each row in the "Delete" column if the user is RH or Admin
        if (currentUserRole == "RH" || currentUserRole == "Admin") {
            QPushButton *deleteButton = new QPushButton("Delete", this);
            connect(deleteButton, &QPushButton::clicked, [this, row]()
                    { onDeleteButtonClicked(row); });
            ui->emp->setCellWidget(row, headers.size() - 2, deleteButton);
        }

        // Add "Edit" button for each row in the "Edit" column if the user is RH or Admin
        if (currentUserRole == "RH" || currentUserRole == "Admin") {
            QPushButton *editButton = new QPushButton("Edit", this);
            connect(editButton, &QPushButton::clicked, [this, row]()
                    { onEditButtonClicked(row); });
            ui->emp->setCellWidget(row, headers.size() - 1, editButton);
        }
    }

    // If the table is empty and the user is not "RH" or "Admin", show a message indicating no access
    if (employeesList.isEmpty() && currentUserRole != "RH" && currentUserRole != "Admin") {
        QMessageBox::information(this, "Access Denied", "You have no access to view employee details.");
    }
}



Employee::~Employee()
{
    delete ui;
}

void Employee::on_add_btn_2_clicked()
{
    employeeDialog->show();
}

void Employee::on_add_btn_3_clicked()
{
    refreshTable();
}

CrudEmployee::CrudEmployee(unsigned int id, QString name, QString lastName, QString post, unsigned int salary, QTime startTime, QTime endTime, QString login, QString password, QDate dob, QString gender)
{
    this->id = id;
    this->CrudEmployeeName = name;
    this->CrudEmployeeLastName = lastName;
    this->post = post;
    this->salary = salary;
    this->startTime = startTime;
    this->endTime = endTime;
    this->login = login;
    this->password = password;
    this->dob = dob;
    this->gender = gender;
}

void CrudEmployee::setId(unsigned int id)
{
    this->id = id;
}

unsigned int CrudEmployee::getId() const
{
    return id;
}

void CrudEmployee::setEmployeeName(QString name)
{
    this->CrudEmployeeName = name;
}

QString CrudEmployee::getEmployeeName() const
{
    return CrudEmployeeName;
}

void CrudEmployee::setEmployeeLastName(QString lastName)
{
    this->CrudEmployeeLastName = lastName;
}

QString CrudEmployee::getEmployeeLastName() const
{
    return CrudEmployeeLastName;
}

void CrudEmployee::setPost(QString post)
{
    this->post = post;
}

QString CrudEmployee::getPost() const
{
    return post;
}

void CrudEmployee::setSalary(unsigned int salary)
{
    this->salary = salary;
}

unsigned int CrudEmployee::getSalary() const
{
    return salary;
}

void CrudEmployee::setStartTime(QTime startTime)
{
    this->startTime = startTime;
}

QTime CrudEmployee::getStartTime() const
{
    return startTime;
}

void CrudEmployee::setEndTime(QTime endTime)
{
    this->endTime = endTime;
}

QTime CrudEmployee::getEndTime() const
{
    return endTime;
}

void CrudEmployee::setPassword(QString password)
{
    this->password = password;
}

QString CrudEmployee::getPassword() const
{
    return password;
}

void CrudEmployee::setLogin(QString login)
{
    this->login = login;
}

QString CrudEmployee::getLogin() const
{
    return login;
}

void CrudEmployee::setDob(QDate dob)
{
    this->dob = dob;
}

QDate CrudEmployee::getDob() const
{
    return dob;
}

void CrudEmployee::setGender(QString gender)
{
    this->gender = gender;
}

QString CrudEmployee::getGender() const
{
    return gender;
}

bool CrudEmployee::createEmployee(CrudEmployee emp)
{
    QSqlQuery query;
    query.prepare("INSERT INTO employees (id, name, last_name, post, salary, start_time, end_time, password, login, dob, gender) VALUES (employee_seq.NEXTVAL, :name, :last_name, :post, :salary, :start_time, :end_time, :password, :login, :dob, :gender)");

    query.bindValue(":name", emp.getEmployeeName());
    query.bindValue(":last_name", emp.getEmployeeLastName());
    query.bindValue(":post", emp.getPost());
    query.bindValue(":salary", emp.getSalary());
    query.bindValue(":start_time", emp.getStartTime());
    query.bindValue(":end_time", emp.getEndTime());
    query.bindValue(":password", emp.getPassword());
    query.bindValue(":login", emp.getLogin());
    query.bindValue(":dob", emp.getDob());
    query.bindValue(":gender", emp.getGender());

    if (!query.exec())
    {
        qDebug() << "Error executing query:";
        qDebug() << "Query:" << query.lastQuery();
        qDebug() << "Error:" << query.lastError().text();
        return false;
    }
    else
    {
        qDebug() << "Query executed successfully:";
        qDebug() << "Query:" << query.lastQuery();
        return true;
    }
}

CrudEmployee CrudEmployee::getEmployee(unsigned int id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM employees WHERE id = :id");
    query.bindValue(":id", id);
    query.exec();
    CrudEmployee emp;
    while (query.next())
    {
        emp.setId(query.value(0).toUInt());
        emp.setEmployeeName(query.value(1).toString());
        emp.setEmployeeLastName(query.value(2).toString());
        emp.setPost(query.value(3).toString());
        emp.setSalary(query.value(4).toUInt());
        emp.setStartTime(query.value(5).toTime());
        emp.setEndTime(query.value(6).toTime());
        emp.setPassword(query.value(7).toString());
        emp.setLogin(query.value(8).toString());
        emp.setDob(query.value(9).toDate());
        emp.setGender(query.value(10).toString());
    }
    return emp;
}

QList<CrudEmployee> CrudEmployee::getAllEmployees()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM employees");
    if (!query.exec())
    {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }

    QList<CrudEmployee> employeeList; // Use a list to store all records

    while (query.next())
    {
        CrudEmployee emp; // Create a new object for each record
        emp.setId(query.value(0).toUInt());
        emp.setEmployeeName(query.value(1).toString());
        emp.setEmployeeLastName(query.value(2).toString());
        emp.setPost(query.value(3).toString());
        emp.setSalary(query.value(4).toUInt());
        emp.setStartTime(query.value(5).toTime());
        emp.setEndTime(query.value(6).toTime());
        emp.setPassword(query.value(7).toString());
        emp.setLogin(query.value(8).toString());
        emp.setDob(query.value(9).toDate());
        emp.setGender(query.value(10).toString());

        employeeList.append(emp); // Add the object to the list
    }
    return employeeList;
}

QVariant CrudEmployee::getFieldByIndex(int index) const
{
    switch (index)
    {
    case 0:
        return getId();
    case 1:
        return getEmployeeName();
    case 2:
        return getEmployeeLastName();
    case 3:
        return getPost();
    case 4:
        return getSalary();
    case 5:
        return getStartTime();
    case 6:
        return getEndTime();
    case 7:
        return getPassword();
    case 8:
        return getLogin();
    case 9:
        return getDob();
    case 10:
        return getGender();
    default:
        return QVariant();
    }
}

bool CrudEmployee::updateEmployee(unsigned int idToUpdate, CrudEmployee emp)
{
    QSqlQuery query;
    qDebug() << "editing id: " << getId();
    query.prepare("UPDATE employees SET id = :newId, name = :name, last_name = :last_name, post = :post, salary = :salary, start_time = :start_time, end_time = :end_time, password = :password, login = :login, dob = :dob, gender = :gender WHERE id = :id");
    query.bindValue(":newId", emp.getId()); // New employee ID
    query.bindValue(":id", idToUpdate);     // ID to update
    query.bindValue(":name", emp.getEmployeeName());
    query.bindValue(":last_name", emp.getEmployeeLastName());
    query.bindValue(":post", emp.getPost());
    query.bindValue(":salary", emp.getSalary());
    query.bindValue(":start_time", emp.getStartTime());
    query.bindValue(":end_time", emp.getEndTime());
    query.bindValue(":password", emp.getPassword());
    query.bindValue(":login", emp.getLogin());
    query.bindValue(":dob", emp.getDob());
    query.bindValue(":gender", emp.getGender());
    return query.exec();
}

bool CrudEmployee::deleteEmployee(unsigned int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM employees WHERE id = :id");
    query.bindValue(":id", id);
    return query.exec();
}

void Employee::on_add_btn_4_clicked()
{
    pdfExport pdfExporter;

    pdfExporter.exportTableToPDF(ui->emp); // change ui->emp with your Qtablewidget name
}

void Employee::filterTable(const QString &text)
{
    // Get the search query
    QString query = text.toLower();

    // Iterate through each row in the table
    for (int row = 0; row < ui->emp->rowCount(); ++row)
    {
        bool matchFound = false;
        // Get the item in the first column of the current row
        QTableWidgetItem *item = ui->emp->item(row, 1); // Assuming the first column is the "Name" column
        if (item)
        {
            QString cellText = item->text().toLower();
            // Check if the cell text contains the search query
            if (cellText.contains(query))
            {
                matchFound = true;
            }
        }
        // Show or hide the row based on whether a match was found
        ui->emp->setRowHidden(row, !matchFound);
    }
}
