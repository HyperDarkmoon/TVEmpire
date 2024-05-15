/********************************************************************************
** Form generated from reading UI file 'showequipment.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWEQUIPMENT_H
#define UI_SHOWEQUIPMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_showEquipment
{
public:

    void setupUi(QDialog *showEquipment)
    {
        if (showEquipment->objectName().isEmpty())
            showEquipment->setObjectName(QStringLiteral("showEquipment"));
        showEquipment->resize(766, 514);

        retranslateUi(showEquipment);

        QMetaObject::connectSlotsByName(showEquipment);
    } // setupUi

    void retranslateUi(QDialog *showEquipment)
    {
        showEquipment->setWindowTitle(QApplication::translate("showEquipment", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class showEquipment: public Ui_showEquipment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWEQUIPMENT_H
