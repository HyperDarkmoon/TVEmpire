#include "addequipment.h"
#include "ui_addequipment.h"
#include "crudequipment.h"
#include <QDebug>

addEquipment::addEquipment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addEquipment)
{
    ui->setupUi(this);
}

addEquipment::~addEquipment()
{
    delete ui;
}

void addEquipment::on_buttonBox_accepted()
{
   CRUDequipment E(1,ui->labelE->text(),ui->stateE_2->text().toInt(),ui->stateE->text(),ui->categoryE->text());
   E.addEquipment();
   emit buttonClicked();
   this->close();

}
