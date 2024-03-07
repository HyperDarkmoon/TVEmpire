#include "sponsor.h"
#include "ui_sponsor.h"
#include <QTableWidgetItem>
#include "QDebug"

Sponsor::Sponsor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sponsor)
{
    ui->setupUi(this);
    refreshTable();
}

Sponsor::~Sponsor()
{
    delete ui;
}

unsigned int CrudSponsor::getId() const {
    return id;
}

QString CrudSponsor::getNom() const {
    return nom;
}

QString CrudSponsor::getEmail() const {
    return email;
}

QString CrudSponsor::getPhone() const {
    return phone;
}

QString CrudSponsor::getCategories() const {
    return categories;
}

void CrudSponsor::setId(unsigned int newId) {
    id = newId;
}

void CrudSponsor::setNom(const QString& newNom) {
    nom = newNom;
}

void CrudSponsor::setEmail(const QString& newEmail) {
    email = newEmail;
}

void CrudSponsor::setPhone(const QString& newPhone) {
    phone = newPhone;
}

void CrudSponsor::setCategories(const QString& newCategories) {
    categories = newCategories;
}

bool CrudSponsor::create(CrudSponsor s)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Sponsor (id, nom) VALUES (sponsor_seq.NEXTVAL, :nom)");
    query.bindValue(":nom", s.getNom());

    if (query.exec()) {
        return true;
    } else {
        return false;
    }
}

CrudSponsor CrudSponsor::read(unsigned int id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Sponsor WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        CrudSponsor s;
        s.setId(query.value("id").toUInt());
        s.setNom(query.value("nom").toString());
        return s;
    } else {
        return CrudSponsor();
    }
}

bool CrudSponsor::update(unsigned int id, CrudSponsor s)
{
    QSqlQuery query;
    query.prepare("UPDATE Sponsor SET nom = :nom WHERE id = :id");
    query.bindValue(":id", id);
    query.bindValue(":nom", s.getNom());

    if (query.exec()) {
        return true;
    } else {
        return false;
    }
}

bool CrudSponsor::remove(unsigned int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM Sponsor WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        return true;
    } else {
        return false;
    }
}

void Sponsor::on_add_btn_clicked()
{
    CrudSponsor c;
    c.setId(ui->lineEdit->text().toUInt());
    c.setNom(ui->lineEdit_2->text());
    c.create(c);
    refreshTable();
}
void Sponsor::refreshTable()
{
    // Clear the existing content of the table
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    QStringList headers = {"ID", "Nom", "Genre","delete","edit"};
    ui->tableWidget->setColumnCount(headers.size());
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    // Create an object of CrudEmployee
    CrudSponsor c;

    // Fetch all employees using getAllEmployees method
    QList<CrudSponsor> emissionList = c.getAll();

    for (int row = 0; row < emissionList.size(); ++row) {
        ui->tableWidget->insertRow(row);

        for (int col = 0; col < headers.size() - 2; ++col) {  // Adjusted loop to skip the "Delete" and "Edit" columns
            QString fieldData = emissionList.at(row).getFieldByIndex(col).toString();
            QTableWidgetItem *item = new QTableWidgetItem(fieldData);
            ui->tableWidget->setItem(row, col, item);
        }

        // Add "Delete" button for each row in the "Delete" column
        QPushButton *deleteButton = new QPushButton("Delete", this);
        connect(deleteButton, &QPushButton::clicked, [this, row]() {
            onDeleteButtonClicked(row);
        });
        ui->tableWidget->setCellWidget(row, headers.size() - 2, deleteButton);

        // Add "Edit" button for each row in the "Edit" column
        QPushButton *editButton = new QPushButton("Edit", this);
        connect(editButton, &QPushButton::clicked, [this, row]() {
            onEditButtonClicked(row);
        });
        ui->tableWidget->setCellWidget(row, headers.size() - 1, editButton);
    }
}
QList<CrudSponsor> CrudSponsor::getAll() {
    QSqlQuery query;
    query.prepare("SELECT id, nom FROM sponsor");
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }

    QList<CrudSponsor> emissionList;  // Use a list to store all records

    while (query.next()) {
        CrudSponsor em;  // Create a new object for each record
        em.setId(query.value(0).toUInt());
        em.setNom(query.value(1).toString());
        emissionList.append(em);  // Add the object to the list
    }

    return emissionList;
}
QVariant CrudSponsor::getFieldByIndex(int index) const{
    switch (index) {
    case 0:
        return getId();
    case 1:
        return getNom();

    default:
        return QVariant();
    }
}
void Sponsor::onDeleteButtonClicked(int row)
{

    // Get the ID of the employee in the selected row
    QTableWidgetItem* idItem = ui->tableWidget->item(row, 0);  // Assuming ID is in the first column
    if (idItem) {
        unsigned int employeeId = idItem->text().toUInt();

        // Here, you can implement the logic to delete the corresponding row from your data source
        // For example, you might want to delete the record from the database using CrudEmployee class
        CrudSponsor crudEmployee;
        if (crudEmployee.remove(employeeId)) {

            // Remove the row from QTableWidget
            ui->tableWidget->removeRow(row);
        }
    }
}
void Sponsor::onEditButtonClicked(int row)
{


}

