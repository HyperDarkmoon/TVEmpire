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
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_7;
    QPushButton *add_btn;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QLabel *label_10;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_6;
    QComboBox *idE;
    QComboBox *idS;
    QLabel *label_9;
    QLabel *label_11;
    QPushButton *pushButton;

    void setupUi(QDialog *Contract)
    {
        if (Contract->objectName().isEmpty())
            Contract->setObjectName(QStringLiteral("Contract"));
        Contract->resize(1276, 776);
        tableWidget = new QTableWidget(Contract);
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
        tableWidget->setGeometry(QRect(590, 230, 601, 321));
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
        label->setGeometry(QRect(400, 70, 431, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMargin(200);
        widget_2 = new QWidget(Contract);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 10, 61, 721));
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
        label_6->setGeometry(QRect(5, 31, 41, 651));
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
        widget_3->setGeometry(QRect(120, 40, 331, 691));
        widget_3->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTextEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 1.5px;\n"
"}\n"
""));
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 0, 291, 651));
        label_5->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: white;\n"
"    border: 2px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 5px 10px;\n"
"    color: black;\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(widget_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setGeometry(QRect(9, 42, 191, 30));
        lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTextEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 1.5px;\n"
"}\n"
""));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 61, 16));
        label_4->setStyleSheet(QLatin1String("color: black\n"
""));
        lineEdit_3 = new QLineEdit(widget_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(9, 111, 191, 30));
        lineEdit_3->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTextEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 1.5px;\n"
"}\n"
""));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 80, 48, 16));
        label_2->setStyleSheet(QLatin1String("color: black\n"
""));
        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 180, 191, 30));
        lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTextEdit {\n"
"    border: 2px solid #141E46;\n"
"    border-radius: 10px;\n"
"    padding: 1.5px;\n"
"}\n"
""));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 150, 141, 16));
        label_3->setStyleSheet(QStringLiteral("color: black"));
        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(true);
        label_7->setGeometry(QRect(10, 220, 50, 16));
        label_7->setBaseSize(QSize(2, 0));
        label_7->setStyleSheet(QStringLiteral("color: black"));
        add_btn = new QPushButton(widget_3);
        add_btn->setObjectName(QStringLiteral("add_btn"));
        add_btn->setGeometry(QRect(60, 600, 151, 34));
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
        label_8->setGeometry(QRect(250, 0, 41, 651));
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
        label_10->setGeometry(QRect(10, 290, 81, 16));
        lineEdit_4 = new QLineEdit(widget_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(10, 240, 191, 31));
        lineEdit_6 = new QLineEdit(widget_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(10, 320, 231, 191));
        idE = new QComboBox(widget_3);
        idE->setObjectName(QStringLiteral("idE"));
        idE->setGeometry(QRect(130, 520, 62, 22));
        idS = new QComboBox(widget_3);
        idS->setObjectName(QStringLiteral("idS"));
        idS->setGeometry(QRect(130, 550, 62, 22));
        label_9 = new QLabel(widget_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 530, 47, 14));
        label_11 = new QLabel(widget_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 560, 47, 14));
        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 580, 75, 23));
        label_5->raise();
        lineEdit_2->raise();
        add_btn->raise();
        lineEdit->raise();
        lineEdit_3->raise();
        label_3->raise();
        label_2->raise();
        label_4->raise();
        label_7->raise();
        label_8->raise();
        pushButton_4->raise();
        label_10->raise();
        lineEdit_4->raise();
        lineEdit_6->raise();
        idE->raise();
        idS->raise();
        label_9->raise();
        label_11->raise();
        pushButton->raise();

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
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Contract", "ID sponosor ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Contract", "ID emissions", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Contract", "libellle ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Contract", "dur\303\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Contract", "description ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Contract", "exportation", Q_NULLPTR));
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
        label_9->setText(QApplication::translate("Contract", "IdE", Q_NULLPTR));
        label_11->setText(QApplication::translate("Contract", "IdS", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Contract", "signature", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Contract: public Ui_Contract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRACT_H
