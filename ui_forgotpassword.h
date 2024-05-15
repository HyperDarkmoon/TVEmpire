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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ForgotPassword
{
public:
    QLabel *label;
    QLineEdit *email;
    QLabel *label_2;
    QLineEdit *login;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *ForgotPassword)
    {
        if (ForgotPassword->objectName().isEmpty())
            ForgotPassword->setObjectName(QStringLiteral("ForgotPassword"));
        ForgotPassword->resize(591, 424);
        label = new QLabel(ForgotPassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 60, 271, 51));
        email = new QLineEdit(ForgotPassword);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(170, 170, 271, 31));
        label_2 = new QLabel(ForgotPassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 170, 71, 31));
        login = new QLineEdit(ForgotPassword);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(170, 120, 271, 31));
        label_3 = new QLabel(ForgotPassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 120, 71, 31));
        pushButton = new QPushButton(ForgotPassword);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 240, 191, 51));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: transparent; \n"
"    color: black;\n"
"\n"
"    border-radius: 10px;\n"
"    padding: 10px 20px;\n"
"    font-weight: bold;\n"
"    font-family: Calibri, sans-serif;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton:hover {\n"
"  \n"
"    border: 3px solid #141E46;\n"
"    color: black;\n"
"}\n"
"\n"
"/* Pressed effect */\n"
"QPushButton:pressed {\n"
"    background-color: #141E46;\n"
"    border: 2px solid #141E46;\n"
"    padding: 9px 19px;\n"
"    color: white;\n"
"}\n"
"\n"
"/* Checked effect */\n"
"QPushButton:checked {\n"
"    background-color: #64a1c2; /* Your desired color */\n"
"    border: none; /* Remove the border if needed */\n"
"}"));

        retranslateUi(ForgotPassword);

        QMetaObject::connectSlotsByName(ForgotPassword);
    } // setupUi

    void retranslateUi(QDialog *ForgotPassword)
    {
        ForgotPassword->setWindowTitle(QApplication::translate("ForgotPassword", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ForgotPassword", "Password Recovery Form:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ForgotPassword", "Email:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ForgotPassword", "Login", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ForgotPassword", "Recieve Password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ForgotPassword: public Ui_ForgotPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
