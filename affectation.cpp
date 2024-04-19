#include "affectation.h"
#include "ui_affectation.h"

Affectation::Affectation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Affectation)
{
    ui->setupUi(this);
}

Affectation::~Affectation()
{
    delete ui;
}
