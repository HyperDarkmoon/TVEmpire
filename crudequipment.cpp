#include "crudequipment.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <vector>


CRUDequipment::CRUDequipment(int id, const QString label, int stock, const QString state, const QString category)
    : id(id), label(label), stock(stock), state(state), category(category) {}
CRUDequipment::CRUDequipment(){

}
CRUDequipment::~CRUDequipment() {}
void CRUDequipment::setId(int newid)
{
    id = newid;
}

int CRUDequipment::getId() const {
    return id;
}

QString CRUDequipment::getlabel() const {
    return label;
}

QString CRUDequipment::getstate() const {
    return state;
}

QString CRUDequipment::getcategory() const {
    return category;
}

int CRUDequipment::getStock() const {
    return stock;
}

void CRUDequipment::setlabel(const QString& newLabel) {
    label = newLabel;
}

void CRUDequipment::setstate(const QString& newState) {
    state = newState;
}

void CRUDequipment::setcategory(const QString& newCategory) {
    category = newCategory;
}

void CRUDequipment::setStock(int newStock) {
    stock = newStock;
}

void CRUDequipment::addEquipment() {
    QSqlQuery query;
    query.prepare("INSERT INTO equipement (id, libelle, quantite, condition, categorie) VALUES (EQ_SEQ.NEXTVAL, :label, :stock, :state, :category)");

    query.bindValue(":label", label);
    query.bindValue(":stock", stock);
    query.bindValue(":state", state);
    query.bindValue(":category", category );

    if (query.exec()) {
        qDebug() << "Equipment added successfully!";
    } else {
        qDebug() << "Error adding equipment:" << query.lastError().text();
    }
}

void CRUDequipment::readEquipment() {
    QSqlQuery query;
    query.prepare("SELECT * FROM equipement WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        if (query.next()) {
            id = query.value("id").toInt();
            label = query.value("label").toString();
            stock = query.value("stock").toInt();
            state = query.value("state").toString();
            category = query.value("category").toString();
            qDebug() << "Equipment read successfully!";
        } else {
            qDebug() << "Equipment not found!";
        }
    } else {
        qDebug() << "Error reading equipment:" << query.lastError().text();
    }
}

void CRUDequipment::updateEquipment() {
    QSqlQuery query;
    query.prepare("UPDATE equipement SET libelle = :label, quantite = :stock, condition = :state, categorie = :category WHERE id = :id");
    query.bindValue(":id", id);
    query.bindValue(":label", (label));
    query.bindValue(":stock", stock);
    query.bindValue(":state", (state));
    query.bindValue(":category", (category));

    if (query.exec()) {
        qDebug() << "Equipment updated successfully!";
    } else {
        qDebug() << "Error updating equipment:" << query.lastError().text();
    }
}

void CRUDequipment::deleteEquipment() {
    QSqlQuery query;
    query.prepare("DELETE FROM equipement WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        qDebug() << "Equipment deleted successfully!";
    } else {
        qDebug() << "Error deleting equipment:" << query.lastError().text();
    }
}
void CRUDequipment::deleteEquipment(int idd) {
    QSqlQuery query;
    query.prepare("DELETE FROM equipement WHERE id = :id");
    query.bindValue(":id", idd);

    if (query.exec()) {
        qDebug() << "Equipment deleted successfully!";
    } else {
        qDebug() << "Error deleting equipment:" << query.lastError().text();
    }
}





