/*#ifndef CONTRAT_H
#define CONTRAT_H

#include <QWidget>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableWidget>

namespace Ui {
class Contrat;
}

class CrudContrat {
private:
    unsigned int idSponsor;
    unsigned int idEmission;
    QString montant;
    QString libelle;
    QString dateDebut;
    QString description;
    QString dateFin;

public:
    unsigned int getIdSponsor() const;
    unsigned int getIdEmission() const;
    QString getMontant() const;
    QString getLibelle() const;
    QString getDateDebut() const;
    QString getDescription() const;
    QString getDateFin() const;

    void setIdSponsor(unsigned int newIdSponsor);
    void setIdEmission(unsigned int newIdEmission);
    void setMontant(const QString& newMontant);
    void setLibelle(const QString& newLibelle);
    void setDateDebut(const QString& newDateDebut);
    void setDescription(const QString& newDescription);
    void setDateFin(const QString& newDateFin);

    bool create(CrudContrat c);
    CrudContrat read(unsigned int idSponsor, unsigned int idEmission);
    bool update(unsigned int idSponsor, unsigned int idEmission, CrudContrat c);
    bool remove(unsigned int idSponsor, unsigned int idEmission);
    QVariant getFieldByIndex(int index) const;
    QList<CrudContrat> getAll();
};

class Contrat : public QWidget
{
    Q_OBJECT

public:
    explicit Contrat(QWidget *parent = nullptr);
    ~Contrat();
    void refreshTable();
    void onDeleteButtonClicked(int row);
    //void filterTable(const QString &text);
   // void displayChart();

private slots:
    /*void on_pushButton_clicked();
    void on_add_btn_2_clicked();
    void on_add_btn_clicked();
    void onEditButtonClicked(int row);
    void onContratButtonClicked(int row);
    void on_comboBox_2_activated(const QString &arg1);
    void on_label_6_linkActivated(const QString &link);
    void on_pushButton_2_clicked();

private:
    Ui::Contrat *ui;
};

#endif */ // CONTRAT_H
