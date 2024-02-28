#ifndef EMISSION_H
#define EMISSION_H

#include <QWidget>
#include <QString>
#include <QTime>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "addemission.h"
namespace Ui {
class Emission;
}

class Emission : public QWidget
{
    Q_OBJECT

public:
    explicit Emission(QWidget *parent = nullptr);
    ~Emission();



private slots:
    void on_pushButton_clicked();

    void on_add_btn_2_clicked();

private:

    Ui::Emission *ui;
    addEmission *addemission;


};
class CrudEmission {
private:
    unsigned int id;
    QString nom;
    QString genre;
    QTime horaire;
    unsigned int sceneId;

public:
    unsigned int getId() ;

    QString getNom();
    QString getGenre();
    QTime getHoraire() ;
    unsigned int getSceneId();

    void setId(unsigned int newId) ;
    void setNom(const QString& newNom);
    void setGenre(const QString& newGenre);
    void setHoraire(const QTime& newHoraire);
    void setSceneId(unsigned int newSceneId);

    bool create(Emission e);
    CrudEmission read(unsigned int id);
    bool update(unsigned int id, Emission e);
    bool remove(unsigned int id)

};


#endif // EMISSION_H
