/********************************************************************************
** Form generated from reading UI file 'addemission1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEMISSION1_H
#define UI_ADDEMISSION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addEmission
{
public:
    QComboBox *gender;
    QLabel *id_2;
    QLineEdit *name;
    QPushButton *pushButton_5;
    QDateEdit *dob;
    QLabel *id;
    QLineEdit *genre;
    QLabel *id_4;
    QPushButton *pushButton_6;
    QLabel *label_18;
    QLabel *id_3;

    void setupUi(QWidget *addEmission)
    {
        if (addEmission->objectName().isEmpty())
            addEmission->setObjectName(QStringLiteral("addEmission"));
        addEmission->resize(789, 333);
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
        addEmission->setPalette(palette);
        gender = new QComboBox(addEmission);
        gender->setObjectName(QStringLiteral("gender"));
        gender->setGeometry(QRect(10, 170, 240, 32));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        gender->setFont(font);
        gender->setStyleSheet(QLatin1String("#empGender\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_2 = new QLabel(addEmission);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(270, 70, 141, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        id_2->setFont(font1);
        name = new QLineEdit(addEmission);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(10, 95, 240, 32));
        name->setFont(font);
        name->setStyleSheet(QLatin1String("#empName\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        pushButton_5 = new QPushButton(addEmission);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(570, 280, 150, 32));
        QFont font2;
        font2.setPointSize(10);
        pushButton_5->setFont(font2);
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
        dob = new QDateEdit(addEmission);
        dob->setObjectName(QStringLiteral("dob"));
        dob->setGeometry(QRect(530, 95, 240, 32));
        dob->setFont(font);
        dob->setStyleSheet(QLatin1String("#empDOB\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        dob->setCurrentSection(QDateTimeEdit::YearSection);
        id = new QLabel(addEmission);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(10, 70, 141, 21));
        id->setFont(font1);
        genre = new QLineEdit(addEmission);
        genre->setObjectName(QStringLiteral("genre"));
        genre->setGeometry(QRect(270, 95, 240, 32));
        genre->setFont(font);
        genre->setStyleSheet(QLatin1String("#empFather\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_4 = new QLabel(addEmission);
        id_4->setObjectName(QStringLiteral("id_4"));
        id_4->setGeometry(QRect(10, 145, 141, 21));
        id_4->setFont(font1);
        pushButton_6 = new QPushButton(addEmission);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(390, 280, 150, 32));
        pushButton_6->setFont(font2);
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
        label_18 = new QLabel(addEmission);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 25, 241, 31));
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
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_18->setFont(font3);
        id_3 = new QLabel(addEmission);
        id_3->setObjectName(QStringLiteral("id_3"));
        id_3->setGeometry(QRect(530, 70, 141, 21));
        id_3->setFont(font1);

        retranslateUi(addEmission);

        QMetaObject::connectSlotsByName(addEmission);
    } // setupUi

    void retranslateUi(QWidget *addEmission)
    {
        addEmission->setWindowTitle(QApplication::translate("addEmission", "Form", Q_NULLPTR));
        gender->clear();
        gender->insertItems(0, QStringList()
         << QApplication::translate("addEmission", "1", Q_NULLPTR)
        );
        id_2->setText(QApplication::translate("addEmission", "<html><head/><body><p>Genre</p></body></html>", Q_NULLPTR));
        name->setText(QString());
        pushButton_5->setText(QApplication::translate("addEmission", "Submit", Q_NULLPTR));
        id->setText(QApplication::translate("addEmission", "<html><head/><body><p><span style=\" color:#ffffff;\">Nom</span></p><p><span style=\" color:#ffffff;\"><br/></span></p></body></html>", Q_NULLPTR));
        genre->setText(QString());
        id_4->setText(QApplication::translate("addEmission", "<html><head/><body><p>Scene</p></body></html>", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("addEmission", "Clear", Q_NULLPTR));
        label_18->setText(QApplication::translate("addEmission", "<html><head/><body><p>Detailes d'emmision</p></body></html>", Q_NULLPTR));
        id_3->setText(QApplication::translate("addEmission", "<html><head/><body><p>Date</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addEmission: public Ui_addEmission {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEMISSION1_H
