/********************************************************************************
** Form generated from reading UI file 'addemployee.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEMPLOYEE_H
#define UI_ADDEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_addEmployee
{
public:
    QLabel *company_label;
    QLabel *id_14;
    QDateEdit *dob;
    QLabel *label_18;
    QLineEdit *lastname;
    QLabel *id_4;
    QLineEdit *login;
    QLabel *id_3;
    QLabel *id_8;
    QPushButton *pushButton_6;
    QLabel *id_13;
    QLabel *id_9;
    QPushButton *pushButton_5;
    QLabel *id;
    QLabel *id_10;
    QComboBox *gender;
    QLabel *id_12;
    QLineEdit *name;
    QLabel *id_2;
    QTimeEdit *starttime;
    QTimeEdit *endtime;
    QLineEdit *password;
    QLineEdit *salary;
    QComboBox *post;

    void setupUi(QDialog *addEmployee)
    {
        if (addEmployee->objectName().isEmpty())
            addEmployee->setObjectName(QStringLiteral("addEmployee"));
        addEmployee->resize(829, 548);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(47, 59, 82, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(70, 88, 123, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(58, 73, 102, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(23, 29, 41, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(31, 39, 54, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        addEmployee->setPalette(palette);
        company_label = new QLabel(addEmployee);
        company_label->setObjectName(QStringLiteral("company_label"));
        company_label->setGeometry(QRect(10, 210, 241, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        company_label->setFont(font);
        id_14 = new QLabel(addEmployee);
        id_14->setObjectName(QStringLiteral("id_14"));
        id_14->setGeometry(QRect(270, 320, 141, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        id_14->setFont(font1);
        dob = new QDateEdit(addEmployee);
        dob->setObjectName(QStringLiteral("dob"));
        dob->setGeometry(QRect(530, 70, 240, 32));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(10);
        dob->setFont(font2);
        dob->setStyleSheet(QLatin1String("#empDOB\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        dob->setCurrentSection(QDateTimeEdit::YearSection);
        label_18 = new QLabel(addEmployee);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 0, 241, 31));
        QPalette palette1;
        QBrush brush9(QColor(224, 224, 225, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush9);
        QBrush brush10(QColor(224, 224, 225, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        QBrush brush11(QColor(224, 224, 225, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        QBrush brush12(QColor(0, 120, 215, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        QBrush brush13(QColor(224, 224, 225, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        label_18->setPalette(palette1);
        label_18->setFont(font);
        lastname = new QLineEdit(addEmployee);
        lastname->setObjectName(QStringLiteral("lastname"));
        lastname->setGeometry(QRect(270, 70, 240, 32));
        lastname->setFont(font2);
        lastname->setStyleSheet(QLatin1String("#empFather\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}\n"
"QLineEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTextEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 1.5px;\n"
"}\n"
""));
        id_4 = new QLabel(addEmployee);
        id_4->setObjectName(QStringLiteral("id_4"));
        id_4->setGeometry(QRect(10, 120, 141, 21));
        id_4->setFont(font1);
        login = new QLineEdit(addEmployee);
        login->setObjectName(QStringLiteral("login"));
        login->setEnabled(true);
        login->setGeometry(QRect(10, 350, 201, 32));
        login->setFont(font2);
        login->setStyleSheet(QLatin1String("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}\n"
"QLineEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTextEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 1.5px;\n"
"}\n"
""));
        id_3 = new QLabel(addEmployee);
        id_3->setObjectName(QStringLiteral("id_3"));
        id_3->setGeometry(QRect(530, 45, 141, 21));
        id_3->setFont(font1);
        id_8 = new QLabel(addEmployee);
        id_8->setObjectName(QStringLiteral("id_8"));
        id_8->setGeometry(QRect(550, 250, 141, 21));
        id_8->setFont(font1);
        pushButton_6 = new QPushButton(addEmployee);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(440, 480, 150, 32));
        QFont font3;
        font3.setPointSize(10);
        pushButton_6->setFont(font3);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setFocusPolicy(Qt::TabFocus);
        pushButton_6->setStyleSheet(QLatin1String("#pushButton_6\n"
"{\n"
" border-radius: 10px;\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_6:hover\n"
"{\n"
" border-radius: 10px;\n"
"	background:solid red;\n"
"	border:2px solid #EC3245;\n"
"	color:solid white;\n"
"}"));
        id_13 = new QLabel(addEmployee);
        id_13->setObjectName(QStringLiteral("id_13"));
        id_13->setGeometry(QRect(270, 250, 141, 21));
        id_13->setFont(font1);
        id_9 = new QLabel(addEmployee);
        id_9->setObjectName(QStringLiteral("id_9"));
        id_9->setGeometry(QRect(10, 320, 141, 21));
        id_9->setFont(font1);
        pushButton_5 = new QPushButton(addEmployee);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(610, 480, 150, 32));
        pushButton_5->setFont(font3);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setFocusPolicy(Qt::TabFocus);
        pushButton_5->setStyleSheet(QLatin1String("#pushButton_5\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
" border-radius: 10px;\n"
"}\n"
"\n"
"#pushButton_5:hover\n"
"{\n"
" border-radius: 10px;\n"
"	background:solid green;\n"
"	border:2px solid #00855C;\n"
"	color: solid white;\n"
"}"));
        id = new QLabel(addEmployee);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(10, 45, 141, 21));
        id->setFont(font1);
        id_10 = new QLabel(addEmployee);
        id_10->setObjectName(QStringLiteral("id_10"));
        id_10->setGeometry(QRect(550, 320, 141, 21));
        id_10->setFont(font1);
        gender = new QComboBox(addEmployee);
        gender->setObjectName(QStringLiteral("gender"));
        gender->setGeometry(QRect(10, 145, 240, 32));
        gender->setFont(font2);
        gender->setStyleSheet(QLatin1String("#empGender\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_12 = new QLabel(addEmployee);
        id_12->setObjectName(QStringLiteral("id_12"));
        id_12->setGeometry(QRect(10, 250, 141, 21));
        id_12->setFont(font1);
        name = new QLineEdit(addEmployee);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(10, 70, 240, 32));
        name->setFont(font2);
        name->setStyleSheet(QLatin1String("#empName\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}\n"
"QLineEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTextEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 1.5px;\n"
"}\n"
""));
        id_2 = new QLabel(addEmployee);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(270, 45, 141, 21));
        id_2->setFont(font1);
        starttime = new QTimeEdit(addEmployee);
        starttime->setObjectName(QStringLiteral("starttime"));
        starttime->setGeometry(QRect(270, 280, 201, 32));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        QBrush brush15(QColor(0, 0, 0, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        QBrush brush16(QColor(0, 0, 0, 128));
        brush16.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        starttime->setPalette(palette2);
        endtime = new QTimeEdit(addEmployee);
        endtime->setObjectName(QStringLiteral("endtime"));
        endtime->setGeometry(QRect(550, 280, 201, 32));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush17(QColor(0, 0, 0, 128));
        brush17.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush17);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        QBrush brush18(QColor(0, 0, 0, 128));
        brush18.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush18);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        QBrush brush19(QColor(0, 0, 0, 128));
        brush19.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush19);
#endif
        endtime->setPalette(palette3);
        password = new QLineEdit(addEmployee);
        password->setObjectName(QStringLiteral("password"));
        password->setEnabled(true);
        password->setGeometry(QRect(270, 350, 201, 32));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush20(QColor(127, 127, 127, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush20);
        QBrush brush21(QColor(170, 170, 170, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush22(QColor(0, 0, 0, 128));
        brush22.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush22);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush22);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush22);
#endif
        password->setPalette(palette4);
        password->setFont(font2);
        password->setStyleSheet(QLatin1String("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}\n"
"QLineEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTextEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 1.5px;\n"
"}\n"
""));
        salary = new QLineEdit(addEmployee);
        salary->setObjectName(QStringLiteral("salary"));
        salary->setEnabled(true);
        salary->setGeometry(QRect(550, 350, 201, 32));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush22);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush22);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush22);
#endif
        salary->setPalette(palette5);
        salary->setFont(font2);
        salary->setStyleSheet(QLatin1String("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}\n"
"QLineEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTextEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 1.5px;\n"
"}\n"
""));
        post = new QComboBox(addEmployee);
        post->setObjectName(QStringLiteral("post"));
        post->setGeometry(QRect(10, 280, 240, 32));
        post->setFont(font2);
        post->setStyleSheet(QLatin1String("#empGender\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));

        retranslateUi(addEmployee);

        QMetaObject::connectSlotsByName(addEmployee);
    } // setupUi

    void retranslateUi(QDialog *addEmployee)
    {
        addEmployee->setWindowTitle(QApplication::translate("addEmployee", "Dialog", Q_NULLPTR));
        company_label->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#e0e0e1;\">Company Info</span></p></body></html>", Q_NULLPTR));
        id_14->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Password</span></p></body></html>", Q_NULLPTR));
        label_18->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#e0e0e1;\">Personal Info</span></p></body></html>", Q_NULLPTR));
        lastname->setText(QString());
        id_4->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Sexe</span></p></body></html>", Q_NULLPTR));
        login->setText(QString());
        id_3->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Date Necssaince</span></p></body></html>", Q_NULLPTR));
        id_8->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Temps de sortie</span></p></body></html>", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("addEmployee", "Clear", Q_NULLPTR));
        id_13->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Temps d'entree</span></p></body></html>", Q_NULLPTR));
        id_9->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Login</span></p></body></html>", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("addEmployee", "Submit", Q_NULLPTR));
        id->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Nom</span></p><p><br/></p></body></html>", Q_NULLPTR));
        id_10->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Salaire</span></p></body></html>", Q_NULLPTR));
        gender->clear();
        gender->insertItems(0, QStringList()
         << QApplication::translate("addEmployee", "Male", Q_NULLPTR)
         << QApplication::translate("addEmployee", "Female", Q_NULLPTR)
         << QApplication::translate("addEmployee", "Other", Q_NULLPTR)
        );
        id_12->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Poste</span></p></body></html>", Q_NULLPTR));
        name->setText(QString());
        id_2->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Prenom</span></p></body></html>", Q_NULLPTR));
        password->setText(QString());
        salary->setText(QString());
        post->clear();
        post->insertItems(0, QStringList()
         << QApplication::translate("addEmployee", "Admin", Q_NULLPTR)
         << QApplication::translate("addEmployee", "RH", Q_NULLPTR)
         << QApplication::translate("addEmployee", "Logistique", Q_NULLPTR)
         << QApplication::translate("addEmployee", "Personnel", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class addEmployee: public Ui_addEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEMPLOYEE_H
