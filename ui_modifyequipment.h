/********************************************************************************
** Form generated from reading UI file 'modifyequipment.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYEQUIPMENT_H
#define UI_MODIFYEQUIPMENT_H

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

class Ui_modifyEquipment
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *labelME;
    QLineEdit *categoryME;
    QLineEdit *stateME;

    void setupUi(QDialog *modifyEquipment)
    {
        if (modifyEquipment->objectName().isEmpty())
            modifyEquipment->setObjectName(QStringLiteral("modifyEquipment"));
        modifyEquipment->resize(752, 550);
        buttonBox = new QDialogButtonBox(modifyEquipment);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(280, 490, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(modifyEquipment);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 101, 41));
        label_2 = new QLabel(modifyEquipment);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 140, 71, 31));
        label_3 = new QLabel(modifyEquipment);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 200, 71, 31));
        label_4 = new QLabel(modifyEquipment);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 260, 71, 31));
        labelME = new QLineEdit(modifyEquipment);
        labelME->setObjectName(QStringLiteral("labelME"));
        labelME->setGeometry(QRect(210, 140, 113, 20));
        categoryME = new QLineEdit(modifyEquipment);
        categoryME->setObjectName(QStringLiteral("categoryME"));
        categoryME->setGeometry(QRect(210, 200, 113, 20));
        stateME = new QLineEdit(modifyEquipment);
        stateME->setObjectName(QStringLiteral("stateME"));
        stateME->setGeometry(QRect(210, 270, 113, 20));

        retranslateUi(modifyEquipment);
        QObject::connect(buttonBox, SIGNAL(accepted()), modifyEquipment, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), modifyEquipment, SLOT(reject()));

        QMetaObject::connectSlotsByName(modifyEquipment);
    } // setupUi

    void retranslateUi(QDialog *modifyEquipment)
    {
        modifyEquipment->setWindowTitle(QApplication::translate("modifyEquipment", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("modifyEquipment", "<html><head/><body><p><span style=\" font-size:11pt;\">Modifier le :</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("modifyEquipment", "<html><head/><body><p><span style=\" font-size:11pt;\">Libelle</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("modifyEquipment", "<html><head/><body><p><span style=\" font-size:11pt;\">Categorie</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("modifyEquipment", "<html><head/><body><p><span style=\" font-size:11pt;\">Etat</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class modifyEquipment: public Ui_modifyEquipment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYEQUIPMENT_H
