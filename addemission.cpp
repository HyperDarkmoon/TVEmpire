#include "addemission.h"
#include "ui_addemission1.h"
#include <QDebug>
#include <QMessageBox>
#include "emission.h"
addEmission::addEmission(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addEmission)
{
    ui->setupUi(this);
    QMessageBox msg;
}

addEmission::~addEmission()
{
    delete ui;
}

void addEmission::on_pushButton_5_clicked()
{
    CrudEmission c;
    c.setNom(ui->name->text());
    c.setGenre(ui->genre->text());
    c.setHoraire(ui->dob->date());
    c.setSceneId(ui->gender->currentText().toUInt());
    c.create(c);
    emit buttonClicked();
    this->close();

}
