/********************************************************************************
** Form generated from reading UI file 'geminidialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEMINIDIALOG_H
#define UI_GEMINIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeminiDialog
{
public:
    QLabel *label;
    QLabel *inputLabel;

    void setupUi(QWidget *GeminiDialog)
    {
        if (GeminiDialog->objectName().isEmpty())
            GeminiDialog->setObjectName(QStringLiteral("GeminiDialog"));
        GeminiDialog->resize(1249, 654);
        label = new QLabel(GeminiDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 110, 1061, 521));
        label->setStyleSheet(QLatin1String("background:white;\n"
"color : black;\n"
"border : 1px solid black;\n"
"border-radius: 95%"));
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);
        inputLabel = new QLabel(GeminiDialog);
        inputLabel->setObjectName(QStringLiteral("inputLabel"));
        inputLabel->setGeometry(QRect(140, 10, 1051, 91));
        inputLabel->setStyleSheet(QLatin1String("background:white;\n"
"color : black;\n"
"border : 1px solid black;\n"
"border-radius: 95%;"));
        inputLabel->setWordWrap(true);

        retranslateUi(GeminiDialog);

        QMetaObject::connectSlotsByName(GeminiDialog);
    } // setupUi

    void retranslateUi(QWidget *GeminiDialog)
    {
        GeminiDialog->setWindowTitle(QApplication::translate("GeminiDialog", "Form", Q_NULLPTR));
        label->setText(QString());
        inputLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GeminiDialog: public Ui_GeminiDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEMINIDIALOG_H
