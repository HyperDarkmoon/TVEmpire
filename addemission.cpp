#include "addemission.h"
#include "ui_addemission1.h"
#include <QDebug>
#include <QMessageBox>

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
