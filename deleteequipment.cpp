#include "deleteequipment.h"
#include "ui_deleteequipment.h"
#include "crudequipment.h"
#include <QDebug>

deleteEquipment::deleteEquipment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteEquipment)
{
    ui->setupUi(this);
}

deleteEquipment::~deleteEquipment()
{
    delete ui;
}

void deleteEquipment::on_buttonBox_accepted()
{
 int id = ui->deleteE->text().toUInt();
    CRUDequipment e;
    e.deleteEquipment(id);

}
