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
    Emission(const Emission &other);

    void setId(unsigned int id);
    unsigned int getId();

    void setNom(QString nom);
    QString getNom();

    void setGenre(QString genre);
    QString getGenre();

    void setHoraire(QTime horaire);
    QTime getHoraire();

    void setSceneId(unsigned int sceneId);
    unsigned int getSceneId();

    bool create(Emission e);
    Emission read(unsigned int id);
    bool update(unsigned int id , Emission e);
    bool remove(unsigned int id);


private slots:
    void on_pushButton_clicked();

    void on_add_btn_2_clicked();

private:

    Ui::Emission *ui;
    addEmission *addemission;

    unsigned int id;
    QString nom;
    QString genre;
    QTime horaire;
    unsigned int sceneId;

};

#endif // EMISSION_H
