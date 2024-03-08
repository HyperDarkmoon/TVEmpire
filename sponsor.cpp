#include "sponsor.h"
#include "ui_sponsor.h"
#include <QTableWidgetItem>
#include "QDebug"
#include <QMessageBox>
#include <QToolButton>
#include <QTextStream>
#include <QPdfWriter>
#include <QPrinter>
#include <QTextDocument>
#include <QtWidgets>
#include <QPainter>
#include <QTextDocument>
#include <QFileDialog>

Sponsor::Sponsor(QWidget *parent) : QWidget(parent), ui(new Ui::Sponsor) {
    ui->setupUi(this);
    refreshTable();

}

Sponsor::~Sponsor() {
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

void CrudSponsor::setNom(const QString &newNom) {
    nom = newNom;
}

void CrudSponsor::setEmail(const QString &newEmail) {
    email = newEmail;
}

void CrudSponsor::setPhone(const QString &newPhone) {
    phone = newPhone;
}

void CrudSponsor::setCategories(const QString &newCategories) {
    categories = newCategories;
}

bool CrudSponsor::create(CrudSponsor s) {
    QSqlQuery query;
    query.prepare("INSERT INTO Sponsor (id, nom, tel,email, categorie) VALUES (sponsor_seq.NEXTVAL, :nom , :email,:phone, :categories)");

    query.bindValue(":nom", s.getNom());
    query.bindValue(":email", s.getEmail());
    query.bindValue(":phone", s.getPhone());
    query.bindValue(":categories", s.getCategories());

    if (query.exec()) {
        return true;
    } else {
        return false;
    }
}

CrudSponsor CrudSponsor::read(unsigned int id) {
    QSqlQuery query;
    query.prepare("SELECT * FROM Sponsor WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        CrudSponsor s;
        s.setId(query.value("id").toUInt());
        s.setNom(query.value("nom").toString());
        s.setEmail(query.value("email").toString());
        s.setPhone(query.value("tel").toString());
        s.setCategories(query.value("categorie").toString());

        return s;
    } else {
        return CrudSponsor();
    }
}

bool CrudSponsor::update(unsigned int id, CrudSponsor s) {
    QSqlQuery query;
    query.prepare("UPDATE Sponsor SET nom = :nom, email = :email, tel = :phone, categorie = :categories WHERE id = :id");
    query.bindValue(":id", id);
    query.bindValue(":nom", s.getNom());
    query.bindValue(":email", s.getEmail());
    query.bindValue(":phone", s.getPhone());
    query.bindValue(":categories", s.getCategories());

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Update failed:" << query.lastError().text();
        return false;
    }
}

bool CrudSponsor::remove(unsigned int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM Sponsor WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        return true;
    } else {
        return false;
    }
}

void Sponsor::on_add_btn_clicked() {
    QString nom = ui->lineEdit_2->text().trimmed();
    QString email = ui->lineEdit->text().trimmed();
    QString phone = ui->lineEdit_3->text().trimmed();
    QString categories = ui->comboBox->currentText();

    if (nom.isEmpty() || email.isEmpty() || phone.isEmpty() || categories.isEmpty()) {
        QMessageBox::critical(this, "Error", "All fields must be filled.");
        return;
    }

    if (!nom.at(0).isUpper()) {
        QMessageBox::critical(this, "Error", "The first letter of the name must be uppercase.");
        return;
    }

    QRegExp phoneRegex("\\d*"); // Regular expression to allow only digits
    if (!phoneRegex.exactMatch(phone)) {
        QMessageBox::critical(this, "Error", "Phone must contain only numbers.");
        return;
    }

    QRegExp emailRegex("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}\\b");
    if (!emailRegex.exactMatch(email)) {
        QMessageBox::critical(this, "Error", "Invalid email format.");
        return;
    }

    CrudSponsor c;
    c.setNom(nom);
    c.setEmail(email);
    c.setPhone(phone);
    c.setCategories(categories);

    if (c.create(c)) {
        refreshTable();
    } else {
        QMessageBox::critical(this, "Error", "Insertion into the database failed.");
    }
}

void Sponsor::refreshTable() {
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    QStringList headers = {"ID", "Nom", "telephone", "email", "categories", "delete", "edit"};
    ui->tableWidget->setColumnCount(headers.size());
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    CrudSponsor c;
    QList<CrudSponsor> emissionList = c.getAll();

    for (int row = 0; row < emissionList.size(); ++row) {
        ui->tableWidget->insertRow(row);

        for (int col = 0; col < headers.size() - 2; ++col) {
            QString fieldData = emissionList.at(row).getFieldByIndex(col).toString();
            QTableWidgetItem *item = new QTableWidgetItem(fieldData);
            ui->tableWidget->setItem(row, col, item);
        }

        QToolButton *deleteButton = new QToolButton(this);
        deleteButton->setIcon(QIcon("C:/Users/yassine abid/Desktop/tv/TVEmpire/icon/delete.png"));
        unsigned int id = ui->tableWidget->item(row, 0)->text().toUInt();
        connect(deleteButton, &QToolButton::clicked, [this, id]() {
            onDeleteButtonClicked(id);
        });
        ui->tableWidget->setCellWidget(row, headers.size() - 2, deleteButton);

        QToolButton *editButton = new QToolButton(this);
        editButton->setIcon(QIcon("C:/Users/yassine abid/Desktop/tv/TVEmpire/icon/update.png"));
        connect(editButton, &QToolButton::clicked, [this, row]() {
            onEditButtonClicked(row);
        });
        ui->tableWidget->setCellWidget(row, headers.size() - 1, editButton);

        int columnIndex = 0;
        for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
            QTableWidgetItem *item = ui->tableWidget->item(row, columnIndex);

            if (item) {
                item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            } else {
                QTableWidgetItem *newItem = new QTableWidgetItem();
                newItem->setFlags(newItem->flags() & ~Qt::ItemIsEditable);
                ui->tableWidget->setItem(row, columnIndex, newItem);
            }
        }
    }
}

QList<CrudSponsor> CrudSponsor::getAll() {
    QSqlQuery query;
    query.prepare("SELECT id, nom , email ,tel ,categorie FROM sponsor");
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }

    QList<CrudSponsor> sponsorlist;

    while (query.next()) {
        CrudSponsor s;
        s.setId(query.value(0).toUInt());
        s.setNom(query.value(1).toString());
        s.setEmail(query.value(2).toString());
        s.setPhone(query.value(3).toString());
        s.setCategories(query.value(4).toString());
        sponsorlist.append(s);
    }

    return sponsorlist;
}

QVariant CrudSponsor::getFieldByIndex(int index) const {
    switch (index) {
        case 0:
            return getId();
        case 1:
            return getNom();
        case 2:
            return getEmail();
        case 3:
            return getPhone();
        case 4:
            return getCategories();
        default:
            return QVariant();
    }
}

void Sponsor::onDeleteButtonClicked(int id) {
    CrudSponsor c;
    if (c.remove(id))
        refreshTable();
}

void Sponsor::onEditButtonClicked(int row) {
    CrudSponsor e;
    e.setId(ui->tableWidget->item(row, 0)->text().toUInt());
    e.setNom(ui->tableWidget->item(row, 1)->text());
    e.setEmail(ui->tableWidget->item(row, 2)->text());
    e.setPhone(ui->tableWidget->item(row, 3)->text());
    e.setCategories(ui->tableWidget->item(row, 4)->text());
    e.update(ui->tableWidget->item(row, 0)->text().toUInt(), e);
}



void Sponsor::on_pushButton_clicked()
{

}
