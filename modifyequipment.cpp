#include "modifyequipment.h"
#include "ui_modifyequipment.h"
#include "crudequipment.h"

modifyEquipment::modifyEquipment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifyEquipment)
{
    ui->setupUi(this);
}

modifyEquipment::~modifyEquipment()
{
    delete ui;
}

void modifyEquipment::on_buttonBox_accepted()
{
    CRUDequipment c(1,ui->labelME->text(),1,ui->stateME->text(),ui->categoryME->text());
    //c.modifyEquipment();
}
