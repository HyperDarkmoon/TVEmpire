#include "showequipment.h"
#include "ui_showequipment.h"
#include"crudequipment.h"

showEquipment::showEquipment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showEquipment)
{
    ui->setupUi(this);
}

showEquipment::~showEquipment()
{
    delete ui;
}
