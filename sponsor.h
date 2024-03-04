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
    unsigned int getId();
    QString getNom();

    void setId(unsigned int newId);
    void setNom(const QString& newNom);

    bool create(CrudSponsor s);
    CrudSponsor read(unsigned int id);
    bool update(unsigned int id, CrudSponsor s);
    bool remove(unsigned int id);
};

class Sponsor : public QWidget
{
    Q_OBJECT

public:
    explicit Sponsor(QWidget *parent = nullptr);
    ~Sponsor();

private slots:
    void on_pushButton_clicked();
    void on_add_btn_2_clicked(); // Assuming you have a button for some operation
    void on_add_btn_clicked();

private:
    Ui::Sponsor *ui;

    // Function to update the table with sponsor details
    void updateTableWithSponsorDetails(unsigned int sponsorId);
};

#endif // SPONSOR_H
