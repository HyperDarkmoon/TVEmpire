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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Affectation
{
public:
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Affectation)
    {
        if (Affectation->objectName().isEmpty())
            Affectation->setObjectName(QStringLiteral("Affectation"));
        Affectation->resize(1137, 662);
        listWidget = new QListWidget(Affectation);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(60, 110, 461, 481));
        listWidget_2 = new QListWidget(Affectation);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(580, 110, 511, 481));
        label = new QLabel(Affectation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 70, 61, 31));
        label_2 = new QLabel(Affectation);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(800, 80, 71, 21));
        pushButton = new QPushButton(Affectation);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(510, 610, 93, 28));

        retranslateUi(Affectation);

        QMetaObject::connectSlotsByName(Affectation);
    } // setupUi

    void retranslateUi(QDialog *Affectation)
    {
        Affectation->setWindowTitle(QApplication::translate("Affectation", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Affectation", "Employ\303\251es", Q_NULLPTR));
        label_2->setText(QApplication::translate("Affectation", "Equipments", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Affectation", "Affecter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Affectation: public Ui_Affectation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFECTATION_H
