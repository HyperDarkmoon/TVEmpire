#include "addequipment.h"
#include "ui_addequipment.h"
#include "crudequipment.h"
#include <QDebug>
#include <QFileDialog>  // Include QFileDialog header

addEquipment::addEquipment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addEquipment)
{
    ui->setupUi(this);
    connect(ui->selectImageButton, &QPushButton::clicked, this, &addEquipment::on_selectImageButton_clicked);  // Connect the button
    imageLabel = ui->imageLabel;  // Initialize the imageLabel member variable
}

addEquipment::~addEquipment()
{
    delete ui;
}

void addEquipment::on_buttonBox_accepted()
{
    CRUDequipment E(1, ui->labelE->text(), ui->stateE_2->text().toInt(), ui->stateE->text(), ui->categoryE->text());
    E.addEquipment();
    emit buttonClicked();
    this->close();
}

void addEquipment::on_selectImageButton_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));

    if (!imagePath.isEmpty()) {
        QPixmap pixmap(imagePath);
        imageLabel->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio));
    }
}
