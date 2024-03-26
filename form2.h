#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "mainwindow.h"
#include "forgotpassword.h"

namespace Ui {
class Form2;
}

class Form2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form2(QWidget *parent = nullptr);
    ~Form2();
    void authenticate();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_forgotPushButton_clicked();

private:
    ForgotPassword forgotDialog;
    Ui::Form2 *ui;
    MainWindow *mainWindow;

};

#endif // LOGIN_H
