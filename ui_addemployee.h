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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_addEmployee
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *login;
    QLabel *id_14;
    QDateEdit *dob;
    QLabel *label_18;
    QLineEdit *lastname;
    QLabel *id_4;
    QLineEdit *empID;
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
    QLineEdit *post;
    QTimeEdit *starttime;
    QTimeEdit *endtime;
    QLineEdit *password;
    QLineEdit *salary;

    void setupUi(QDialog *addEmployee)
    {
        if (addEmployee->objectName().isEmpty())
            addEmployee->setObjectName(QStringLiteral("addEmployee"));
        addEmployee->resize(829, 548);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        addEmployee->setPalette(palette);
        buttonBox = new QDialogButtonBox(addEmployee);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 480, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        login = new QLabel(addEmployee);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(10, 210, 241, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        login->setFont(font);
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
"}"));
        id_4 = new QLabel(addEmployee);
        id_4->setObjectName(QStringLiteral("id_4"));
        id_4->setGeometry(QRect(10, 120, 141, 21));
        id_4->setFont(font1);
        empID = new QLineEdit(addEmployee);
        empID->setObjectName(QStringLiteral("empID"));
        empID->setEnabled(false);
        empID->setGeometry(QRect(10, 350, 201, 32));
        empID->setFont(font2);
        empID->setStyleSheet(QLatin1String("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
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
"}\n"
"\n"
"#pushButton_5:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
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
"}"));
        id_2 = new QLabel(addEmployee);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(270, 45, 141, 21));
        id_2->setFont(font1);
        post = new QLineEdit(addEmployee);
        post->setObjectName(QStringLiteral("post"));
        post->setEnabled(false);
        post->setGeometry(QRect(10, 280, 201, 32));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush4(QColor(127, 127, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 170, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        post->setPalette(palette1);
        post->setFont(font2);
        post->setStyleSheet(QLatin1String("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        starttime = new QTimeEdit(addEmployee);
        starttime->setObjectName(QStringLiteral("starttime"));
        starttime->setGeometry(QRect(270, 280, 201, 32));
        endtime = new QTimeEdit(addEmployee);
        endtime->setObjectName(QStringLiteral("endtime"));
        endtime->setGeometry(QRect(550, 280, 201, 32));
        password = new QLineEdit(addEmployee);
        password->setObjectName(QStringLiteral("password"));
        password->setEnabled(false);
        password->setGeometry(QRect(270, 350, 201, 32));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        password->setPalette(palette2);
        password->setFont(font2);
        password->setStyleSheet(QLatin1String("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        salary = new QLineEdit(addEmployee);
        salary->setObjectName(QStringLiteral("salary"));
        salary->setEnabled(false);
        salary->setGeometry(QRect(550, 350, 201, 32));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        salary->setPalette(palette3);
        salary->setFont(font2);
        salary->setStyleSheet(QLatin1String("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));

        retranslateUi(addEmployee);
        QObject::connect(buttonBox, SIGNAL(accepted()), addEmployee, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addEmployee, SLOT(reject()));

        QMetaObject::connectSlotsByName(addEmployee);
    } // setupUi

    void retranslateUi(QDialog *addEmployee)
    {
        addEmployee->setWindowTitle(QApplication::translate("addEmployee", "Dialog", Q_NULLPTR));
        login->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#55aaff;\">Company Info</span></p></body></html>", Q_NULLPTR));
        id_14->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Password</span></p></body></html>", Q_NULLPTR));
        label_18->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#55aaff;\">Personal Info</span></p></body></html>", Q_NULLPTR));
        id_4->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Sexe</span></p></body></html>", Q_NULLPTR));
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
        id_2->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Prenom</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addEmployee: public Ui_addEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEMPLOYEE_H
