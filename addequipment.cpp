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
   CRUDequipment c(1,ui->labelE->text(),1,ui->stateE->text(),ui->categoryE->text());
   /* bool check =  c.addEquipment();
    if (check) {
        this->close();
    } else {
        qDebug() << "Empty";
    }   */
    c.addEquipment();
}
