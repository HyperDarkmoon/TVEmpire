#include "emissionedit.h"
#include "ui_emissionedit.h"
#include "emission.h"
#include "QDebug"
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
// Inside the EmissionEdit class implementation (emissionedit.cpp)
void EmissionEdit::setData(const CrudEmission &emissionData)
{
    // Set the data in your dialog's widgets
    // For example, assuming you have QLineEdit widgets for each field:
    ui->id->setText(QString::number(emissionData.getId()));
    qDebug() << emissionData.getNom();
    ui->name->setText(emissionData.getNom());
    ui->genre->setText(emissionData.getGenre());
    ui->dob->setDate(emissionData.getHoraire());
    ui->gender->setCurrentText("1");
}
