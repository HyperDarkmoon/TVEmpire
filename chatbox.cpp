#include "chatbox.h"
#include "ui_chatbox.h"

ChatBox::ChatBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatBox)
{
    ui->setupUi(this);
}

ChatBox::~ChatBox()
{
    delete ui;
}
