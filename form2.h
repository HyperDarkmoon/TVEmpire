#ifndef FORM2_H
#define FORM2_H

#include <QWidget>
#include <QTimer>
#include "arduino.h"
#include "mainwindow.h" // Include the MainWindow header file
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

private slots:
    void authenticate();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_forgotPushButton_clicked();
    void checkForScannedCard();

signals:
    void authenticationSuccessful();

private:
    Ui::Form2 *ui;
    ForgotPassword forgotDialog;
    MainWindow *mainWindow;
    Arduino *arduino;
    QTimer *cardCheckTimer;
};

#endif // FORM2_H
