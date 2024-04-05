#ifndef CONTRACT_H
#define CONTRACT_H

#include <QDialog> // Include QDialog instead of QWidget
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableWidget>
#include "signature.h"
#include <QDate>
#include "../smtp/src/SmtpMime"
#include <QSslSocket>

namespace Ui {
class Contract;
}

class Contract : public QDialog // Inherit from QDialog
{
    Q_OBJECT

public:
    explicit Contract(QWidget *parent = nullptr);
    ~Contract();
    QString getEmailFromSponsorId(int idSponsor);
    void sendEmail(const QString& recipientEmail, const QString& subject, const QString& body); // Declaration of sendEmail function
    void refreshTable();
    void onSendEmailButtonClicked(int idSponsor,int row);
    void onDeleteButtonClicked(int idSponsor, int idEmission);
    void filterTable(const QString &text);
    void displayChart();
    void onEditButtonClicked(int idSponsor, int idEmission,int row);
private slots:
    void on_pushButton_clicked();
    void on_add_btn_2_clicked();
    void on_add_btn_clicked();

    void onContractButtonClicked(int row);
    void on_comboBox_2_activated(const QString &arg1);
    void on_label_6_linkActivated(const QString &link);
    void on_pushButton_2_clicked();

private:
    Ui::Contract *ui;
    Signature *signatureWidget;
};

class CrudContract {
private:
    unsigned int idSponsor;
    unsigned int idEmission;
    QString montant;
    QString libelle;
    QDate dateDebut;
    QString description;
    QDate dateFin;
    QByteArray signatureBlob;

public:
    unsigned int getIdSponsor() const;
    unsigned int getIdEmission() const;
    QString getMontant() const;
    QString getLibelle() const;
    QDate getDateDebut() const;
    QString getDescription() const;
    QDate getDateFin() const;
    QByteArray getSignatureBlob() const; // Getter for signature blob

    void setIdSponsor(unsigned int newIdSponsor);
    void setIdEmission(unsigned int newIdEmission);
    void setMontant(const QString& newMontant);
    void setLibelle(const QString& newLibelle);
    void setDateDebut(const QDate& newDateDebut);
    void setDescription(const QString& newDescription);
    void setDateFin(const QDate& newDateFin);
    void setSignatureBlob(const QByteArray& blob); // Setter for signature blob

    bool create(CrudContract c);
    CrudContract read(unsigned int idSponsor, unsigned int idEmission);
    bool update(unsigned int idSponsor, unsigned int idEmission, CrudContract c);
    bool remove(unsigned int idSponsor, unsigned int idEmission);
    QVariant getFieldByIndex(int index) const;
    QList<CrudContract> getAll();

};

// Define ClickableQLabel class
class ClickableQLabel : public QLabel {
    Q_OBJECT

public:
    explicit ClickableQLabel(QWidget *parent = nullptr) : QLabel(parent) {}

signals:
    void clicked();

protected:
    void mousePressEvent(QMouseEvent *event) override {
        if (event->button() == Qt::LeftButton) {
            emit clicked();
        }
    }
};
#endif // CONTRACT_H
