#include "addemission.h"
#include "ui_addemission1.h"
#include <QDebug>
#include <QMessageBox>
#include "emission.h"


addEmission::addEmission(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addEmission)
{
    ui->setupUi(this);
    resetInputs();
}



addEmission::~addEmission()
{
    delete ui;
}




void addEmission::on_pushButton_5_clicked() {
  // Check for minimum characters in nom (name)
  QString nom = ui->name->text();
  if (nom.length() < 3) {
    // Display error message (assuming you have an error label)
    ui->errorLabel->setText("Error: Name must be at least 3 characters long.");
    return; // Exit the function without creating emission
  }
  if (ui->genre->text().length() < 3) {
    // Display error message (assuming you have an error label)
    ui->errorLabel->setText("Error: Genre must be at least 3 characters long.");
    return; // Exit the function without creating emission
  }
  // Check for horaire (schedule) to be at least the current day
  QDate today = QDate::currentDate();
  QDate horaire = ui->dob->date();
  if (horaire < today) {
    ui->errorLabel->setText("Error: Schedule cannot be before today's date.");
    return; // Exit the function without creating emission
  }

  // Proceed with creating the emission if checks pass
  CrudEmission c;
  c.setNom(nom);
  c.setGenre(ui->genre->text());
  c.setHoraire(horaire);
  c.setSceneId(ui->gender->currentText().toUInt());
  c.create(c);
  emit buttonClicked();
  resetInputs();
  this->close();
}

void addEmission::resetInputs()
{
    // Reset all input fields in the dialog
    ui->id->clear();
    ui->name->clear();
    ui->genre->clear();
    ui->dob->setDate(QDate::currentDate()); // You may want to set it to an appropriate default date
    ui->gender->clear();
    ui->errorLabel->setText("");
    QSqlQuery scenes;
        scenes.prepare("SELECT id from Scenes");
        scenes.exec();
        while (scenes.next()) {
                int sceneId = scenes.value(0).toInt();
                ui->gender->addItem(QString::number(sceneId));
            }
    // Add similar lines for other input fields as needed
}
