/********************************************************************************
** Form generated from reading UI file 'form2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form2
{
public:
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *forgotPushButton;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName(QStringLiteral("Form2"));
        Form2->resize(551, 481);
        widget = new QWidget(Form2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 550, 500));
        widget->setStyleSheet(QLatin1String("QPushButton#pushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 rgba(85, 81, 84, 226));\n"
"}\n"
"\n"
"QPushButton#pushButton:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}\n"
"\n"
"QPushButton#pushButton_2, #pushButton_3, #pushButton_4, #pushButton_5{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85, 98, 112, 255);\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover, #pushButton_3:hover, #pushButton_4:hover, #pushButton_5:hover{\n"
"	color: rgba(131, 96, 53, 255);\n"
"}\n"
"\n"
"QPushButton#pushButton_2:pressed, #pushButton_3:pressed, #pushButton_4:pressed, #pushButton_5:pressed{\n"
"	padding-left:5px;\n"
"	p"
                        "adding-top:5px;\n"
"	color:rgba(91, 88, 53, 255);\n"
"}\n"
"\n"
""));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 280, 430));
        label->setStyleSheet(QLatin1String("border-image: url(:/images/background.jpg);\n"
"border-top-left-radius: 50px;"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 30, 280, 430));
        label_2->setStyleSheet(QLatin1String("\n"
"QLabel#label_2 {\n"
"        background-image: url(C:/Users/yassine abid/Desktop/tv/TVEmpire/icon/forma.jpg); /* Background image */\n"
"       background-color: rgba(0, 0, 0, 0); /* Transparent background */\n"
"        border-top-left-radius: 50px; /* Border radius on the top left */\n"
"       border-image:  url(C:/Users/yassine abid/Desktop/tv/TVEmpire/icon/forma.jpg) 10 10 10 10 stretch stretch; /* Border image */\n"
"        background-size: 280px 430px; /* Resize the background image */\n"
"    }"));
        label_2->setScaledContents(true);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 30, 240, 430));
        label_3->setStyleSheet(QLatin1String("background-color:rgba(255, 255, 255, 255);\n"
"border-bottom-right-radius: 50px;"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(340, 80, 100, 40));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color:rgba(0, 0, 0, 200);"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(295, 150, 190, 40));
        QFont font1;
        font1.setPointSize(10);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QLatin1String("QLineEdit {background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200) ;\n"
"color:rgba(0, 0, 0, 240);\n"
"padding-bottom:7px;\n"
"}\n"
"QLineEdit:hover {\n"
"      border-bottom-color: #242E42;\n"
"    }"));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(295, 215, 190, 40));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200) ;\n"
"color:rgba(0, 0, 0, 240);\n"
"padding-bottom:7px;\n"
"}\n"
"QLineEdit:hover {\n"
"      border-bottom-color: #242E42;\n"
"    }"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(295, 295, 190, 40));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"        background: rgb(36, 46, 66);  \n"
"       background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(36, 46, 66, 1), stop:0.93 rgba(224, 224, 225, 1));\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"      background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.17 rgba(235, 241, 244, 1), stop:0.61 rgba(224, 224, 225, 1));\n"
" color: black;\n"
"    }"));
        forgotPushButton = new QPushButton(widget);
        forgotPushButton->setObjectName(QStringLiteral("forgotPushButton"));
        forgotPushButton->setGeometry(QRect(300, 350, 181, 31));
        forgotPushButton->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 110, 230, 130));
        label_6->setStyleSheet(QStringLiteral("background-color:rgba(0, 0, 0, 75);"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 150, 180, 40));
        QFont font3;
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        label_7->setFont(font3);
        label_7->setStyleSheet(QStringLiteral("color:rgba(255, 255, 255, 200);"));

        retranslateUi(Form2);

        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QWidget *Form2)
    {
        Form2->setWindowTitle(QApplication::translate("Form2", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QApplication::translate("Form2", "Log In", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("Form2", "  User Name", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("Form2", "  Password", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Form2", "L o g  I n", Q_NULLPTR));
        forgotPushButton->setText(QApplication::translate("Form2", "Forgot your password?", Q_NULLPTR));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("Form2", "Tv Empire", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
