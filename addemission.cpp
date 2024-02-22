#include "addemission.h"
#include "ui_addemission1.h"

addEmission::addEmission(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addEmission)
{
    ui->setupUi(this);
}

addEmission::~addEmission()
{
    delete ui;
}
