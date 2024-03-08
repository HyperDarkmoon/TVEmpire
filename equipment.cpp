#include "equipment.h"
#include "ui_equipment.h"
#include "crudequipment.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
Equipment::Equipment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Equipment), addE(new addEquipment)
{
    ui->setupUi(this);
    connect(addE, &addEquipment::buttonClicked, this, &Equipment::onAddEmissionDialogClosed);
    refreshTable();
}
void Equipment::onAddEmissionDialogClosed(){
    refreshTable();
}
Equipment::~Equipment()
{
    delete ui;
}

void Equipment::on_Ajout_clicked()
{
    addE->show();
}

void Equipment::refreshTable()
{
    // Clear the existing content of the table
    ui->tableWidget_2->clearContents();
    ui->tableWidget_2->setRowCount(0);

    QStringList headers = {"ID", "libelle", "Quantite","condition","categorie","delete","edit"};
    ui->tableWidget_2->setColumnCount(headers.size());
    ui->tableWidget_2->setHorizontalHeaderLabels(headers);

    // Create an object of CRUDEmployee
    CRUDequipment c;

    // Fetch all employees using getAllEmployees method
    QList<CRUDequipment> EquipmentList = c.getAll();

    for (int row = 0; row < EquipmentList.size(); ++row) {
        ui->tableWidget_2->insertRow(row);

        for (int col = 0; col < headers.size() - 2; ++col) {  // Adjusted loop to skip the "Delete" and "Edit" columns
            QString fieldData = EquipmentList.at(row).getFieldByIndex(col).toString();
            QTableWidgetItem *item = new QTableWidgetItem(fieldData);
            ui->tableWidget_2->setItem(row, col, item);
        }

        // Add "Delete" button for each row in the "Delete" column
        QPushButton *deleteButton = new QPushButton("Delete", this);
        unsigned int id = ui->tableWidget_2->item(row,0)->text().toUInt();
        connect(deleteButton, &QPushButton::clicked, [this, id]() {
            onDeleteButtonClicked(id);
        });
        ui->tableWidget_2->setCellWidget(row, headers.size() - 2, deleteButton);

        // Add "Edit" button for each row in the "Edit" column
        QPushButton *editButton = new QPushButton("Edit", this);
        connect(editButton, &QPushButton::clicked, [this, row]() {
            onEditButtonClicked(row);
        });
        ui->tableWidget_2->setCellWidget(row, headers.size() - 1, editButton);
    }
}

QList<CRUDequipment> CRUDequipment::getAll() {
    QSqlQuery query;
    query.prepare("SELECT * FROM Equipement");
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }

    QList<CRUDequipment> EquipmentList;  // Use a list to store all records

    while (query.next()) {
        CRUDequipment em;  // Create a new object for each record
        em.setId(query.value(0).toUInt());
        em.setlabel(query.value(1).toString());
        em.setStock(query.value(2).toInt());
        em.setstate(query.value(3).toString());
        em.setcategory(query.value(4).toString());

        EquipmentList.append(em);  // Add the object to the list
    }

    return EquipmentList;
}
QVariant CRUDequipment::getFieldByIndex(int index) const{
    switch (index) {
    case 0:
        return getId();
    case 1:
        return getlabel();
    case 2:
        return getStock();
    case 3:
        return getstate();
    case 4:
        return getcategory();

    default:
        return QVariant();
    }
}


void Equipment::onDeleteButtonClicked(unsigned int id)
{

    CRUDequipment CRUDEmployee;
    CRUDEmployee.deleteEquipment(id);

        refreshTable();

}

void Equipment::onEditButtonClicked(int row)
{
    CRUDequipment e;

    e.setId(ui->tableWidget_2->item(row,0)->text().toInt());
    e.setlabel(ui->tableWidget_2->item(row,1)->text());
    e.setStock(ui->tableWidget_2->item(row,2)->text().toUInt());
    e.setstate(ui->tableWidget_2->item(row,3)->text());
    e.setcategory(ui->tableWidget_2->item(row,4)->text());
    e.updateEquipment();
    refreshTable();
}
