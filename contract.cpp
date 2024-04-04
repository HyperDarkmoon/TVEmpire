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
#include "dbconnection.h"
Contract::Contract(QWidget *parent) :
    QDialog(parent), // Inherit from QDialog
    ui(new Ui::Contract)
{

    ui->setupUi(this);
   ui->sign->setStyleSheet("background-color: rgba(255, 255, 255, 0); border: 2px solid black; border-radius: 10px; padding: 5px 10px; color: black;");
    Signature *signatureWidget = new Signature(ui->sign);
        signatureWidget->setGeometry(ui->sign->rect());
        signatureWidget->show();

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

    refreshTable();
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

    CrudContract c;
    QList<CrudContract> listSponsor = c.getAll();
    for (int row = 0; row < listSponsor.size(); ++row) {

        ui->tableWidget->insertRow(row);

        // Populate table cells with data

        QTableWidgetItem *itemIdSponsor = new QTableWidgetItem(QString::number(listSponsor.at(row).getIdSponsor()));
        ui->tableWidget->setItem(row, 0, itemIdSponsor);
        qDebug( ) << listSponsor.at(row).getIdSponsor();
        QTableWidgetItem *itemIdEmission = new QTableWidgetItem(QString::number(listSponsor.at(row).getIdEmission()));
        ui->tableWidget->setItem(row, 1, itemIdEmission);

        QTableWidgetItem *itemMontant = new QTableWidgetItem(listSponsor.at(row).getMontant());
        ui->tableWidget->setItem(row, 2, itemMontant);

        QTableWidgetItem *itemLibelle = new QTableWidgetItem(listSponsor.at(row).getLibelle());
        ui->tableWidget->setItem(row, 3, itemLibelle);

        QTableWidgetItem *itemDateDebut = new QTableWidgetItem(listSponsor.at(row).getDateDebut().toString());
        ui->tableWidget->setItem(row, 4, itemDateDebut);

        QTableWidgetItem *itemDescription = new QTableWidgetItem(listSponsor.at(row).getDateFin().toString());
        ui->tableWidget->setItem(row, 5, itemDescription);

        QTableWidgetItem *itemDateFin = new QTableWidgetItem(listSponsor.at(row).getDescription());
        ui->tableWidget->setItem(row, 6, itemDateFin);

        // Edit button
        int idSponsor = listSponsor.at(row).getIdSponsor();
        int idEmission = listSponsor.at(row).getIdEmission();
        QToolButton *editButton = new QToolButton();
        editButton->setIcon(QIcon("path/to/edit/icon.png"));
        connect(editButton, &QToolButton::clicked, [this, idSponsor, idEmission,row]() {
          onEditButtonClicked(idSponsor, idEmission,row);
        });
        ui->tableWidget->setCellWidget(row, 7, editButton);

        // Delete button
        QToolButton *deleteButton = new QToolButton();
        deleteButton->setIcon(QIcon("path/to/delete/icon.png"));
        connect(deleteButton, &QToolButton::clicked, [this, idSponsor, idEmission]() {
           onDeleteButtonClicked(idSponsor, idEmission);
        });
        ui->tableWidget->setCellWidget(row, 8, deleteButton);
    }
}

QList<CrudContract> CrudContract::getAll() {
    QCoreApplication::processEvents();
    QSqlQuery query;
    if( !query.exec("select * from contract") ) {
        qDebug() << "Query execution failed:" << query.lastError().text();
        return {}; // Return an empty list if the query fails
    }

    QList<CrudContract> contractList;
    qDebug() << "WE HERE";
    // Fetch data from the query
    while (query.next()) {
        unsigned int idSponsor = query.value("idSponsor").toUInt();
        unsigned int idEmission = query.value("idEmission").toUInt();
        QString montant = query.value("montant").toString();
        QString libelle = query.value("libelle").toString();
        QDate dateDebut = query.value("date_Debut").toDate(); // Corrected column name
        QString description = query.value("description").toString();
        QDate dateFin = query.value("date_Fin").toDate(); // Corrected column name

        CrudContract contract;
        contract.setIdSponsor(idSponsor);
        contract.setIdEmission(idEmission);
        contract.setMontant(montant);
        contract.setLibelle(libelle);
        contract.setDateDebut(dateDebut);
        contract.setDescription(description);
        contract.setDateFin(dateFin);

        contractList.append(contract);
    }

    return contractList;
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
void Contract::onDeleteButtonClicked(int idSponsor, int idEmission){
    CrudContract c;
    c.remove(idSponsor,idEmission);
    refreshTable();
}
void Contract::onEditButtonClicked(int idSponsor, int idEmission,int row){
    CrudContract c;
    c.read(idSponsor,idEmission);
    c.setLibelle(ui->tableWidget->item(row,3)->text());
    c.setMontant(ui->tableWidget->item(row,2)->text());
    c.setDescription(ui->tableWidget->item(row,6)->text());
    qDebug() << c.getMontant();
    c.update(idSponsor,idEmission,c);
    refreshTable();
}
