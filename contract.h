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

namespace Ui {
class Contract;
}

class Contract : public QDialog // Inherit from QDialog
{
    Q_OBJECT

public:
    explicit Contract(QWidget *parent = nullptr);
    ~Contract();
    void refreshTable();
    void onDeleteButtonClicked(int idSponsor, int idEmission);
    void filterTable(const QString &text);
    void displayChart();

private slots:
    void on_pushButton_clicked();
    void on_add_btn_2_clicked();
    void on_add_btn_clicked();
    void onEditButtonClicked(int idSponsor, int idEmission);
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

public:
    unsigned int getIdSponsor() const;
    unsigned int getIdEmission() const;
    QString getMontant() const;
    QString getLibelle() const;
    QDate getDateDebut() const;
    QString getDescription() const;
    QDate getDateFin() const;

    void setIdSponsor(unsigned int newIdSponsor);
    void setIdEmission(unsigned int newIdEmission);
    void setMontant(const QString& newMontant);
    void setLibelle(const QString& newLibelle);
    void setDateDebut(const QDate& newDateDebut);
    void setDescription(const QString& newDescription);
    void setDateFin(const QDate& newDateFin);

    bool create(CrudContract c);
    CrudContract read(unsigned int idSponsor, unsigned int idEmission);
    bool update(unsigned int idSponsor, unsigned int idEmission, CrudContract c);
    bool remove(unsigned int idSponsor, unsigned int idEmission);
    QVariant getFieldByIndex(int index) const;
    QList<CrudContract> getAll();
};


#endif // CONTRACT_H
