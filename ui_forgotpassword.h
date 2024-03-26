/********************************************************************************
** Form generated from reading UI file 'forgotpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORD_H
#define UI_FORGOTPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ForgotPassword
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *email;
    QLabel *label_2;

    void setupUi(QDialog *ForgotPassword)
    {
        if (ForgotPassword->objectName().isEmpty())
            ForgotPassword->setObjectName(QStringLiteral("ForgotPassword"));
        ForgotPassword->resize(591, 424);
        buttonBox = new QDialogButtonBox(ForgotPassword);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(90, 290, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ForgotPassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 60, 271, 51));
        email = new QLineEdit(ForgotPassword);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(170, 170, 271, 31));
        label_2 = new QLabel(ForgotPassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 170, 71, 31));

        retranslateUi(ForgotPassword);
        QObject::connect(buttonBox, SIGNAL(accepted()), ForgotPassword, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ForgotPassword, SLOT(reject()));

        QMetaObject::connectSlotsByName(ForgotPassword);
    } // setupUi

    void retranslateUi(QDialog *ForgotPassword)
    {
        ForgotPassword->setWindowTitle(QApplication::translate("ForgotPassword", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ForgotPassword", "Password Recovery Form:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ForgotPassword", "Email:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ForgotPassword: public Ui_ForgotPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
