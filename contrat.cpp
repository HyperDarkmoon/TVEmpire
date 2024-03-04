#include "contrat.h"
#include "ui_contrat.h"

contrat::contrat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::contrat)
{
    ui->setupUi(this);
}

contrat::~contrat()
{
    delete ui;
}
