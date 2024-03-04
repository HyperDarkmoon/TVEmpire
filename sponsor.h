#ifndef SPONSOR_H
#define SPONSOR_H

#include <QWidget>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableWidget>

namespace Ui {
class Sponsor;
}

class CrudSponsor {
private:
    unsigned int id;
    QString nom;

public:
    unsigned int getId() const;
    QString getNom() const ;

    void setId(unsigned int newId);
    void setNom(const QString& newNom);

    bool create(CrudSponsor s);
    CrudSponsor read(unsigned int id);
    bool update(unsigned int id, CrudSponsor s);
    bool remove(unsigned int id);
    QVariant getFieldByIndex(int index) const;
    QList<CrudSponsor> getAll();
};

class Sponsor : public QWidget
{
    Q_OBJECT

public:
    explicit Sponsor(QWidget *parent = nullptr);
    ~Sponsor();
    void refreshTable();
    void onDeleteButtonClicked(int row);
private slots:
    void on_pushButton_clicked();
    void on_add_btn_2_clicked(); // Assuming you have a button for some operation
    void on_add_btn_clicked();
    void onEditButtonClicked(int row);
private:
    Ui::Sponsor *ui;
};

#endif // SPONSOR_H
