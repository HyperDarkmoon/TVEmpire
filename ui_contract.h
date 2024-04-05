/********************************************************************************
** Form generated from reading UI file 'contract.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRACT_H
#define UI_CONTRACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Contract
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QWidget *widget_2;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QWidget *widget_3;
    QLabel *label_5;
    QLineEdit *lib;
    QLabel *label_4;
    QLineEdit *mont;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QPushButton *add_btn;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QLabel *label_10;
    QLineEdit *desc;
    QComboBox *idE;
    QComboBox *idS;
    QDateEdit *dated;
    QDateEdit *datef;
    QLabel *sign;

    void setupUi(QDialog *Contract)
    {
        if (Contract->objectName().isEmpty())
            Contract->setObjectName(QStringLiteral("Contract"));
        Contract->resize(1276, 776);
        tableWidget = new QTableWidget(Contract);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(320, 180, 941, 411));
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
        label = new QLabel(Contract);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 60, 561, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMargin(200);
        widget_2 = new QWidget(Contract);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(-10, 0, 61, 781));
        widget_2->setStyleSheet(QStringLiteral("background-color:#fffff;"));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 320, 31, 31));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Downloads/plus (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_3->setCheckable(true);
        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(5, 11, 41, 751));
        label_6->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: white;\n"
"    border: 2px solid black; /* Add border */\n"
"    border-top-right-radius: 10px; /* Border radius only on the top-right */\n"
"    border-bottom-right-radius: 10px; /* Border radius only on the bottom-right */\n"
"    padding: 5px 10px;\n"
"    color: black;\n"
"}\n"
""));
        label_6->raise();
        pushButton_3->raise();
        widget_3 = new QWidget(Contract);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 10, 331, 761));
        widget_3->setStyleSheet(QLatin1String("/* Styles for QLineEdit */\n"
"QLineEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    transition: border-color 0.3s; /* Adding transition effect for smooth hover */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border-color: #E0E0E1; /* Change border color on hover */\n"
"}\n"
"\n"
"/* Styles for QTextEdit */\n"
"QTextEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 1.5px;\n"
"    transition: border-color 0.3s; /* Adding transition effect for smooth hover */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    border-color: #E0E0E1; /* Change border color on hover */\n"
"}\n"
"QPushButton {\n"
"    background-color: transparent; \n"
"    color: black;\n"
"    border: 3px solid#EBF1F4 ;\n"
"    border-radius: 10px;\n"
"    padding: 10px 20px;\n"
"    font-weight: bold;\n"
"    font-family: Calibri, sans-serif;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton:hover {\n"
"  \n"
"    border: 3px solid #141E46;\n"
"    color: black;\n"
"}"));
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 0, 291, 761));
        label_5->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: white;\n"
"    border: 2px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 5px 10px;\n"
"    color: black;\n"
"}\n"
""));
        lib = new QLineEdit(widget_3);
        lib->setObjectName(QStringLiteral("lib"));
        lib->setEnabled(true);
        lib->setGeometry(QRect(9, 90, 191, 30));
        lib->setStyleSheet(QLatin1String("/* Styles for QLineEdit */\n"
"QLineEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    transition: border-color 0.3s; /* Adding transition effect for smooth hover */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border-color: #E0E0E1; /* Change border color on hover */\n"
"}\n"
"\n"
"/* Styles for QTextEdit */\n"
"QTextEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 1.5px;\n"
"    transition: border-color 0.3s; /* Adding transition effect for smooth hover */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    border-color: #E0E0E1; /* Change border color on hover */\n"
"}\n"
""));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 70, 61, 16));
        label_4->setStyleSheet(QLatin1String("color: black\n"
""));
        mont = new QLineEdit(widget_3);
        mont->setObjectName(QStringLiteral("mont"));
        mont->setGeometry(QRect(9, 140, 191, 30));
        mont->setStyleSheet(QLatin1String("/* Styles for QLineEdit */\n"
"QLineEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    transition: border-color 0.3s; /* Adding transition effect for smooth hover */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border-color: #E0E0E1; /* Change border color on hover */\n"
"}\n"
"\n"
"/* Styles for QTextEdit */\n"
"QTextEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 1.5px;\n"
"    transition: border-color 0.3s; /* Adding transition effect for smooth hover */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    border-color: #E0E0E1; /* Change border color on hover */\n"
"}\n"
""));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 120, 48, 16));
        label_2->setStyleSheet(QLatin1String("color: black\n"
""));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 180, 141, 16));
        label_3->setStyleSheet(QStringLiteral("color: black"));
        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(true);
        label_7->setGeometry(QRect(10, 230, 50, 16));
        label_7->setBaseSize(QSize(2, 0));
        label_7->setStyleSheet(QStringLiteral("color: black"));
        add_btn = new QPushButton(widget_3);
        add_btn->setObjectName(QStringLiteral("add_btn"));
        add_btn->setGeometry(QRect(50, 700, 151, 34));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../Users/moham/Desktop/icons/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        add_btn->setIcon(icon1);
        add_btn->setIconSize(QSize(20, 20));
        pushButton_4 = new QPushButton(widget_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(255, 290, 31, 31));
        pushButton_4->setLayoutDirection(Qt::LeftToRight);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(30, 30));
        pushButton_4->setCheckable(true);
        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(250, 0, 41, 761));
        label_8->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: white;\n"
"    border: 2px solid black; /* Add border */\n"
"    border-top-right-radius: 10px; /* Border radius only on the top-right */\n"
"    border-bottom-right-radius: 10px; /* Border radius only on the bottom-right */\n"
"    padding: 5px 10px;\n"
"    color: black;\n"
"}\n"
""));
        label_10 = new QLabel(widget_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 280, 81, 16));
        desc = new QLineEdit(widget_3);
        desc->setObjectName(QStringLiteral("desc"));
        desc->setGeometry(QRect(10, 300, 231, 191));
        desc->setStyleSheet(QStringLiteral(""));
        idE = new QComboBox(widget_3);
        idE->setObjectName(QStringLiteral("idE"));
        idE->setGeometry(QRect(140, 30, 81, 25));
        idE->setStyleSheet(QLatin1String("/* Styles for QComboBox */\n"
"QComboBox {\n"
"    border: 2px solid #141E46; /* Border color */\n"
"    border-radius: 10px; /* Border radius */\n"
"    padding: 5px; /* Padding */\n"
"    min-width: 50px; /* Minimum width */\n"
"    selection-background-color: #EBF1F4; /* Background color when item is selected */\n"
"    background-color: white; /* Default background color */\n"
"    color: black; /* Text color */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border-color: #EBF1F4; /* Border color on hover */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding; /* Positioning origin of the drop-down arrow */\n"
"    subcontrol-position: right; /* Position of the drop-down arrow */\n"
"    width: 20px; /* Width of the drop-down arrow */\n"
"    border-left: 2px solid #141E46; /* Left border color of the drop-down arrow */\n"
"}\n"
"\n"
"\n"
"/* Styles for QComboBox items */\n"
"QComboBox::item {\n"
"    padding: 5px; /* Padding for each item */\n"
"}\n"
"\n"
"QComboBox::item:selected {\n"
"   "
                        " background-color: #EBF1F4; /* Background color for selected item */\n"
"    color: black; /* Text color for selected item */\n"
"}\n"
""));
        idS = new QComboBox(widget_3);
        idS->setObjectName(QStringLiteral("idS"));
        idS->setGeometry(QRect(20, 31, 81, 25));
        idS->setStyleSheet(QLatin1String("/* Styles for QComboBox */\n"
"QComboBox {\n"
"    border: 2px solid #141E46; /* Border color */\n"
"    border-radius: 10px; /* Border radius */\n"
"    padding: 5px; /* Padding */\n"
"    min-width: 50px; /* Minimum width */\n"
"    selection-background-color: #EBF1F4; /* Background color when item is selected */\n"
"    background-color: white; /* Default background color */\n"
"    color: black; /* Text color */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border-color: #EBF1F4; /* Border color on hover */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding; /* Positioning origin of the drop-down arrow */\n"
"    subcontrol-position: right; /* Position of the drop-down arrow */\n"
"    width: 20px; /* Width of the drop-down arrow */\n"
"    border-left: 2px solid #141E46; /* Left border color of the drop-down arrow */\n"
"}\n"
"\n"
"\n"
"/* Styles for QComboBox items */\n"
"QComboBox::item {\n"
"    padding: 5px; /* Padding for each item */\n"
"}\n"
"\n"
"QComboBox::item:selected {\n"
"   "
                        " background-color: #EBF1F4; /* Background color for selected item */\n"
"    color: black; /* Text color for selected item */\n"
"}\n"
""));
        dated = new QDateEdit(widget_3);
        dated->setObjectName(QStringLiteral("dated"));
        dated->setGeometry(QRect(20, 200, 110, 22));
        datef = new QDateEdit(widget_3);
        datef->setObjectName(QStringLiteral("datef"));
        datef->setGeometry(QRect(20, 250, 110, 22));
        sign = new QLabel(widget_3);
        sign->setObjectName(QStringLiteral("sign"));
        sign->setGeometry(QRect(10, 520, 231, 131));
        sign->setAutoFillBackground(false);
        sign->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: white;\n"
"    border: 2px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 5px 10px;\n"
"    color: black;\n"
"}\n"
""));
        label_5->raise();
        lib->raise();
        add_btn->raise();
        mont->raise();
        label_3->raise();
        label_2->raise();
        label_4->raise();
        label_7->raise();
        label_8->raise();
        pushButton_4->raise();
        label_10->raise();
        desc->raise();
        idE->raise();
        idS->raise();
        dated->raise();
        datef->raise();
        sign->raise();

        retranslateUi(Contract);
        QObject::connect(pushButton_3, SIGNAL(toggled(bool)), widget_3, SLOT(setVisible(bool)));
        QObject::connect(pushButton_3, SIGNAL(toggled(bool)), widget_2, SLOT(setHidden(bool)));
        QObject::connect(pushButton_4, SIGNAL(toggled(bool)), widget_2, SLOT(setVisible(bool)));
        QObject::connect(pushButton_4, SIGNAL(toggled(bool)), widget_3, SLOT(setHidden(bool)));

        QMetaObject::connectSlotsByName(Contract);
    } // setupUi

    void retranslateUi(QDialog *Contract)
    {
        Contract->setWindowTitle(QApplication::translate("Contract", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Contract", "contrat ", Q_NULLPTR));
        pushButton_3->setText(QString());
        label_6->setText(QString());
        label_5->setText(QString());
        label_4->setText(QApplication::translate("Contract", "libelle ", Q_NULLPTR));
        label_2->setText(QApplication::translate("Contract", "montant ", Q_NULLPTR));
        label_3->setText(QApplication::translate("Contract", "date debut ", Q_NULLPTR));
        label_7->setText(QApplication::translate("Contract", "date fin ", Q_NULLPTR));
        add_btn->setText(QApplication::translate("Contract", "Add", Q_NULLPTR));
        pushButton_4->setText(QString());
        label_8->setText(QString());
        label_10->setText(QApplication::translate("Contract", "description", Q_NULLPTR));
        sign->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Contract: public Ui_Contract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRACT_H
