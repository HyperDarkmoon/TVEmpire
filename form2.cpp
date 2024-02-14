#include "form2.h"
#include "ui_form2.h"
#include "mainwindow.h"
Form2::Form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form2),
    mainWindow(new MainWindow())  // Initialize the member variable in the constructor
{
    ui->setupUi(this);
}

Form2::~Form2()
{
    delete ui;
    // No need to delete the mainWindow here, it will be deleted automatically
}

void Form2::on_pushButton_clicked()
{
    if (ui->lineEdit->text() == "admin" && ui->lineEdit_2->text() == "admin")
    {
        mainWindow->show();
        this->close();
    }
}
