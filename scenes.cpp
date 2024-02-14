#include "scenes.h"
#include "ui_scenes.h"

Scenes::Scenes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Scenes)
{
    ui->setupUi(this);
}

Scenes::~Scenes()
{
    delete ui;
}
