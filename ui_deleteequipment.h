/********************************************************************************
** Form generated from reading UI file 'deleteequipment.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEEQUIPMENT_H
#define UI_DELETEEQUIPMENT_H

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

class Ui_deleteEquipment
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *deleteE;

    void setupUi(QDialog *deleteEquipment)
    {
        if (deleteEquipment->objectName().isEmpty())
            deleteEquipment->setObjectName(QStringLiteral("deleteEquipment"));
        deleteEquipment->resize(582, 418);
        buttonBox = new QDialogButtonBox(deleteEquipment);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(380, 370, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(deleteEquipment);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 170, 131, 41));
        deleteE = new QLineEdit(deleteEquipment);
        deleteE->setObjectName(QStringLiteral("deleteE"));
        deleteE->setGeometry(QRect(170, 180, 141, 21));

        retranslateUi(deleteEquipment);
        QObject::connect(buttonBox, SIGNAL(accepted()), deleteEquipment, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), deleteEquipment, SLOT(reject()));

        QMetaObject::connectSlotsByName(deleteEquipment);
    } // setupUi

    void retranslateUi(QDialog *deleteEquipment)
    {
        deleteEquipment->setWindowTitle(QApplication::translate("deleteEquipment", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("deleteEquipment", "<html><head/><body><p><span style=\" font-size:11pt;\">ID de l'equipment :</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class deleteEquipment: public Ui_deleteEquipment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEEQUIPMENT_H
