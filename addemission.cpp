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
    resetInputs();
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
    resetInputs();
    this->close();

}
void addEmission::resetInputs()
{
    // Reset all input fields in the dialog
    ui->id->clear();
    ui->name->clear();
    ui->genre->clear();
    ui->dob->setDate(QDate::currentDate()); // You may want to set it to an appropriate default date
    ui->gender->clear();
    QSqlQuery scenes;
        scenes.prepare("SELECT id from Scenes");
        scenes.exec();
        while (scenes.next()) {
                int sceneId = scenes.value(0).toInt();
                ui->gender->addItem(QString::number(sceneId));
            }
    // Add similar lines for other input fields as needed
}
