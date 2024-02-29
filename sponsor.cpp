#include "sponsor.h"
#include "ui_sponsor.h"
#include <QSqlRecord>

Sponsor::Sponsor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sponsor)
{
    ui->setupUi(this);
}

Sponsor::~Sponsor()
{
    delete ui;
}



unsigned int CrudSponsor::getId()
{
    return id;
}

QString CrudSponsor::getNom()
{
    return nom;
}

void CrudSponsor::setId(unsigned int newId)
{
    id = newId;
}

void CrudSponsor::setNom(const QString& newNom)
{
    nom = newNom;
}

bool CrudSponsor::create(CrudSponsor s)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Sponsor (id, nom) VALUES (:id, :nom)");
    query.bindValue(":id", s.getId());
    query.bindValue(":nom", s.getNom());

    if (query.exec()) {
        return true;
    } else {

        return false;
    }
}

CrudSponsor CrudSponsor::read(unsigned int id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Sponsor WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        CrudSponsor s;
        s.setId(query.value("id").toUInt());
        s.setNom(query.value("nom").toString());
        return s;
    } else {

        return CrudSponsor();
    }
}

bool CrudSponsor::update(unsigned int id, CrudSponsor s)
{
    QSqlQuery query;
    query.prepare("UPDATE Sponsor SET nom = :nom WHERE id = :id");
    query.bindValue(":id", id);
    query.bindValue(":nom", s.getNom());

    if (query.exec()) {
        return true;
    } else {

        return false;
    }
}

bool CrudSponsor::remove(unsigned int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM Sponsor WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        return true;
    } else {

        return false;
    }
}

void Sponsor::on_add_btn_clicked()
{
    CrudSponsor c;
    c.setId(ui->lineEdit->text().toUInt());
    c.setNom(ui->lineEdit_2->text());
    c.create(c);
}
