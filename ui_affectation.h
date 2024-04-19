/********************************************************************************
** Form generated from reading UI file 'affectation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFFECTATION_H
#define UI_AFFECTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Affectation
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;
    QLineEdit *search_input;
    QLineEdit *search_input_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Affectation)
    {
        if (Affectation->objectName().isEmpty())
            Affectation->setObjectName(QStringLiteral("Affectation"));
        Affectation->resize(1137, 662);
        buttonBox = new QDialogButtonBox(Affectation);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(470, 610, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableWidget = new QTableWidget(Affectation);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(60, 110, 461, 481));
        tableWidget_2 = new QTableWidget(Affectation);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(580, 110, 511, 481));
        search_input = new QLineEdit(Affectation);
        search_input->setObjectName(QStringLiteral("search_input"));
        search_input->setGeometry(QRect(170, 70, 242, 31));
        search_input->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #FFFFFF; /* Background color */\n"
"    border: 2px solid #CCCCCC; /* Border color */\n"
"    border-radius: 5px; /* Border radius */\n"
"    padding: 7px 10px; /* Padding */\n"
"    font-size: 14px; /* Font size */\n"
"    color: #333333; /* Text color */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border-color: #999999; /* Border color on hover */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #0078D4; /* Border color when focused */\n"
"}\n"
""));
        search_input_2 = new QLineEdit(Affectation);
        search_input_2->setObjectName(QStringLiteral("search_input_2"));
        search_input_2->setGeometry(QRect(710, 70, 242, 31));
        search_input_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #FFFFFF; /* Background color */\n"
"    border: 2px solid #CCCCCC; /* Border color */\n"
"    border-radius: 5px; /* Border radius */\n"
"    padding: 7px 10px; /* Padding */\n"
"    font-size: 14px; /* Font size */\n"
"    color: #333333; /* Text color */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border-color: #999999; /* Border color on hover */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #0078D4; /* Border color when focused */\n"
"}\n"
""));
        label = new QLabel(Affectation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 30, 61, 31));
        label_2 = new QLabel(Affectation);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(790, 40, 71, 21));

        retranslateUi(Affectation);
        QObject::connect(buttonBox, SIGNAL(accepted()), Affectation, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Affectation, SLOT(reject()));

        QMetaObject::connectSlotsByName(Affectation);
    } // setupUi

    void retranslateUi(QDialog *Affectation)
    {
        Affectation->setWindowTitle(QApplication::translate("Affectation", "Dialog", Q_NULLPTR));
        search_input->setPlaceholderText(QApplication::translate("Affectation", "Search...", Q_NULLPTR));
        search_input_2->setPlaceholderText(QApplication::translate("Affectation", "Search...", Q_NULLPTR));
        label->setText(QApplication::translate("Affectation", "Employ\303\251es", Q_NULLPTR));
        label_2->setText(QApplication::translate("Affectation", "Equipments", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Affectation: public Ui_Affectation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFECTATION_H
