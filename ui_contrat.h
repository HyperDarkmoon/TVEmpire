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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_contrat
{
public:
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QDialog *contrat)
    {
        if (contrat->objectName().isEmpty())
            contrat->setObjectName(QStringLiteral("contrat"));
        contrat->resize(786, 422);
        label = new QLabel(contrat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 10, 431, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMargin(200);
        tableWidget = new QTableWidget(contrat);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(90, 101, 601, 301));
        tableWidget->setStyleSheet(QLatin1String("QTableWidget {\n"
"    alternate-background-color: #f0f0f0; /* Alternate row background color */\n"
"    background-color: white; /* Default background color of the table */\n"
"    border: 1px solid #2c3e50; /* Table border color */\n"
"    font-family: \"Arial\"; /* Set the font family */\n"
"    font-size: 12px; /* Set the font size */\n"
"   border-radius: 10px;\n"
"}\n"
"\n"
"/* Apply styles to the header of the QTableWidget */\n"
"QHeaderView::section {\n"
"    background-color: #15406e; /* Darker blue header background color */\n"
"    color: white; /* Header text color */\n"
"    padding: 0px; /* Header padding */\n"
"    border:2px solid #2c3e50; /* Header border color */\n"
" border-radius: px\n"
"\n"
"}\n"
"\n"
"/* Apply styles to the items within the QTableWidget */\n"
"QTableWidget QTableWidget::item {\n"
"    padding: 5px; /* Item padding */\n"
"    border: 1px solid #2c3e50; /* Item border color */\n"
"\n"
"}\n"
"\n"
"/* Apply styles to the even rows within the QTableWidget */\n"
"QTableWidget::"
                        "item:alternate {\n"
"    background-color: #2c3e50; /* Darker blue even row background color */\n"
"}\n"
"\n"
"/* Apply styles when an item is selected in the QTableWidget */\n"
"QTableWidget QTableWidget::item:selected {\n"
"    background-color: #3498db; /* Selected item background color (a slightly lighter blue) */\n"
"    color: black; /* Selected item text color */\n"
"}"));

        retranslateUi(contrat);

        QMetaObject::connectSlotsByName(contrat);
    } // setupUi

    void retranslateUi(QDialog *contrat)
    {
        contrat->setWindowTitle(QApplication::translate("contrat", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("contrat", "contrat ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("contrat", "ID sponosor ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("contrat", "ID emissions", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("contrat", "libellle ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("contrat", "dur\303\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("contrat", "description ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("contrat", "exportation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class contrat: public Ui_contrat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRAT_H
