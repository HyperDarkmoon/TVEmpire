#ifndef SPONSOR_H
#define SPONSOR_H

#include <QWidget>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableWidget>
#include <QMouseEvent>
#include <QLabel> // Include QLabel header
#include "contract.h"

// Forward declaration of ClickableQLabel
class ClickableQLabel;

namespace Ui {
class Sponsor;
}

class CrudSponsor {
private:
    unsigned int id;
    QString nom;
    QString email;
    QString phone;
    QString categories;
    QByteArray qrCodeData; // New member variable to store QR code image data

public:
    unsigned int getId() const;
    QString getNom() const;
    QString getEmail() const;
    QString getPhone() const;
    QString getCategories() const;
    QByteArray getQrCodeData() const; // New getter for QR code data

    void setId(unsigned int newId);
    void setNom(const QString& newNom);
    void setEmail(const QString& newEmail);
    void setPhone(const QString& newPhone);
    void setCategories(const QString& newCategories);
    void setQrCodeData(const QByteArray& data); // New setter for QR code data

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
    void filterTable(const QString &text);
    void displayChart();
private slots:
    void on_pushButton_clicked();
    void on_add_btn_2_clicked();
    void on_add_btn_clicked();
    void onEditButtonClicked(int row);
    void onContratButtonClicked(int row);


    void on_comboBox_2_activated(const QString &arg1);

    void on_label_6_linkActivated(const QString &link);

    void on_pushButton_2_clicked();

private:
    Ui::Sponsor *ui;
    Contract c;
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

#endif // SPONSOR_H
