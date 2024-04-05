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
#include "../smtp/src/SmtpMime"
#include <QSslSocket>
Contract::Contract(QWidget *parent) :
    QDialog(parent), // Inherit from QDialog
    ui(new Ui::Contract)

{

    ui->setupUi(this);
       ui->sign->setStyleSheet("background-color: rgba(255, 255, 255, 0); border: 2px solid black; border-radius: 10px; padding: 5px 10px; color: black;");
       signatureWidget = new Signature(ui->sign);

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
    delete signatureWidget;

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

QByteArray CrudContract::getSignatureBlob() const {
    return signatureBlob; // Return the signature blob
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

void CrudContract::setSignatureBlob(const QByteArray& blob) {
    signatureBlob = blob; // Set the signature blob
}

bool CrudContract::create(CrudContract c) {
    QSqlQuery query;
    query.prepare("INSERT INTO Contract (idSponsor, idEmission, montant, libelle, date_Debut, description, date_Fin, signature) "
                  "VALUES (:idSponsor, :idEmission, :montant, :libelle, :dateDebut, :description, :dateFin, :signature)");

    query.bindValue(":idSponsor", c.getIdSponsor());
    query.bindValue(":idEmission", c.getIdEmission());
    query.bindValue(":montant", c.getMontant());
    query.bindValue(":libelle", c.getLibelle());
    query.bindValue(":dateDebut", c.getDateDebut());
    query.bindValue(":description", c.getDescription());
    query.bindValue(":dateFin", c.getDateFin());

    // Bind signature blob from CrudContract instance
    query.bindValue(":signature", c.getSignatureBlob());

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error creating contract:" << query.lastError().text();
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

        // Retrieve the signature blob from the query result
        QByteArray signatureBlob = query.value("signature").toByteArray();
        c.setSignatureBlob(signatureBlob);

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

    QStringList headers = {"ID Sponsor", "ID Emission", "Montant", "Libelle", "Date Debut", "Description", "Date Fin", "Signature", "edit", "delete", "send email"}; // Added "send email"
    ui->tableWidget->setColumnCount(headers.size());
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    CrudContract c;
    QList<CrudContract> listSponsor = c.getAll();
    for (int row = 0; row < listSponsor.size(); ++row) {
        ui->tableWidget->insertRow(row);

        // Populate table cells with data
        QTableWidgetItem *itemIdSponsor = new QTableWidgetItem(QString::number(listSponsor.at(row).getIdSponsor()));
        ui->tableWidget->setItem(row, 0, itemIdSponsor);

        QTableWidgetItem *itemIdEmission = new QTableWidgetItem(QString::number(listSponsor.at(row).getIdEmission()));
        ui->tableWidget->setItem(row, 1, itemIdEmission);

        QTableWidgetItem *itemMontant = new QTableWidgetItem(listSponsor.at(row).getMontant());
        ui->tableWidget->setItem(row, 2, itemMontant);

        QTableWidgetItem *itemLibelle = new QTableWidgetItem(listSponsor.at(row).getLibelle());
        ui->tableWidget->setItem(row, 3, itemLibelle);

        QTableWidgetItem *itemDateDebut = new QTableWidgetItem(listSponsor.at(row).getDateDebut().toString());
        ui->tableWidget->setItem(row, 4, itemDateDebut);

        QTableWidgetItem *itemDescription = new QTableWidgetItem(listSponsor.at(row).getDescription());
        ui->tableWidget->setItem(row, 5, itemDescription);

        QTableWidgetItem *itemDateFin = new QTableWidgetItem(listSponsor.at(row).getDateFin().toString());
        ui->tableWidget->setItem(row, 6, itemDateFin);

        // Inside refreshTable() method in Contract.cpp
        QByteArray signatureBlob = listSponsor.at(row).getSignatureBlob();
        QLabel *signatureLabel = new QLabel();

        // Convert blob to QPixmap
        QPixmap signaturePixmap;
        signaturePixmap.loadFromData(signatureBlob);
        signaturePixmap = signaturePixmap.scaled(100, 100, Qt::KeepAspectRatio);

        // Set QPixmap to QLabel
        signatureLabel->setPixmap(signaturePixmap);

        // Set alignment of QLabel within table cell
        signatureLabel->setAlignment(Qt::AlignCenter);

        // Set QLabel as the cell widget in the table
        ui->tableWidget->setCellWidget(row, 7, signatureLabel);

        // Edit button
        int idSponsor = listSponsor.at(row).getIdSponsor();
        int idEmission = listSponsor.at(row).getIdEmission();
        QToolButton *editButton = new QToolButton();
        editButton->setIcon(QIcon("path/to/edit/icon.png"));
        connect(editButton, &QToolButton::clicked, [this, idSponsor, idEmission,row]() {
          onEditButtonClicked(idSponsor, idEmission,row);
        });
        ui->tableWidget->setCellWidget(row, 8, editButton);

        // Delete button
        QToolButton *deleteButton = new QToolButton();
        deleteButton->setIcon(QIcon("path/to/delete/icon.png"));
        connect(deleteButton, &QToolButton::clicked, [this, idSponsor, idEmission]() {
           onDeleteButtonClicked(idSponsor, idEmission);
        });
        ui->tableWidget->setCellWidget(row, 9, deleteButton);

        // Send email button
        QToolButton *sendEmailButton = new QToolButton();
        sendEmailButton->setText("Send Email");
        connect(sendEmailButton, &QToolButton::clicked, [this, idSponsor,row]() {
            onSendEmailButtonClicked(idSponsor,row);
        });
        ui->tableWidget->setCellWidget(row, 10, sendEmailButton);
    }
}



QList<CrudContract> CrudContract::getAll() {
    QCoreApplication::processEvents();
    QSqlQuery query;
    if (!query.exec("SELECT * FROM contract")) {
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
        QByteArray signatureBlob = query.value("signature").toByteArray(); // Fetch signature blob

        CrudContract contract;
        contract.setIdSponsor(idSponsor);
        contract.setIdEmission(idEmission);
        contract.setMontant(montant);
        contract.setLibelle(libelle);
        contract.setDateDebut(dateDebut);
        contract.setDescription(description);
        contract.setDateFin(dateFin);
        contract.setSignatureBlob(signatureBlob); // Set signature blob

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
        case 7:
            return getSignatureBlob(); // Handle the signature field
        default:
            return QVariant();
    }
}

/*void Contract::on_pushButton_clicked()
{
 signatureWidget->show();
}*/

void Contract::on_add_btn_clicked() {
    // Get signature blob from the signature widget
    QByteArray signatureBlob = signatureWidget->getSignatureBlob();

    CrudContract c;
    c.setLibelle(ui->lib->text());
    c.setMontant(ui->mont->text());
    c.setDateDebut(ui->dated->date());
    c.setDateFin(ui->datef->date());
    c.setIdSponsor(ui->idS->currentText().toUInt());
    c.setIdEmission(ui->idE->currentText().toUInt());
    c.setDescription(ui->desc->text());

    // Set the signature blob
    c.setSignatureBlob(signatureBlob);

    qDebug() << c.getLibelle() << c.getMontant() ;

    // Create the record with the signature blob
    c.create(c);

    refreshTable();
}

void Contract::onDeleteButtonClicked(int idSponsor, int idEmission){
    CrudContract c;
    c.remove(idSponsor,idEmission);
    refreshTable();
}
void Contract::onEditButtonClicked(int idSponsor, int idEmission, int row) {
    CrudContract c;
    c = c.read(idSponsor, idEmission);

    // Retrieve date debut text from the table widget item
    QString dateDebutString = ui->tableWidget->item(row, 4)->text(); // Assuming date debut is in the 4th column
    QDate dateDebut;
    if (!dateDebutString.isEmpty()) {
        dateDebut = QDate::fromString(dateDebutString, "yyyy-MM-dd"); // Adjust the format as per your table data
    } else {
        // If date debut string is empty, keep the existing date value
        dateDebut = c.getDateDebut();
    }

    // Retrieve date fin text from the table widget item
    QString dateFinString = ui->tableWidget->item(row, 6)->text(); // Assuming date fin is in the 6th column
    QDate dateFin;
    if (!dateFinString.isEmpty()) {
        dateFin = QDate::fromString(dateFinString, "yyyy-MM-dd"); // Adjust the format as per your table data
    } else {
        // If date fin string is empty, keep the existing date value
        dateFin = c.getDateFin();
    }

    // Update other contract fields from the table
    c.setLibelle(ui->tableWidget->item(row, 3)->text());
    c.setMontant(ui->tableWidget->item(row, 2)->text());
    c.setDescription(ui->tableWidget->item(row, 5)->text()); // Correct column index for description

    // Set the retrieved or existing date values to the contract
    c.setDateDebut(dateDebut);
    c.setDateFin(dateFin);

    // Perform the update operation
    if (!c.update(idSponsor, idEmission, c)) {
        // Handle update failure
        qDebug() << "Update operation failed.";
        // You may want to show a message box or log the error
    }

    refreshTable();
}



QString Contract::getEmailFromSponsorId(int idSponsor) {
    QSqlQuery query;
    query.prepare("SELECT email FROM sponsor  WHERE id = :sponsorId");
    query.bindValue(":sponsorId", QVariant::fromValue(idSponsor)); // Bind sponsorId as unsigned int

    if (query.exec() && query.next()) {
        return query.value("email").toString(); // Assuming "email" is the correct column name
    } else {
        qDebug() << "Error retrieving email for sponsor ID" << idSponsor << ":" << query.lastError().text();
        return QString(); // Return an empty string if retrieval fails
    }
}

void Contract::sendEmail(const QString& recipientEmail, const QString& subject, const QString& body) {
    // SMTP Configuration
    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);
    smtp.setUser("mohamedslimane555@gmail.com");
    smtp.setPassword("zyrx jiib bvqt yxnv");
    qDebug () << recipientEmail;
    // Create MimeMessage
    MimeMessage message;
    message.setSender(new EmailAddress("mohamedslimane555@gmail.com", "TVEMPIRE"));
    message.addRecipient(new EmailAddress(recipientEmail));
    message.setSubject(subject);

    // Set email body
    MimeText text;
    text.setText(body);
    message.addPart(&text);

    // Send email
    if (!smtp.connectToHost()) {
        qDebug() << "Failed to connect to SMTP server";
        return;
    }
    if (!smtp.login()) {
        qDebug() << "SMTP login failed";
        smtp.quit();
        return;
    }
    if (!smtp.sendMail(message)) {
        qDebug() << "Failed to send email";
    }
    smtp.quit();
}
void Contract::onSendEmailButtonClicked(int idSponsor,int rowIndex) {


    // Retrieve the contract information from the selected row
    QString email = getEmailFromSponsorId(idSponsor);
    if (email.isEmpty()) {
        qDebug() << "Failed to retrieve email for sponsor ID" << idSponsor;
        return;
    }

    QString libelle = ui->tableWidget->item(rowIndex, 3)->text(); // Assuming Libelle is in the fourth column
    QString montant = ui->tableWidget->item(rowIndex, 2)->text(); // Assuming Montant is in the third column
    QDate dateDebut = QDate::fromString(ui->tableWidget->item(rowIndex, 4)->text(), "yyyy-MM-dd"); // Adjust the format as per your table data
    QDate dateFin = QDate::fromString(ui->tableWidget->item(rowIndex, 6)->text(), "yyyy-MM-dd"); // Adjust the format as per your table data
    QString description = ui->tableWidget->item(rowIndex, 5)->text(); // Assuming Description is in the fifth column

    // Construct the email subject and body with the contract information
    QString subject = "Contract Information";
    QString body = "Libelle: " + libelle + "\n"
                   + "Montant: " + montant + "\n"
                   + "Date Debut: " + dateDebut.toString() + "\n"
                   + "Date Fin: " + dateFin.toString() + "\n"
                   + "Description: " + description;

    // Send the email
    sendEmail(email, subject, body);
}
