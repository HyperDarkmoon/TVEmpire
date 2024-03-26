#ifndef FORGOTPASSWORD_H
#define FORGOTPASSWORD_H

#include <QDialog>

namespace Ui {
class ForgotPassword;
}

class ForgotPassword : public QDialog
{
    Q_OBJECT

public:
    explicit ForgotPassword(QWidget *parent = nullptr);
    ~ForgotPassword();

private:
    Ui::ForgotPassword *ui;
};

#endif // FORGOTPASSWORD_H
