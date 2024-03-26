#include "form2.h"
#include "ui_form2.h"
#include "mainwindow.h"
#include "employee.h"
#include <QMessageBox>
#include "usersession.h"

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
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    CrudEmployee employee; // Create an object of CrudEmployee
    QList<CrudEmployee> employees = employee.getAllEmployees(); // Call non-static member function on the object
    bool authenticated = false;

    for (const auto& emp : employees) {
        if (emp.getLogin() == username && emp.getPassword() == password) {
            authenticated = true;
            // Store the username in the UserSession class
            UserSession::getInstance().setUsername(username);
            break;
        }
    }

    if (authenticated) {
        mainWindow->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Authentication Failed", "Invalid username or password.");
    }
}



void Form2::on_pushButton_clicked()
{
   authenticate();
}

void Form2::on_pushButton_2_clicked()
{

}

void Form2::on_forgotPushButton_clicked()
{
    forgotDialog.show();
}
