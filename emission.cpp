#include "emission.h"
#include "ui_emission.h"

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
