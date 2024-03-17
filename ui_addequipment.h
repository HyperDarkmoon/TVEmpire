/********************************************************************************
** Form generated from reading UI file 'addequipment.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEQUIPMENT_H
#define UI_ADDEQUIPMENT_H

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

class Ui_addEquipment
{
public:
    QLineEdit *labelE;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;
    QLineEdit *categoryE;
    QLineEdit *stateE;
    QLabel *stockE;
    QLineEdit *stateE_2;

    void setupUi(QDialog *addEquipment)
    {
        if (addEquipment->objectName().isEmpty())
            addEquipment->setObjectName(QStringLiteral("addEquipment"));
        addEquipment->resize(1012, 538);
        addEquipment->setStyleSheet(QStringLiteral("background-color: rgb(47, 59, 82);"));
        labelE = new QLineEdit(addEquipment);
        labelE->setObjectName(QStringLiteral("labelE"));
        labelE->setGeometry(QRect(220, 121, 113, 31));
        labelE->setStyleSheet(QLatin1String("\n"
"\n"
"QLineEdit {\n"
"\n"
"   background-color: rgb(255, 255, 255);\n"
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
        label = new QLabel(addEquipment);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 130, 51, 21));
        label->setStyleSheet(QStringLiteral("border-top-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(addEquipment);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 200, 111, 16));
        label_3 = new QLabel(addEquipment);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 270, 111, 16));
        buttonBox = new QDialogButtonBox(addEquipment);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(390, 460, 192, 28));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        categoryE = new QLineEdit(addEquipment);
        categoryE->setObjectName(QStringLiteral("categoryE"));
        categoryE->setGeometry(QRect(220, 181, 113, 31));
        categoryE->setStyleSheet(QLatin1String("\n"
"QLineEdit {\n"
"\n"
"   background-color: rgb(255, 255, 255);\n"
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
        stateE = new QLineEdit(addEquipment);
        stateE->setObjectName(QStringLiteral("stateE"));
        stateE->setGeometry(QRect(220, 251, 113, 31));
        stateE->setStyleSheet(QLatin1String("\n"
"QLineEdit {\n"
"\n"
"   background-color: rgb(255, 255, 255);\n"
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
        stockE = new QLabel(addEquipment);
        stockE->setObjectName(QStringLiteral("stockE"));
        stockE->setGeometry(QRect(70, 330, 111, 21));
        stateE_2 = new QLineEdit(addEquipment);
        stateE_2->setObjectName(QStringLiteral("stateE_2"));
        stateE_2->setGeometry(QRect(220, 321, 113, 31));
        stateE_2->setStyleSheet(QLatin1String("\n"
"QLineEdit {\n"
"\n"
"   background-color: rgb(255, 255, 255);\n"
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

        retranslateUi(addEquipment);

        QMetaObject::connectSlotsByName(addEquipment);
    } // setupUi

    void retranslateUi(QDialog *addEquipment)
    {
        addEquipment->setWindowTitle(QApplication::translate("addEquipment", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("addEquipment", "<html><head/><body><p><span style=\" color:#ffffff;\">LIBELLE</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("addEquipment", "<html><head/><body><p><span style=\" color:#ffffff;\">CATEGORIE</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("addEquipment", "<html><head/><body><p><span style=\" color:#ffffff;\">ETAT</span></p></body></html>", Q_NULLPTR));
        stockE->setText(QApplication::translate("addEquipment", "<html><head/><body><p><span style=\" color:#ffffff;\">STOCK</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addEquipment: public Ui_addEquipment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEQUIPMENT_H
