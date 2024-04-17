#include "crudequipment.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <QByteArray>
#include <vector>

CRUDequipment::CRUDequipment(int id, const QString label, int stock, const QString state, const QString category, const QByteArray image)
    : id(id), label(label), stock(stock), state(state), category(category), image(image) {}

CRUDequipment::CRUDequipment() {}

CRUDequipment::~CRUDequipment() {}

void CRUDequipment::setId(int newid) {
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

void CRUDequipment::setImage(const QByteArray& newImage) {
    image = newImage;
}

QByteArray CRUDequipment::getImage() const {
    return image;
}

void CRUDequipment::addEquipment() {
    QSqlQuery query;
    query.prepare("INSERT INTO equipement (id, libelle, quantite, condition, categorie, IMAGE) VALUES (EQ_SEQ.NEXTVAL, :label, :stock, :state, :category, :image)");

    query.bindValue(":label", label);
    query.bindValue(":stock", stock);
    query.bindValue(":state", state);
    query.bindValue(":category", category);
    query.bindValue(":image", image);

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
            label = query.value("libelle").toString();
            stock = query.value("quantite").toInt();
            state = query.value("condition").toString();
            category = query.value("categorie").toString();
            image = query.value("IMAGE").toByteArray();
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
    query.prepare("UPDATE equipement SET libelle = :label, quantite = :stock, condition = :state, categorie = :category, IMAGE = :image WHERE id = :id");
    query.bindValue(":id", id);
    query.bindValue(":label", label);
    query.bindValue(":stock", stock);
    query.bindValue(":state", state);
    query.bindValue(":category", category);
    query.bindValue(":image", image);

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
