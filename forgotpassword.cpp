#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include "../smtp/src/SmtpMime"
#include <QSslSocket>
#include <employee.h>
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

void ForgotPassword::on_pushButton_clicked()
{
    CrudEmployee emp;
    QString login = ui->login->text();
    emp = emp.getEmployeeByLogin(login);
    QString password = emp.getPassword();

    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);
    smtp.setUser("zizo3badri@gmail.com");
    smtp.setPassword("qywp klxh vdhn ozsi");
    MimeMessage message;
    message.setSender(new EmailAddress("zizo3badri@gmail.com", "TVEmpire"));
    message.addRecipient(new EmailAddress(ui->email->text(), "Recipient's Name"));
    message.setSubject("Forgor password");
    MimeText text;

    text.setText("Hi,\nYou requested your password.\nYour login is : "+login+"\nand your password is : "+password+"\n");

    message.addPart(&text);


    smtp.connectToHost();
    smtp.login();
    bool test = smtp.sendMail(message);
    if (test) {
        qDebug() << "Success";
        this->close();
    } else {
        qDebug() << "failure";
    }
    smtp.quit();
}
