#include <QTableWidgetItem>
#include <QDebug>
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
#include "pdfexport.h"
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include "contract.h"
#include"sponsor.h"
#include "ui_contract.h"
#include "signature.h"

Contract::Contract(QWidget *parent) :
    QDialog(parent), // Inherit from QDialog
    ui(new Ui::Contract)
{
    ui->setupUi(this);
    refreshTable();
    QSqlQuery scenes;
    scenes.prepare("SELECT id from sponsor");
    scenes.exec();
    while (scenes.next()) {
            int sceneId = scenes.value(0).toInt();
            ui->idS->addItem(QString::number(sceneId));
        }
    QSqlQuery emiss;
    emiss.prepare("SELECT id from emissions");
    emiss.exec();
    while (emiss.next()) {
            int sceneId = emiss.value(0).toInt();
            ui->idE->addItem(QString::number(sceneId));
        }
    //signatureWidget = new Signature(this);
}

Contract::~Contract()
{
    delete ui;
}


unsigned int CrudContract::getIdSponsor() const {
    return idSponsor;
}

unsigned int CrudContract::getIdEmission() const {
    return idEmission;
}

QString CrudContract::getMontant() const {
    return montant;
}

QString CrudContract::getLibelle() const {
    return libelle;
}

QDate CrudContract::getDateDebut() const {
    return dateDebut;
}

QString CrudContract::getDescription() const {
    return description;
}

QDate CrudContract::getDateFin() const {
    return dateFin;
}

void CrudContract::setIdSponsor(unsigned int newIdSponsor) {
    idSponsor = newIdSponsor;
}

void CrudContract::setIdEmission(unsigned int newIdEmission) {
    idEmission = newIdEmission;
}

void CrudContract::setMontant(const QString& newMontant) {
    montant = newMontant;
}

void CrudContract::setLibelle(const QString& newLibelle) {
    libelle = newLibelle;
}

void CrudContract::setDateDebut(const QDate& newDateDebut) {
    dateDebut = newDateDebut;
}

void CrudContract::setDescription(const QString& newDescription) {
    description = newDescription;
}

void CrudContract::setDateFin(const QDate& newDateFin) {
    dateFin = newDateFin;
}

bool CrudContract::create(CrudContract c) {
    QSqlQuery query;
    query.prepare("INSERT INTO Contract (idSponsor, idEmission, montant, libelle, date_Debut, description, date_Fin) VALUES (:idSponsor, :idEmission, :montant, :libelle, :dateDebut, :description, :dateFin)");

    query.bindValue(":idSponsor", c.getIdSponsor());
    query.bindValue(":idEmission", c.getIdEmission());
    query.bindValue(":montant", c.getMontant());
    query.bindValue(":libelle", c.getLibelle());
    query.bindValue(":dateDebut", c.getDateDebut());
    query.bindValue(":description", c.getDescription());
    query.bindValue(":dateFin", c.getDateFin());

    if (query.exec()) {
        return true;
    } else {
        return false;
    }
}

CrudContract CrudContract::read(unsigned int idSponsor, unsigned int idEmission) {
    QSqlQuery query;
    query.prepare("SELECT * FROM Contract WHERE idSponsor = :idSponsor AND idEmission = :idEmission");
    query.bindValue(":idSponsor", idSponsor);
    query.bindValue(":idEmission", idEmission);

    if (query.exec() && query.next()) {
        CrudContract c;
        c.setIdSponsor(query.value("idSponsor").toUInt());
        c.setIdEmission(query.value("idEmission").toUInt());
        c.setMontant(query.value("montant").toString());
        c.setLibelle(query.value("libelle").toString());
        c.setDateDebut(query.value("dateDebut").toDate());
        c.setDescription(query.value("description").toString());
        c.setDateFin(query.value("dateFin").toDate());

        return c;
    } else {
        return CrudContract();
    }
}

bool CrudContract::update(unsigned int idSponsor, unsigned int idEmission, CrudContract c) {
    QSqlQuery query;
    query.prepare("UPDATE Contract SET montant = :montant, libelle = :libelle, date_Debut = :dateDebut, description = :description, date_Fin = :dateFin WHERE idSponsor = :idSponsor AND idEmission = :idEmission");
    query.bindValue(":idSponsor", idSponsor);
    query.bindValue(":idEmission", idEmission);
    query.bindValue(":montant", c.getMontant());
    query.bindValue(":libelle", c.getLibelle());
    query.bindValue(":dateDebut", c.getDateDebut());
    query.bindValue(":description", c.getDescription());
    query.bindValue(":dateFin", c.getDateFin());

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Update failed:" << query.lastError().text();
        return false;
    }
}

bool CrudContract::remove(unsigned int idSponsor, unsigned int idEmission) {
    QSqlQuery query;
    query.prepare("DELETE FROM Contract WHERE idSponsor = :idSponsor AND idEmission = :idEmission");
    query.bindValue(":idSponsor", idSponsor);
    query.bindValue(":idEmission", idEmission);

    if (query.exec()) {
        return true;
    } else {
        return false;
    }
}

void Contract::refreshTable() {
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    QStringList headers = {"ID Sponsor", "ID Emission", "Montant", "Libelle", "Date Debut", "Description", "Date Fin", "edit", "delete"};
    ui->tableWidget->setColumnCount(headers.size());
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    // Fetch Contract data from the database
    QSqlQuery query("SELECT * FROM Contract");
    if (!query.exec()) {
        qDebug() << "Error fetching Contract data:" << query.lastError().text();
        return;
    }

    while (query.next()) {
        // Extract data from the query result
        unsigned int idSponsor = query.value("idSponsor").toUInt();
        unsigned int idEmission = query.value("idEmission").toUInt();
        QString montant = query.value("montant").toString();
        QString libelle = query.value("libelle").toString();
        QString dateDebut = query.value("date_Debut").toString();
        QString description = query.value("description").toString();
        QString dateFin = query.value("date_Fin").toString();

        // Insert row into the table
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);

        // Populate table cells with data
        QTableWidgetItem *itemIdSponsor = new QTableWidgetItem(QString::number(idSponsor));
        ui->tableWidget->setItem(row, 0, itemIdSponsor);

        QTableWidgetItem *itemIdEmission = new QTableWidgetItem(QString::number(idEmission));
        ui->tableWidget->setItem(row, 1, itemIdEmission);

        QTableWidgetItem *itemMontant = new QTableWidgetItem(montant);
        ui->tableWidget->setItem(row, 2, itemMontant);

        QTableWidgetItem *itemLibelle = new QTableWidgetItem(libelle);
        ui->tableWidget->setItem(row, 3, itemLibelle);

        QTableWidgetItem *itemDateDebut = new QTableWidgetItem(dateDebut);
        ui->tableWidget->setItem(row, 4, itemDateDebut);

        QTableWidgetItem *itemDescription = new QTableWidgetItem(description);
        ui->tableWidget->setItem(row, 5, itemDescription);

        QTableWidgetItem *itemDateFin = new QTableWidgetItem(dateFin);
        ui->tableWidget->setItem(row, 6, itemDateFin);

        // Edit button
        QToolButton *editButton = new QToolButton();
        editButton->setIcon(QIcon("path/to/edit/icon.png"));
        connect(editButton, &QToolButton::clicked, [this, idSponsor, idEmission]() {
          //onEditButtonClicked(idSponsor, idEmission);
        });
        ui->tableWidget->setCellWidget(row, 7, editButton);

        // Delete button
        QToolButton *deleteButton = new QToolButton();
        deleteButton->setIcon(QIcon("path/to/delete/icon.png"));
        connect(deleteButton, &QToolButton::clicked, [this, idSponsor, idEmission]() {
          // onDeleteButtonClicked(idSponsor, idEmission);
        });
        ui->tableWidget->setCellWidget(row, 8, deleteButton);
    }
}

QList<CrudContract> CrudContract::getAll() {
    QSqlQuery query;
    query.prepare("SELECT idSponsor, idEmission, montant, libelle, date_Debut, description, date_Fin FROM Contract");
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }

    QList<CrudContract> ContractList;

    while (query.next()) {
        unsigned int idSponsor = query.value("idSponsor").toUInt();
        unsigned int idEmission = query.value("idEmission").toUInt();
        QString montant = query.value("montant").toString();
        QString libelle = query.value("libelle").toString();
        QDate dateDebut = query.value("dateDebut").toDate();
        QString description = query.value("description").toString();
        QDate dateFin = query.value("dateFin").toDate();

        CrudContract Contract;
        Contract.setIdSponsor(idSponsor);
        Contract.setIdEmission(idEmission);
        Contract.setMontant(montant);
        Contract.setLibelle(libelle);
        Contract.setDateDebut(dateDebut);
        Contract.setDescription(description);
        Contract.setDateFin(dateFin);

        ContractList.append(Contract);
    }

    return ContractList;
}

QVariant CrudContract::getFieldByIndex(int index) const {
    switch (index) {
        case 0:
            return getIdSponsor();
        case 1:
            return getIdEmission();
        case 2:
            return getMontant();
        case 3:
            return getLibelle();
        case 4:
            return getDateDebut();
        case 5:
            return getDescription();
        case 6:
            return getDateFin();
        default:
            return QVariant();
    }
}

/*void Contract::on_pushButton_clicked()
{
 signatureWidget->show();
}*/

void Contract::on_add_btn_clicked()
{
    CrudContract c;
    c.setLibelle(ui->lib->text());
    c.setMontant(ui->mont->text());
    c.setDateDebut(ui->dated->date());
    c.setDateFin(ui->datef->date());
    c.setIdSponsor(ui->idS->currentText().toUInt());
    c.setIdEmission(ui->idE->currentText().toUInt());
    c.setDescription(ui->desc->text());
    qDebug() << c.getLibelle() << c.getMontant() ;
    c.create(c);
    refreshTable();
}
