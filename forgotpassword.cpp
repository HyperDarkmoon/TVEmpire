#include "forgotpassword.h"
#include "ui_forgotpassword.h"

ForgotPassword::ForgotPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ForgotPassword)
{
    ui->setupUi(this);
}

ForgotPassword::~ForgotPassword()
{
    delete ui;
}
