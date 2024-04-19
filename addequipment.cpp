#include "addequipment.h"
#include "ui_addequipment.h"
#include "crudequipment.h"
#include <QDebug>
#include <QFileDialog>
#include <QBuffer>
#include <QIODevice>


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
    // Get the image data from the QLabel
    QPixmap pixmap = ui->imageLabel->pixmap()->scaled(25, 25, Qt::KeepAspectRatio);
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    buffer.open(QIODevice::WriteOnly);
    pixmap.save(&buffer, "PNG");  // Save the pixmap as PNG format to the QByteArray

    // Create a CRUDequipment object with image data
    CRUDequipment E(1, ui->labelE->text(), ui->stateE_2->text().toInt(), ui->stateE->text(), ui->categoryE->text(), byteArray);
    E.addEquipment();

    emit buttonClicked();
    this->close();
}

void addEquipment::on_selectImageButton_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));

    if (!imagePath.isEmpty()) {
        QPixmap pixmap(imagePath);
        imageLabel->setPixmap(pixmap.scaled(25, 25, Qt::KeepAspectRatio));
    }
}
