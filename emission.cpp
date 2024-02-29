#include "emission.h"
#include "ui_emission.h"
#include <QDebug>
Emission::Emission(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Emission), addemission(new addEmission)
{
    ui->setupUi(this);
}

Emission::~Emission()
{
    delete ui;
}


void CrudEmission::setId(unsigned int newId) {
    id = newId;
}

void CrudEmission::setNom(const QString& newNom) {
    nom = newNom;
}

void CrudEmission::setGenre(const QString& newGenre) {
    genre = newGenre;
}

void CrudEmission::setHoraire(const QTime& newHoraire) {
    horaire = newHoraire;
}

void CrudEmission::setSceneId(unsigned int newSceneId) {
    sceneId = newSceneId;
}
unsigned int CrudEmission::getId()  {
    return id;
}

QString CrudEmission::getNom()  {
    return nom;
}

QString CrudEmission::getGenre() {
    return genre;
}

QTime CrudEmission::getHoraire() {
    return horaire;
}

unsigned int CrudEmission::getSceneId(){
    return sceneId;
}


bool CrudEmission::create(CrudEmission e)
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

CrudEmission CrudEmission::read(unsigned int id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM emissions WHERE id = :id");
    query.bindValue(":id", id);
    query.exec();
    CrudEmission e;
    if (query.next()) {
        e.setId(query.value(0).toUInt());
        e.setNom(query.value(1).toString());
        e.setGenre(query.value(2).toString());
        e.setHoraire(query.value(3).toTime());
        e.setSceneId(query.value(4).toUInt());
    }
    return e;
}

bool CrudEmission::update(unsigned int id, CrudEmission e)
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

bool CrudEmission::remove(unsigned int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM emissions WHERE id = :id");
    query.bindValue(":id", id);
    return query.exec();
}


void Emission::on_add_btn_2_clicked()
{
    addemission->show();
}
