#include "form2.h"
#include "ui_form2.h"
#include "mainwindow.h"


Form2::Form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form2),
    mainWindow(new MainWindow())  // Initialize the member variable in the constructor
{
    ui->setupUi(this);

    // Connect the returnPressed() signal of the lineEdit widget to the on_pushButton_clicked() slot
    connect(ui->lineEdit_2, &QLineEdit::returnPressed, this, &Form2::authenticate);
}

Form2::~Form2()
{
    delete ui;
    // No need to delete the mainWindow here, it will be deleted automatically
}

void Form2::authenticate()
{

    if (ui->lineEdit->text() == "admin" && ui->lineEdit_2->text() == "admin")
    {
        mainWindow->show();
        this->close();
    }
}
void Form2::on_pushButton_clicked()
{
   authenticate();
}

void Form2::on_pushButton_2_clicked()
{

}
