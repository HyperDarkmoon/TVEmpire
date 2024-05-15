/********************************************************************************
** Form generated from reading UI file 'scenes.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENES_H
#define UI_SCENES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Scenes
{
public:

    void setupUi(QWidget *Scenes)
    {
        if (Scenes->objectName().isEmpty())
            Scenes->setObjectName(QStringLiteral("Scenes"));
        Scenes->resize(400, 300);

        retranslateUi(Scenes);

        QMetaObject::connectSlotsByName(Scenes);
    } // setupUi

    void retranslateUi(QWidget *Scenes)
    {
        Scenes->setWindowTitle(QApplication::translate("Scenes", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Scenes: public Ui_Scenes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENES_H
