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
   CRUDequipment E(1,ui->labelE->text(),1,ui->stateE->text(),ui->categoryE->text());
    bool check =  E.createEquipment(E);
    if (check) {
        this->close();
    } else {
        qDebug() << "Empty";
    }

}
