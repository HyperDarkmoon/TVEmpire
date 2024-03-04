/********************************************************************************
** Form generated from reading UI file 'contrat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRAT_H
#define UI_CONTRAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_contrat
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *contrat)
    {
        if (contrat->objectName().isEmpty())
            contrat->setObjectName(QStringLiteral("contrat"));
        contrat->resize(400, 300);
        buttonBox = new QDialogButtonBox(contrat);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(contrat);
        QObject::connect(buttonBox, SIGNAL(accepted()), contrat, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), contrat, SLOT(reject()));

        QMetaObject::connectSlotsByName(contrat);
    } // setupUi

    void retranslateUi(QDialog *contrat)
    {
        contrat->setWindowTitle(QApplication::translate("contrat", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class contrat: public Ui_contrat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRAT_H
