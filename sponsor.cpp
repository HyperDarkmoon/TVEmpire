#include "sponsor.h"
#include "ui_sponsor.h"

Sponsor::Sponsor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sponsor)
{
    ui->setupUi(this);
}

Sponsor::~Sponsor()
{
    delete ui;
}
