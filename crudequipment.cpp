#include "crudequipment.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <vector>


CRUDequipment::CRUDequipment(int id, const QString& label, int stock, const QString& state, const QString& category)
    : id(id), label(label), state(state), stock(stock), category(category) {}

CRUDequipment::~CRUDequipment() {}

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
    query.prepare("INSERT INTO equipment (id, label, stock, state, category) VALUES (:id, :label, :stock, :state, :category)");
    query.bindValue(":id", id);
    query.bindValue(":label", (label));
    query.bindValue(":stock", stock);
    query.bindValue(":state", (state));
    query.bindValue(":category", (category));

    if (query.exec()) {
        qDebug() << "Equipment added successfully!";
    } else {
        qDebug() << "Error adding equipment:" << query.lastError().text();
    }
}

void CRUDequipment::readEquipment() {
    QSqlQuery query;
    query.prepare("SELECT * FROM equipment WHERE id = :id");
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
    query.prepare("UPDATE equipment SET label = :label, stock = :stock, state = :state, category = :category WHERE id = :id");
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
    query.prepare("DELETE FROM equipment WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        qDebug() << "Equipment deleted successfully!";
    } else {
        qDebug() << "Error deleting equipment:" << query.lastError().text();
    }
}

bool CRUDequipment::createEquipment(CRUDequipment E) {
    QSqlQuery query;
    query.prepare("INSERT INTO equipment (id, label, stock, state, category) VALUES (equipment_seq.NEXTVAL, :label, :stock, :state, :category)");

    query.bindValue(":label", E.getlabel());
    query.bindValue(":state", E.getstate());
    query.bindValue(":category", E.getcategory());


    if (!query.exec()) {
        qDebug() << "Error executing query:";
        qDebug() << "Query:" << query.lastQuery();
        qDebug() << "Error:" << query.lastError().text();
        return false;
    } else {
        qDebug() << "Query executed successfully:";
        qDebug() << "Query:" << query.lastQuery();
        return true;
    }
}

