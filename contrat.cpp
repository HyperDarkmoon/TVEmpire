/*#include "contrat.h"
#include "ui_contrat.h"
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



Contrat::Contrat(QWidget *parent) : QWidget(parent), ui(new Ui::Contrat) {
    ui->setupUi(this);
    refreshTable();
}

Contrat::~Contrat() {
    delete ui;
}

unsigned int CrudContrat::getIdSponsor() const {
    return idSponsor;
}

unsigned int CrudContrat::getIdEmission() const {
    return idEmission;
}

QString CrudContrat::getMontant() const {
    return montant;
}

QString CrudContrat::getLibelle() const {
    return libelle;
}

QString CrudContrat::getDateDebut() const {
    return dateDebut;
}

QString CrudContrat::getDescription() const {
    return description;
}

QString CrudContrat::getDateFin() const {
    return dateFin;
}

void CrudContrat::setIdSponsor(unsigned int newIdSponsor) {
    idSponsor = newIdSponsor;
}

void CrudContrat::setIdEmission(unsigned int newIdEmission) {
    idEmission = newIdEmission;
}

void CrudContrat::setMontant(const QString& newMontant) {
    montant = newMontant;
}

void CrudContrat::setLibelle(const QString& newLibelle) {
    libelle = newLibelle;
}

void CrudContrat::setDateDebut(const QString& newDateDebut) {
    dateDebut = newDateDebut;
}

void CrudContrat::setDescription(const QString& newDescription) {
    description = newDescription;
}

void CrudContrat::setDateFin(const QString& newDateFin) {
    dateFin = newDateFin;
}

bool CrudContrat::create(CrudContrat c) {
    QSqlQuery query;
    query.prepare("INSERT INTO Contrat (idSponsor, idEmission, montant, libelle, dateDebut, description, dateFin) VALUES (:idSponsor, :idEmission, :montant, :libelle, :dateDebut, :description, :dateFin)");

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

CrudContrat CrudContrat::read(unsigned int idSponsor, unsigned int idEmission) {
    QSqlQuery query;
    query.prepare("SELECT * FROM Contrat WHERE idSponsor = :idSponsor AND idEmission = :idEmission");
    query.bindValue(":idSponsor", idSponsor);
    query.bindValue(":idEmission", idEmission);

    if (query.exec() && query.next()) {
        CrudContrat c;
        c.setIdSponsor(query.value("idSponsor").toUInt());
        c.setIdEmission(query.value("idEmission").toUInt());
        c.setMontant(query.value("montant").toString());
        c.setLibelle(query.value("libelle").toString());
        c.setDateDebut(query.value("dateDebut").toString());
        c.setDescription(query.value("description").toString());
        c.setDateFin(query.value("dateFin").toString());

        return c;
    } else {
        return CrudContrat();
    }
}

bool CrudContrat::update(unsigned int idSponsor, unsigned int idEmission, CrudContrat c) {
    QSqlQuery query;
    query.prepare("UPDATE Contrat SET montant = :montant, libelle = :libelle, dateDebut = :dateDebut, description = :description, dateFin = :dateFin WHERE idSponsor = :idSponsor AND idEmission = :idEmission");
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

bool CrudContrat::remove(unsigned int idSponsor, unsigned int idEmission) {
    QSqlQuery query;
    query.prepare("DELETE FROM Contrat WHERE idSponsor = :idSponsor AND idEmission = :idEmission");
    query.bindValue(":idSponsor", idSponsor);
    query.bindValue(":idEmission", idEmission);

    if (query.exec()) {
        return true;
    } else {
        return false;
    }
}

void Contrat::refreshTable() {
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    QStringList headers = {"ID Sponsor", "ID Emission", "Montant", "Libelle", "Date Debut", "Description", "Date Fin", "edit", "delete"};
    ui->tableWidget->setColumnCount(headers.size());
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    // Fetch contrat data from the database
    QSqlQuery query("SELECT * FROM Contrat");
    if (!query.exec()) {
        qDebug() << "Error fetching contrat data:" << query.lastError().text();
        return;
    }

    while (query.next()) {
        // Extract data from the query result
        unsigned int idSponsor = query.value("idSponsor").toUInt();
        unsigned int idEmission = query.value("idEmission").toUInt();
        QString montant = query.value("montant").toString();
        QString libelle = query.value("libelle").toString();
        QString dateDebut = query.value("dateDebut").toString();
        QString description = query.value("description").toString();
        QString dateFin = query.value("dateFin").toString();

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
            onEditButtonClicked(idSponsor, idEmission);
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

QList<Contrat> Contrat::getAll() {
    QSqlQuery query;
    query.prepare("SELECT idSponsor, idEmission, montant, libelle, dateDebut, description, dateFin FROM Contrat");
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }

    QList<Contrat> contratList;

    while (query.next()) {
        unsigned int idSponsor = query.value("idSponsor").toUInt();
        unsigned int idEmission = query.value("idEmission").toUInt();
        double montant = query.value("montant").toDouble();
        QString libelle = query.value("libelle").toString();
        QString dateDebut = query.value("dateDebut").toString();
        QString description = query.value("description").toString();
        QString dateFin = query.value("dateFin").toString();

        Contrat contrat;
        contrat.setIdSponsor(idSponsor);
        contrat.setIdEmission(idEmission);
        contrat.setMontant(montant);
        contrat.setLibelle(libelle);
        contrat.setDateDebut(dateDebut);
        contrat.setDescription(description);
        contrat.setDateFin(dateFin);

        contratList.append(contrat);
    }

    return contratList;
}

QVariant Contrat::getFieldByIndex(int index) const {
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
}*/

