#include "crudequipment.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <vector>

CRUDequipment::CRUDequipment(int id, const std::string& label, int stock, const std::string& state, const std::string& category)
    : id(id), label(label), state(state), stock(stock), category(category) {}

CRUDequipment::~CRUDequipment() {}

int CRUDequipment::getId() const {
    return id;
}

std::string CRUDequipment::getlabel() const {
    return label;
}

std::string CRUDequipment::getstate() const {
    return state;
}

std::string CRUDequipment::getcategory() const {
    return category;
}

int CRUDequipment::getStock() const {
    return stock;
}

void CRUDequipment::setlabel(const std::string& newLabel) {
    label = newLabel;
}

void CRUDequipment::setstate(const std::string& newState) {
    state = newState;
}

void CRUDequipment::setcategory(const std::string& newCategory) {
    category = newCategory;
}

void CRUDequipment::setStock(int newStock) {
    stock = newStock;
}

void CRUDequipment::addEquipment() {
    QSqlQuery query;
    query.prepare("INSERT INTO equipment (id, label, stock, state, category) VALUES (:id, :label, :stock, :state, :category)");
    query.bindValue(":id", id);
    query.bindValue(":label", QString::fromStdString(label));
    query.bindValue(":stock", stock);
    query.bindValue(":state", QString::fromStdString(state));
    query.bindValue(":category", QString::fromStdString(category));

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
            label = query.value("label").toString().toStdString();
            stock = query.value("stock").toInt();
            state = query.value("state").toString().toStdString();
            category = query.value("category").toString().toStdString();
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
    query.bindValue(":label", QString::fromStdString(label));
    query.bindValue(":stock", stock);
    query.bindValue(":state", QString::fromStdString(state));
    query.bindValue(":category", QString::fromStdString(category));

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
