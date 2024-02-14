#include "emission.h"
#include "ui_emission.h"
#include <QDebug>
Emission::Emission(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Emission)
{
    ui->setupUi(this);
}

Emission::~Emission()
{
    delete ui;
}
Emission::Emission(const Emission &other) : QWidget(other.parentWidget()) {
        id = other.id;
        nom = other.nom;
        genre = other.genre;
        horaire = other.horaire;
        sceneId = other.sceneId;
        // Allocate new memory for any dynamically allocated members (if applicable)
    }

void Emission::on_pushButton_clicked()
{


}

void Emission::setId(unsigned int id)
{
    this->id = id;
}

unsigned int Emission::getId()
{
    return id;
}

void Emission::setNom(QString nom)
{
    this->nom = nom;
}

QString Emission::getNom()
{
    return nom;
}

void Emission::setGenre(QString genre)
{
    this->genre = genre;
}

QString Emission::getGenre()
{
    return genre;
}

void Emission::setHoraire(QTime horaire)
{
    this->horaire = horaire;
}

QTime Emission::getHoraire()
{
    return horaire;
}

void Emission::setSceneId(unsigned int sceneId)
{
    this->sceneId = sceneId;
}

unsigned int Emission::getSceneId()
{
    return sceneId;
}
bool Emission::create(Emission e)
{
    QSqlQuery query;
    query.prepare("INSERT INTO emissions (id,nom, genre, horaire, idscene) VALUES (:id, :nom, :genre, :horaire, :scene_id)");
    query.bindValue(":id", e.getId());
    query.bindValue(":nom", e.getNom());
    query.bindValue(":genre", e.getGenre());
    query.bindValue(":horaire", e.getHoraire());
    query.bindValue(":scene_id", e.getSceneId());
    return query.exec();
}

Emission Emission::read(unsigned int id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM emissions WHERE id = :id");
    query.bindValue(":id", id);
    query.exec();
    Emission e;
    if (query.next()) {
        e.setId(query.value(0).toUInt());
        e.setNom(query.value(1).toString());
        e.setGenre(query.value(2).toString());
        e.setHoraire(query.value(3).toTime());
        e.setSceneId(query.value(4).toUInt());
    }
    return e;
}

bool Emission::update(unsigned int id, Emission e)
{
    QSqlQuery query;
    query.prepare("UPDATE emissions SET nom = :nom, genre = :genre, horaire = :horaire, scene_id = :scene_id WHERE id = :id");
    query.bindValue(":nom", e.getNom());
    query.bindValue(":genre", e.getGenre());
    query.bindValue(":horaire", e.getHoraire());
    query.bindValue(":scene_id", e.getSceneId());
    query.bindValue(":id", id);
    return query.exec();
}

bool Emission::remove(unsigned int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM emissions WHERE id = :id");
    query.bindValue(":id", id);
    return query.exec();
}


