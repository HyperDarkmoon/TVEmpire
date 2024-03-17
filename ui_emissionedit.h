/********************************************************************************
** Form generated from reading UI file 'emissionedit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMISSIONEDIT_H
#define UI_EMISSIONEDIT_H

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

QT_BEGIN_NAMESPACE

class Ui_EmissionEdit
{
public:
    QLineEdit *name;
    QPushButton *pushButton_6;
    QLabel *id_2;
    QLineEdit *genre;
    QComboBox *gender;
    QLabel *id_4;
    QLabel *id_3;
    QPushButton *pushButton_5;
    QDateEdit *dob;
    QLabel *id;
    QLabel *label_18;

    void setupUi(QDialog *EmissionEdit)
    {
        if (EmissionEdit->objectName().isEmpty())
            EmissionEdit->setObjectName(QStringLiteral("EmissionEdit"));
        EmissionEdit->resize(861, 376);
        name = new QLineEdit(EmissionEdit);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(30, 80, 240, 32));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        name->setFont(font);
        name->setStyleSheet(QLatin1String("#empName\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        pushButton_6 = new QPushButton(EmissionEdit);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(410, 265, 150, 32));
        QFont font1;
        font1.setPointSize(10);
        pushButton_6->setFont(font1);
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
        id_2 = new QLabel(EmissionEdit);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(290, 55, 141, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        id_2->setFont(font2);
        genre = new QLineEdit(EmissionEdit);
        genre->setObjectName(QStringLiteral("genre"));
        genre->setGeometry(QRect(290, 80, 240, 32));
        genre->setFont(font);
        genre->setStyleSheet(QLatin1String("#empFather\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        gender = new QComboBox(EmissionEdit);
        gender->setObjectName(QStringLiteral("gender"));
        gender->setGeometry(QRect(30, 155, 240, 32));
        gender->setFont(font);
        gender->setStyleSheet(QLatin1String("#empGender\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_4 = new QLabel(EmissionEdit);
        id_4->setObjectName(QStringLiteral("id_4"));
        id_4->setGeometry(QRect(30, 130, 141, 21));
        id_4->setFont(font2);
        id_3 = new QLabel(EmissionEdit);
        id_3->setObjectName(QStringLiteral("id_3"));
        id_3->setGeometry(QRect(550, 55, 141, 21));
        id_3->setFont(font2);
        pushButton_5 = new QPushButton(EmissionEdit);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(590, 265, 150, 32));
        pushButton_5->setFont(font1);
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
        dob = new QDateEdit(EmissionEdit);
        dob->setObjectName(QStringLiteral("dob"));
        dob->setGeometry(QRect(550, 80, 240, 32));
        dob->setFont(font);
        dob->setStyleSheet(QLatin1String("#empDOB\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        dob->setCurrentSection(QDateTimeEdit::YearSection);
        id = new QLabel(EmissionEdit);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(30, 55, 141, 21));
        id->setFont(font2);
        label_18 = new QLabel(EmissionEdit);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 10, 241, 31));
        QPalette palette;
        QBrush brush(QColor(224, 224, 225, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Active, QPalette::Link, brush);
        QBrush brush1(QColor(224, 224, 225, 128));
        brush1.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush);
        QBrush brush2(QColor(224, 224, 225, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(23, 29, 41, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        QBrush brush4(QColor(0, 120, 215, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush);
        QBrush brush5(QColor(224, 224, 225, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        label_18->setPalette(palette);
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_18->setFont(font3);

        retranslateUi(EmissionEdit);

        QMetaObject::connectSlotsByName(EmissionEdit);
    } // setupUi

    void retranslateUi(QDialog *EmissionEdit)
    {
        EmissionEdit->setWindowTitle(QApplication::translate("EmissionEdit", "Dialog", Q_NULLPTR));
        name->setText(QString());
        pushButton_6->setText(QApplication::translate("EmissionEdit", "Clear", Q_NULLPTR));
        id_2->setText(QApplication::translate("EmissionEdit", "<html><head/><body><p>Genre</p></body></html>", Q_NULLPTR));
        genre->setText(QString());
        gender->clear();
        gender->insertItems(0, QStringList()
         << QApplication::translate("EmissionEdit", "1", Q_NULLPTR)
        );
        id_4->setText(QApplication::translate("EmissionEdit", "<html><head/><body><p>Scene</p></body></html>", Q_NULLPTR));
        id_3->setText(QApplication::translate("EmissionEdit", "<html><head/><body><p>Date</p></body></html>", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("EmissionEdit", "Submit", Q_NULLPTR));
        id->setText(QApplication::translate("EmissionEdit", "<html><head/><body><p><span style=\" color:#ffffff;\">Nom</span></p><p><span style=\" color:#ffffff;\"><br/></span></p></body></html>", Q_NULLPTR));
        label_18->setText(QApplication::translate("EmissionEdit", "<html><head/><body><p>Detailes d'emmision</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EmissionEdit: public Ui_EmissionEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMISSIONEDIT_H
