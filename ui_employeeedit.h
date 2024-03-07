/********************************************************************************
** Form generated from reading UI file 'employeeedit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEEDIT_H
#define UI_EMPLOYEEEDIT_H

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

class Ui_employeeedit
{
public:
    QLabel *id;
    QLineEdit *post;
    QLabel *id_2;
    QDateEdit *dob;
    QLineEdit *lastname;
    QLabel *label_18;
    QLabel *id_3;
    QPushButton *pushButton_6;
    QTimeEdit *endtime;
    QLineEdit *name;
    QTimeEdit *starttime;
    QComboBox *gender;
    QLabel *id_13;
    QLineEdit *password;
    QLabel *company_label;
    QLineEdit *salary;
    QLabel *id_8;
    QLabel *id_10;
    QLabel *id_4;
    QPushButton *pushButton_5;
    QLabel *id_12;
    QLineEdit *login;
    QLabel *id_9;
    QLabel *id_14;

    void setupUi(QDialog *employeeedit)
    {
        if (employeeedit->objectName().isEmpty())
            employeeedit->setObjectName(QStringLiteral("employeeedit"));
        employeeedit->resize(829, 548);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 0, 191, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 0, 159, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 0, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 0, 84, 255));
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
        employeeedit->setPalette(palette);
        id = new QLabel(employeeedit);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(20, 55, 141, 21));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        id->setFont(font);
        post = new QLineEdit(employeeedit);
        post->setObjectName(QStringLiteral("post"));
        post->setEnabled(true);
        post->setGeometry(QRect(20, 290, 201, 32));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush9(QColor(127, 127, 127, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush9);
        QBrush brush10(QColor(170, 170, 170, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        post->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        post->setFont(font1);
        post->setStyleSheet(QLatin1String("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_2 = new QLabel(employeeedit);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(280, 55, 141, 21));
        id_2->setFont(font);
        dob = new QDateEdit(employeeedit);
        dob->setObjectName(QStringLiteral("dob"));
        dob->setGeometry(QRect(540, 80, 240, 32));
        dob->setFont(font1);
        dob->setStyleSheet(QLatin1String("#empDOB\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        dob->setCurrentSection(QDateTimeEdit::YearSection);
        lastname = new QLineEdit(employeeedit);
        lastname->setObjectName(QStringLiteral("lastname"));
        lastname->setGeometry(QRect(280, 80, 240, 32));
        lastname->setFont(font1);
        lastname->setStyleSheet(QLatin1String("#empFather\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        label_18 = new QLabel(employeeedit);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 10, 241, 31));
        QPalette palette2;
        QBrush brush12(QColor(224, 224, 225, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Link, brush12);
        QBrush brush13(QColor(224, 224, 225, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Link, brush12);
        QBrush brush14(QColor(224, 224, 225, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        QBrush brush15(QColor(23, 29, 41, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        QBrush brush16(QColor(0, 120, 215, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Link, brush12);
        QBrush brush17(QColor(224, 224, 225, 128));
        brush17.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        label_18->setPalette(palette2);
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_18->setFont(font2);
        id_3 = new QLabel(employeeedit);
        id_3->setObjectName(QStringLiteral("id_3"));
        id_3->setGeometry(QRect(540, 55, 141, 21));
        id_3->setFont(font);
        pushButton_6 = new QPushButton(employeeedit);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(450, 490, 150, 32));
        QFont font3;
        font3.setPointSize(10);
        pushButton_6->setFont(font3);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setFocusPolicy(Qt::TabFocus);
        pushButton_6->setStyleSheet(QLatin1String("#pushButton_6\n"
"{\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_6:hover\n"
"{\n"
"	background:#2d2d2d;\n"
"	border:2px solid #EC3245;\n"
"	color:#EC3245;\n"
"}"));
        endtime = new QTimeEdit(employeeedit);
        endtime->setObjectName(QStringLiteral("endtime"));
        endtime->setGeometry(QRect(560, 290, 201, 32));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush18(QColor(0, 0, 0, 128));
        brush18.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        QBrush brush19(QColor(0, 0, 0, 128));
        brush19.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush19);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        QBrush brush20(QColor(0, 0, 0, 128));
        brush20.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush20);
#endif
        endtime->setPalette(palette3);
        name = new QLineEdit(employeeedit);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(20, 80, 240, 32));
        name->setFont(font1);
        name->setStyleSheet(QLatin1String("#empName\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        starttime = new QTimeEdit(employeeedit);
        starttime->setObjectName(QStringLiteral("starttime"));
        starttime->setGeometry(QRect(280, 290, 201, 32));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush21(QColor(0, 0, 0, 128));
        brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush21);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        QBrush brush22(QColor(0, 0, 0, 128));
        brush22.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush22);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        QBrush brush23(QColor(0, 0, 0, 128));
        brush23.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush23);
#endif
        starttime->setPalette(palette4);
        gender = new QComboBox(employeeedit);
        gender->setObjectName(QStringLiteral("gender"));
        gender->setGeometry(QRect(20, 155, 240, 32));
        gender->setFont(font1);
        gender->setStyleSheet(QLatin1String("#empGender\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_13 = new QLabel(employeeedit);
        id_13->setObjectName(QStringLiteral("id_13"));
        id_13->setGeometry(QRect(280, 260, 141, 21));
        id_13->setFont(font);
        password = new QLineEdit(employeeedit);
        password->setObjectName(QStringLiteral("password"));
        password->setEnabled(true);
        password->setGeometry(QRect(280, 360, 201, 32));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush10);
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
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
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
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        password->setPalette(palette5);
        password->setFont(font1);
        password->setStyleSheet(QLatin1String("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        company_label = new QLabel(employeeedit);
        company_label->setObjectName(QStringLiteral("company_label"));
        company_label->setGeometry(QRect(20, 220, 241, 31));
        company_label->setFont(font2);
        salary = new QLineEdit(employeeedit);
        salary->setObjectName(QStringLiteral("salary"));
        salary->setEnabled(true);
        salary->setGeometry(QRect(560, 360, 201, 32));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        salary->setPalette(palette6);
        salary->setFont(font1);
        salary->setStyleSheet(QLatin1String("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_8 = new QLabel(employeeedit);
        id_8->setObjectName(QStringLiteral("id_8"));
        id_8->setGeometry(QRect(560, 260, 141, 21));
        id_8->setFont(font);
        id_10 = new QLabel(employeeedit);
        id_10->setObjectName(QStringLiteral("id_10"));
        id_10->setGeometry(QRect(560, 330, 141, 21));
        id_10->setFont(font);
        id_4 = new QLabel(employeeedit);
        id_4->setObjectName(QStringLiteral("id_4"));
        id_4->setGeometry(QRect(20, 130, 141, 21));
        id_4->setFont(font);
        pushButton_5 = new QPushButton(employeeedit);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(620, 490, 150, 32));
        pushButton_5->setFont(font3);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setFocusPolicy(Qt::TabFocus);
        pushButton_5->setStyleSheet(QLatin1String("#pushButton_5\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_5:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        id_12 = new QLabel(employeeedit);
        id_12->setObjectName(QStringLiteral("id_12"));
        id_12->setGeometry(QRect(20, 260, 141, 21));
        id_12->setFont(font);
        login = new QLineEdit(employeeedit);
        login->setObjectName(QStringLiteral("login"));
        login->setEnabled(true);
        login->setGeometry(QRect(20, 360, 201, 32));
        login->setFont(font1);
        login->setStyleSheet(QLatin1String("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_9 = new QLabel(employeeedit);
        id_9->setObjectName(QStringLiteral("id_9"));
        id_9->setGeometry(QRect(20, 330, 141, 21));
        id_9->setFont(font);
        id_14 = new QLabel(employeeedit);
        id_14->setObjectName(QStringLiteral("id_14"));
        id_14->setGeometry(QRect(280, 330, 141, 21));
        id_14->setFont(font);

        retranslateUi(employeeedit);

        QMetaObject::connectSlotsByName(employeeedit);
    } // setupUi

    void retranslateUi(QDialog *employeeedit)
    {
        employeeedit->setWindowTitle(QApplication::translate("employeeedit", "Dialog", Q_NULLPTR));
        id->setText(QApplication::translate("employeeedit", "<html><head/><body><p><span style=\" color:#ffffff;\">Nom</span></p><p><br/></p></body></html>", Q_NULLPTR));
        post->setText(QString());
        id_2->setText(QApplication::translate("employeeedit", "<html><head/><body><p><span style=\" color:#ffffff;\">Prenom</span></p></body></html>", Q_NULLPTR));
        lastname->setText(QString());
        label_18->setText(QApplication::translate("employeeedit", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#e0e0e1;\">Personal Info</span></p></body></html>", Q_NULLPTR));
        id_3->setText(QApplication::translate("employeeedit", "<html><head/><body><p><span style=\" color:#ffffff;\">Date Necssaince</span></p></body></html>", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("employeeedit", "Clear", Q_NULLPTR));
        name->setText(QString());
        gender->clear();
        gender->insertItems(0, QStringList()
         << QApplication::translate("employeeedit", "Male", Q_NULLPTR)
         << QApplication::translate("employeeedit", "Female", Q_NULLPTR)
         << QApplication::translate("employeeedit", "Other", Q_NULLPTR)
        );
        id_13->setText(QApplication::translate("employeeedit", "<html><head/><body><p><span style=\" color:#ffffff;\">Temps d'entree</span></p></body></html>", Q_NULLPTR));
        password->setText(QString());
        company_label->setText(QApplication::translate("employeeedit", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#e0e0e1;\">Company Info</span></p></body></html>", Q_NULLPTR));
        salary->setText(QString());
        id_8->setText(QApplication::translate("employeeedit", "<html><head/><body><p><span style=\" color:#ffffff;\">Temps de sortie</span></p></body></html>", Q_NULLPTR));
        id_10->setText(QApplication::translate("employeeedit", "<html><head/><body><p><span style=\" color:#ffffff;\">Salaire</span></p></body></html>", Q_NULLPTR));
        id_4->setText(QApplication::translate("employeeedit", "<html><head/><body><p><span style=\" color:#ffffff;\">Sexe</span></p></body></html>", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("employeeedit", "Submit", Q_NULLPTR));
        id_12->setText(QApplication::translate("employeeedit", "<html><head/><body><p><span style=\" color:#ffffff;\">Poste</span></p></body></html>", Q_NULLPTR));
        login->setText(QString());
        id_9->setText(QApplication::translate("employeeedit", "<html><head/><body><p><span style=\" color:#ffffff;\">Login</span></p></body></html>", Q_NULLPTR));
        id_14->setText(QApplication::translate("employeeedit", "<html><head/><body><p><span style=\" color:#ffffff;\">Password</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class employeeedit: public Ui_employeeedit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEEDIT_H
