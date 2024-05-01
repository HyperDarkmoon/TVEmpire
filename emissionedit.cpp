#include "emissionedit.h"
#include "ui_emissionedit.h"
#include "emission.h"
#include "QDebug"
#include <QSqlQuery>
EmissionEdit::EmissionEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmissionEdit)
{
    ui->setupUi(this);
}

EmissionEdit::~EmissionEdit()
{
    delete ui;
}
void EmissionEdit::resetInputs()
{
    // Reset all input fields in the dialog
    ui->id->clear();
    ui->name->clear();
    ui->genre->clear();
    ui->dob->setDate(QDate::currentDate()); // You may want to set it to an appropriate default date
    ui->gender->clear();
    // Add similar lines for other input fields as needed
}

// Inside the EmissionEdit class implementation (emissionedit.cpp)
void EmissionEdit::setData(const CrudEmission &emissionData)
{
    resetInputs();
    // Set the data in your dialog's widgets
    // For example, assuming you have QLineEdit widgets for each field:
    ui->id->setText(QString::number(emissionData.getId()));
    ui->name->setText(emissionData.getNom());
    ui->genre->setText(emissionData.getGenre());
    ui->dob->setTime(emissionData.getHoraire());
    QSqlQuery scenes;
    scenes.prepare("SELECT id from Scenes");
    scenes.exec();
    while (scenes.next()) {
            int sceneId = scenes.value(0).toInt();
            ui->gender->addItem(QString::number(sceneId));
        }
}

void EmissionEdit::on_pushButton_5_clicked()
{
        CrudEmission c;
        c.setId(ui->id->text().toUInt());
        c.setNom(ui->name->text());
        c.setGenre(ui->genre->text());
        c.setHoraire(ui->dob->time());
        c.setSceneId(ui->gender->currentText().toUInt());
        c.update(c.getId(),c);
        emit onButtonClick();
        resetInputs();
        this->close();


}
