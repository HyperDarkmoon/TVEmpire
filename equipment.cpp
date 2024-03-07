#include "equipment.h"
#include "ui_equipment.h"

Equipment::Equipment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Equipment), addE(new addEquipment), modE (new modifyEquipment), showE(new showEquipment), delE(new deleteEquipment)
{
    ui->setupUi(this);
}

Equipment::~Equipment()
{
    delete ui;
}

void Equipment::on_Ajout_clicked()
{
    addE->show();
}

void Equipment::on_Modifier_clicked()
{
    modE->show();
}

void Equipment::on_Afficher_clicked()
{
    showE->show();
}

void Equipment::on_Supprimer_clicked()
{
    delE->show();
}
