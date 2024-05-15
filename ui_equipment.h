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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equipment
{
public:
    QWidget *equipement;
    QLabel *Label;
    QLabel *Labelequipment;
    QWidget *widget_2;
    QLabel *label_5;
    QLineEdit *labelE;
    QLabel *label_4;
    QLineEdit *categoryE;
    QLabel *label_1;
    QLineEdit *stateE;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Ajout_2;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QLineEdit *stockE;
    QLabel *imageLabel;
    QPushButton *imageSelector;
    QWidget *widget_3;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QPushButton *google;
    QPushButton *amazon;
    QPushButton *visual_impact;
    QLabel *label;
    QWidget *widget_4;
    QPushButton *pdfButton_5;
    QPushButton *pdfButton_4;
    QLineEdit *search_input;
    QLabel *label_15;
    QPushButton *Affecter;
    QWidget *result_widget;
    QTableWidget *tableWidget_2;
    QWidget *webWidget;
    QLabel *label_8;

    void setupUi(QWidget *Equipment)
    {
        if (Equipment->objectName().isEmpty())
            Equipment->setObjectName(QStringLiteral("Equipment"));
        Equipment->resize(1479, 745);
        Equipment->setAutoFillBackground(true);
        equipement = new QWidget(Equipment);
        equipement->setObjectName(QStringLiteral("equipement"));
        equipement->setGeometry(QRect(-30, 0, 1471, 771));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(235, 241, 244, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(70, 88, 123, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(58, 73, 102, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(23, 29, 41, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(31, 39, 54, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush9(QColor(47, 59, 82, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        equipement->setPalette(palette);
        equipement->setAutoFillBackground(false);
        equipement->setStyleSheet(QLatin1String("#equipement {\n"
"    background-color: #EBF1F4 ; /* Background color for the Sponsor widget */\n"
"}\n"
""));
        Label = new QLabel(equipement);
        Label->setObjectName(QStringLiteral("Label"));
        Label->setGeometry(QRect(340, 20, 261, 31));
        Label->setStyleSheet(QStringLiteral("color: #F1F1F1"));
        Labelequipment = new QLabel(equipement);
        Labelequipment->setObjectName(QStringLiteral("Labelequipment"));
        Labelequipment->setGeometry(QRect(780, 10, 131, 31));
        Labelequipment->setStyleSheet(QStringLiteral("color: #F1F1F1"));
        widget_2 = new QWidget(equipement);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(30, 230, 271, 421));
        widget_2->setStyleSheet(QLatin1String("/* Styles for QLineEdit */\n"
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
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 0, 241, 391));
        label_5->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: white;\n"
"    border: 2px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 5px 10px;\n"
"    color: black;\n"
"}\n"
""));
        labelE = new QLineEdit(widget_2);
        labelE->setObjectName(QStringLiteral("labelE"));
        labelE->setEnabled(true);
        labelE->setGeometry(QRect(5, 42, 191, 30));
        labelE->setStyleSheet(QLatin1String("/* Styles for QLineEdit */\n"
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
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 61, 16));
        label_4->setStyleSheet(QLatin1String("color: black\n"
""));
        categoryE = new QLineEdit(widget_2);
        categoryE->setObjectName(QStringLiteral("categoryE"));
        categoryE->setGeometry(QRect(5, 111, 191, 30));
        categoryE->setStyleSheet(QLatin1String("/* Styles for QLineEdit */\n"
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
        label_1 = new QLabel(widget_2);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(10, 80, 48, 16));
        label_1->setStyleSheet(QLatin1String("color: black\n"
""));
        stateE = new QLineEdit(widget_2);
        stateE->setObjectName(QStringLiteral("stateE"));
        stateE->setGeometry(QRect(5, 180, 191, 30));
        stateE->setStyleSheet(QLatin1String("/* Styles for QLineEdit */\n"
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
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 150, 26, 16));
        label_2->setStyleSheet(QStringLiteral("color: black"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(10, 220, 50, 16));
        label_3->setBaseSize(QSize(2, 0));
        label_3->setStyleSheet(QStringLiteral("color: black"));
        Ajout_2 = new QPushButton(widget_2);
        Ajout_2->setObjectName(QStringLiteral("Ajout_2"));
        Ajout_2->setGeometry(QRect(20, 350, 151, 34));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Users/moham/Desktop/icons/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Ajout_2->setIcon(icon);
        Ajout_2->setIconSize(QSize(20, 20));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(205, 168, 31, 31));
        pushButton_4->setLayoutDirection(Qt::LeftToRight);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/icon/plus (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(30, 30));
        pushButton_4->setCheckable(true);
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 0, 41, 391));
        label_7->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: white;\n"
"    border: 2px solid black; /* Add border */\n"
"    border-top-right-radius: 10px; /* Border radius only on the top-right */\n"
"    border-bottom-right-radius: 10px; /* Border radius only on the bottom-right */\n"
"    padding: 5px 10px;\n"
"    color: black;\n"
"}\n"
""));
        stockE = new QLineEdit(widget_2);
        stockE->setObjectName(QStringLiteral("stockE"));
        stockE->setGeometry(QRect(5, 260, 191, 30));
        imageLabel = new QLabel(widget_2);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setGeometry(QRect(210, 210, 100, 100));
        imageSelector = new QPushButton(widget_2);
        imageSelector->setObjectName(QStringLiteral("imageSelector"));
        imageSelector->setGeometry(QRect(30, 300, 121, 41));
        imageSelector->setIcon(icon);
        imageSelector->setIconSize(QSize(20, 20));
        label_5->raise();
        labelE->raise();
        Ajout_2->raise();
        stateE->raise();
        categoryE->raise();
        label_1->raise();
        label_3->raise();
        label_2->raise();
        label_4->raise();
        label_7->raise();
        pushButton_4->raise();
        stockE->raise();
        imageLabel->raise();
        imageSelector->raise();
        widget_3 = new QWidget(equipement);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(20, 220, 61, 401));
        widget_3->setStyleSheet(QStringLiteral("background-color:#fffff;"));
        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(14, 168, 31, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../Downloads/plus (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_3->setCheckable(true);
        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(9, 9, 41, 361));
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
        google = new QPushButton(equipement);
        google->setObjectName(QStringLiteral("google"));
        google->setGeometry(QRect(780, 650, 91, 41));
        google->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: transparent; \n"
"    color: black;\n"
"    border: 3px solid#141E46 ;\n"
"    border-radius: 10px;\n"
"    padding: 10px 20px;\n"
"    font-weight: bold;\n"
"    font-family: Calibri, sans-serif;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton:hover {\n"
"  \n"
"    border: 3px solid #EBF1F4;\n"
"    color: black;\n"
"}"));
        amazon = new QPushButton(equipement);
        amazon->setObjectName(QStringLiteral("amazon"));
        amazon->setGeometry(QRect(880, 650, 91, 41));
        amazon->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: transparent; \n"
"    color: black;\n"
"    border: 3px solid#141E46 ;\n"
"    border-radius: 10px;\n"
"    padding: 10px 20px;\n"
"    font-weight: bold;\n"
"    font-family: Calibri, sans-serif;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton:hover {\n"
"  \n"
"    border: 3px solid #EBF1F4;\n"
"    color: black;\n"
"}"));
        visual_impact = new QPushButton(equipement);
        visual_impact->setObjectName(QStringLiteral("visual_impact"));
        visual_impact->setGeometry(QRect(980, 650, 121, 41));
        visual_impact->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: transparent; \n"
"    color: black;\n"
"    border: 3px solid#141E46 ;\n"
"    border-radius: 10px;\n"
"    padding: 10px 20px;\n"
"    font-weight: bold;\n"
"    font-family: Calibri, sans-serif;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton:hover {\n"
"  \n"
"    border: 3px solid #EBF1F4;\n"
"    color: black;\n"
"}"));
        label = new QLabel(equipement);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(530, 640, 241, 41));
        widget_4 = new QWidget(equipement);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(370, 180, 961, 61));
        widget_4->setStyleSheet(QLatin1String("/* Initially transparent background */\n"
"\n"
"/*QWidget { background-color: #E0E0E1;\n"
"}*/\n"
"QPushButton {\n"
"    background-color: transparent; \n"
"    color: black;\n"
"\n"
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
"}\n"
"\n"
"/* Pressed effect */\n"
"QPushButton:pressed {\n"
"    background-color: #141E46;\n"
"    border: 2px solid #141E46;\n"
"    padding: 9px 19px;\n"
"    color: white;\n"
"}\n"
"\n"
"/* Checked effect */\n"
"QPushButton:checked {\n"
"    background-color: #64a1c2; /* Your desired color */\n"
"    border: none; /* Remove the border if needed */\n"
"}\n"
"QLineEdit {\n"
"    background-color: #FFFFFF; /* Background color */\n"
"    border: 2px solid #CCCCCC; /* Border color */\n"
"    border-radius: 5px; /* Border radius */\n"
"    padding: 7px 10px; /* Padding */\n"
"    font-si"
                        "ze: 14px; /* Font size */\n"
"    color: #333333; /* Text color */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border-color: #999999; /* Border color on hover */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #0078D4; /* Border color when focused */\n"
"}\n"
"#widget_4 { \n"
"background-color: #FCFCFF; /* Adjusted background color */\n"
"    border-width: 2px;\n"
"    border-style: solid;\n"
"    border-color: #242E42; /* Same border color as other elements */\n"
"    border-radius: 5px; /* Adding border radius */\n"
" }"));
        pdfButton_5 = new QPushButton(widget_4);
        pdfButton_5->setObjectName(QStringLiteral("pdfButton_5"));
        pdfButton_5->setGeometry(QRect(20, 10, 141, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush10(QColor(0, 0, 0, 0));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush11(QColor(127, 127, 127, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush11);
        QBrush brush12(QColor(170, 170, 170, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush13(QColor(0, 0, 0, 128));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        pdfButton_5->setPalette(palette1);
        pdfButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: transparent; \n"
"    color: black;\n"
"\n"
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
"}\n"
"\n"
"/* Pressed effect */\n"
"QPushButton:pressed {\n"
"    background-color: #141E46;\n"
"    border: 2px solid #141E46;\n"
"    padding: 9px 19px;\n"
"    color: white;\n"
"}\n"
"\n"
"/* Checked effect */\n"
"QPushButton:checked {\n"
"    background-color: #64a1c2; /* Your desired color */\n"
"    border: none; /* Remove the border if needed */\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("icon/format-de-fichier-pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pdfButton_5->setIcon(icon3);
        pdfButton_5->setIconSize(QSize(30, 30));
        pdfButton_4 = new QPushButton(widget_4);
        pdfButton_4->setObjectName(QStringLiteral("pdfButton_4"));
        pdfButton_4->setGeometry(QRect(210, 10, 141, 41));
        pdfButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: transparent; \n"
"    color: black;\n"
"\n"
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
"}\n"
"\n"
"/* Pressed effect */\n"
"QPushButton:pressed {\n"
"    background-color: #141E46;\n"
"    border: 2px solid #141E46;\n"
"    padding: 9px 19px;\n"
"    color: white;\n"
"}\n"
"\n"
"/* Checked effect */\n"
"QPushButton:checked {\n"
"    background-color: #64a1c2; /* Your desired color */\n"
"    border: none; /* Remove the border if needed */\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("icon/tableau-de-bord.png"), QSize(), QIcon::Normal, QIcon::Off);
        pdfButton_4->setIcon(icon4);
        pdfButton_4->setIconSize(QSize(30, 30));
        search_input = new QLineEdit(widget_4);
        search_input->setObjectName(QStringLiteral("search_input"));
        search_input->setGeometry(QRect(370, 15, 242, 31));
        search_input->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #FFFFFF; /* Background color */\n"
"    border: 2px solid #CCCCCC; /* Border color */\n"
"    border-radius: 5px; /* Border radius */\n"
"    padding: 7px 10px; /* Padding */\n"
"    font-size: 14px; /* Font size */\n"
"    color: #333333; /* Text color */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border-color: #999999; /* Border color on hover */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #0078D4; /* Border color when focused */\n"
"}\n"
""));
        label_15 = new QLabel(widget_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(580, 20, 20, 20));
        label_15->setAutoFillBackground(false);
        label_15->setStyleSheet(QStringLiteral("background-color:transparent;"));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/recherche.png")));
        label_15->setScaledContents(true);
        label_15->setAlignment(Qt::AlignCenter);
        Affecter = new QPushButton(widget_4);
        Affecter->setObjectName(QStringLiteral("Affecter"));
        Affecter->setGeometry(QRect(700, 10, 101, 41));
        Affecter->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: transparent; \n"
"    color: black;\n"
"    border: 3px solid#141E46 ;\n"
"    border-radius: 10px;\n"
"    padding: 10px 20px;\n"
"    font-weight: bold;\n"
"    font-family: Calibri, sans-serif;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton:hover {\n"
"  \n"
"    border: 3px solid #EBF1F4;\n"
"    color: black;\n"
"}"));
        result_widget = new QWidget(equipement);
        result_widget->setObjectName(QStringLiteral("result_widget"));
        result_widget->setGeometry(QRect(370, 240, 961, 391));
        result_widget->setBaseSize(QSize(400, 400));
        result_widget->setStyleSheet(QLatin1String("#result_widget {\n"
"    border-width: 2px;\n"
"    border-style: solid;\n"
"    border-color: #242E42; /* Same border color as other elements */\n"
"    border-bottom-left-radius: 20px; /* Applying border radius to bottom-left corner */\n"
"    border-bottom-right-radius: 20px; /* Applying border radius to bottom-right corner */\n"
"}\n"
""));
        tableWidget_2 = new QTableWidget(result_widget);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 10, 941, 371));
        tableWidget_2->setStyleSheet(QLatin1String("/* Apply styles to the QTableWidget */\n"
"QTableWidget {\n"
"    border: 2px solid #2c3e50; /* Set border width to 4px */\n"
"    alternate-background-color: #f0f0f0;\n"
"    background-color: #FCFCFF;\n"
"    font-family: \"Arial\";\n"
"    font-size: 12px;\n"
"    border-radius: 20px;\n"
"}\n"
"\n"
"/* Apply styles to the header of the QTableWidget */\n"
"QHeaderView::section {\n"
"   background-color: #15406e; /* Darker blue header background color */\n"
"    color: white; /* Header text color */\n"
"    padding: 5px 0; /* Adjust top and bottom padding */\n"
"    border: 2px solid #2c3e50; /* Header border color */\n"
"    border-top: none; /* Remove the top border */\n"
"    border-bottom: none; /* Remove the bottom border */\n"
"    border-radius: 0px;\n"
"    border-width: 2px;\n"
"}\n"
"\n"
"/* Apply styles to the items within the QTableWidget */\n"
"QTableWidget::item {\n"
"    padding: 5px; /* Item padding */\n"
"    border: 1px solid #2c3e50; /* Item border color */\n"
"}\n"
"\n"
"/* Apply styles to"
                        " the even rows within the QTableWidget */\n"
"QTableWidget::item:alternate {\n"
"    background-color: #2c3e50; /* Darker blue even row background color */\n"
"}\n"
"\n"
"/* Apply styles when an item is selected in the QTableWidget */\n"
"QTableWidget::item:selected {\n"
"    background-color: #3498db; /* Selected item background color (a slightly lighter blue) */\n"
"    color: black; /* Selected item text color */\n"
"}\n"
""));
        webWidget = new QWidget(equipement);
        webWidget->setObjectName(QStringLiteral("webWidget"));
        webWidget->setGeometry(QRect(340, 490, 261, 231));
        label_8 = new QLabel(equipement);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(570, 60, 671, 71));
        QFont font;
        font.setFamily(QStringLiteral("Roboto Black"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label_8->setFont(font);
        widget_3->raise();
        Label->raise();
        Labelequipment->raise();
        widget_2->raise();
        google->raise();
        visual_impact->raise();
        label->raise();
        amazon->raise();
        widget_4->raise();
        result_widget->raise();
        webWidget->raise();
        label_8->raise();

        retranslateUi(Equipment);
        QObject::connect(pushButton_3, SIGNAL(toggled(bool)), widget_2, SLOT(setVisible(bool)));
        QObject::connect(pushButton_3, SIGNAL(toggled(bool)), widget_3, SLOT(setHidden(bool)));
        QObject::connect(pushButton_4, SIGNAL(toggled(bool)), widget_2, SLOT(setHidden(bool)));
        QObject::connect(pushButton_4, SIGNAL(toggled(bool)), widget_3, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(Equipment);
    } // setupUi

    void retranslateUi(QWidget *Equipment)
    {
        Equipment->setWindowTitle(QApplication::translate("Equipment", "Form", Q_NULLPTR));
        Label->setText(QApplication::translate("Equipment", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">R\303\251pertoir de l'\303\251quipement</span></p></body></html>", Q_NULLPTR));
        Labelequipment->setText(QApplication::translate("Equipment", "<html><head/><body><p><span style=\" font-size:9pt;\">Equipements r\303\251p\303\251rtori\303\251s</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QString());
        label_4->setText(QApplication::translate("Equipment", "Libelle", Q_NULLPTR));
        label_1->setText(QApplication::translate("Equipment", "categorie", Q_NULLPTR));
        label_2->setText(QApplication::translate("Equipment", "etat", Q_NULLPTR));
        label_3->setText(QApplication::translate("Equipment", "stock ", Q_NULLPTR));
        Ajout_2->setText(QApplication::translate("Equipment", "Ajouter", Q_NULLPTR));
        pushButton_4->setText(QString());
        label_7->setText(QString());
        imageLabel->setText(QString());
        imageSelector->setText(QApplication::translate("Equipment", "upload image", Q_NULLPTR));
        pushButton_3->setText(QString());
        label_6->setText(QString());
        google->setText(QApplication::translate("Equipment", "Google", Q_NULLPTR));
        amazon->setText(QApplication::translate("Equipment", "Amazon", Q_NULLPTR));
        visual_impact->setText(QApplication::translate("Equipment", "Visual Impact", Q_NULLPTR));
        label->setText(QApplication::translate("Equipment", "Chercher sur les sites partenaires :", Q_NULLPTR));
        pdfButton_5->setText(QApplication::translate("Equipment", "Export PDF", Q_NULLPTR));
        pdfButton_4->setText(QApplication::translate("Equipment", "stats", Q_NULLPTR));
        search_input->setPlaceholderText(QApplication::translate("Equipment", "Search...", Q_NULLPTR));
        label_15->setText(QString());
        Affecter->setText(QApplication::translate("Equipment", "Affecter", Q_NULLPTR));
        label_8->setText(QApplication::translate("Equipment", "LISTE DES EQUIPEMENT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Equipment: public Ui_Equipment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPMENT_H
