/********************************************************************************
** Form generated from reading UI file 'equipment.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIPMENT_H
#define UI_EQUIPMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equipment
{
public:

    void setupUi(QWidget *Equipment)
    {
        if (Equipment->objectName().isEmpty())
            Equipment->setObjectName(QStringLiteral("Equipment"));
        Equipment->resize(400, 300);

        retranslateUi(Equipment);

        QMetaObject::connectSlotsByName(Equipment);
    } // setupUi

    void retranslateUi(QWidget *Equipment)
    {
        Equipment->setWindowTitle(QApplication::translate("Equipment", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Equipment: public Ui_Equipment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPMENT_H
