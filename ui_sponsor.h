/********************************************************************************
** Form generated from reading UI file 'sponsor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPONSOR_H
#define UI_SPONSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sponsor
{
public:
    QLabel *title_label;
    QWidget *widget_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *search_input;
    QLabel *label_8;
    QWidget *result_widget;
    QTableWidget *tableWidget;
    QWidget *widget;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QWidget *widget_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *add_btn;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QLabel *qrCodeLabel;

    void setupUi(QWidget *Sponsor)
    {
        if (Sponsor->objectName().isEmpty())
            Sponsor->setObjectName(QStringLiteral("Sponsor"));
        Sponsor->setEnabled(true);
        Sponsor->resize(1367, 682);
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
        Sponsor->setPalette(palette);
        Sponsor->setAutoFillBackground(false);
        Sponsor->setStyleSheet(QLatin1String("#Sponsor {\n"
"    background-color: #EBF1F4 ; /* Background color for the Sponsor widget */\n"
"}\n"
""));
        title_label = new QLabel(Sponsor);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setGeometry(QRect(380, 0, 521, 49));
        QFont font;
        font.setFamily(QStringLiteral("Roboto Black"));
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        title_label->setFont(font);
        title_label->setStyleSheet(QStringLiteral("color: white "));
        title_label->setAlignment(Qt::AlignCenter);
        widget_3 = new QWidget(Sponsor);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(290, 90, 1041, 61));
        widget_3->setStyleSheet(QLatin1String("/* Initially transparent background */\n"
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
"#widget_3 { \n"
"background-color: #FCFCFF; /* Adjusted background color */\n"
"    border-width: 2px;\n"
"    border-style: solid;\n"
"    border-color: #242E42; /* Same border color as other elements */\n"
"    border-radius: 5px; /* Adding border radius */\n"
" }"));
        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 10, 131, 50));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Downloads/tableau-de-bord.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(25, 25));
        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 121, 50));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../Downloads/format-de-fichier-pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(25, 25));
        search_input = new QLineEdit(widget_3);
        search_input->setObjectName(QStringLiteral("search_input"));
        search_input->setGeometry(QRect(310, 15, 311, 31));
        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(590, 20, 20, 20));
        label_8->setAutoFillBackground(false);
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/recherche.png")));
        label_8->setScaledContents(true);
        label_8->setAlignment(Qt::AlignCenter);
        result_widget = new QWidget(Sponsor);
        result_widget->setObjectName(QStringLiteral("result_widget"));
        result_widget->setGeometry(QRect(290, 150, 1041, 511));
        result_widget->setBaseSize(QSize(400, 400));
        result_widget->setStyleSheet(QLatin1String("#result_widget {\n"
"    border-width: 2px;\n"
"    border-style: solid;\n"
"    border-color: #242E42; /* Same border color as other elements */\n"
"    border-bottom-left-radius: 20px; /* Applying border radius to bottom-left corner */\n"
"    border-bottom-right-radius: 20px; /* Applying border radius to bottom-right corner */\n"
"}\n"
""));
        tableWidget = new QTableWidget(result_widget);
        if (tableWidget->rowCount() < 21)
            tableWidget->setRowCount(21);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(17, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(18, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(19, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(20, __qtablewidgetitem20);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 1011, 491));
        tableWidget->setBaseSize(QSize(0, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush10(QColor(252, 252, 255, 255));
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
        QBrush brush13(QColor(240, 240, 240, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
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
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        tableWidget->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        tableWidget->setFont(font1);
        tableWidget->setFocusPolicy(Qt::NoFocus);
        tableWidget->setStyleSheet(QLatin1String("/* Apply styles to the QTableWidget */\n"
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
        tableWidget->setFrameShape(QFrame::NoFrame);
        tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::NoPen);
        tableWidget->setSortingEnabled(true);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->setRowCount(21);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(120);
        tableWidget->horizontalHeader()->setMinimumSectionSize(50);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(28);
        tableWidget->verticalHeader()->setHighlightSections(false);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget->verticalHeader()->setStretchLastSection(false);
        widget = new QWidget(Sponsor);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-10, 130, 61, 381));
        widget->setStyleSheet(QStringLiteral("background-color:#fffff;"));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(14, 168, 31, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../Downloads/plus (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_3->setCheckable(true);
        label_6 = new QLabel(widget);
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
        widget_2 = new QWidget(Sponsor);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 140, 261, 471));
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
        label_5->setGeometry(QRect(0, 0, 241, 361));
        label_5->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color:#FCFCFF;\n"
"    border: 2px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 5px 10px;\n"
"    color: black;\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setGeometry(QRect(9, 42, 191, 30));
        lineEdit_2->setStyleSheet(QLatin1String("/* Styles for QLineEdit */\n"
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
        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(9, 111, 191, 30));
        lineEdit_3->setStyleSheet(QLatin1String("/* Styles for QLineEdit */\n"
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
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 80, 48, 16));
        label->setStyleSheet(QLatin1String("color: black\n"
""));
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 180, 191, 30));
        lineEdit->setStyleSheet(QLatin1String("/* Styles for QLineEdit */\n"
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
        comboBox = new QComboBox(widget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(9, 249, 191, 25));
        comboBox->setStyleSheet(QLatin1String("/* Styles for QComboBox */\n"
"QComboBox {\n"
"    border: 2px solid #141E46; /* Border color */\n"
"    border-radius: 10px; /* Border radius */\n"
"    padding: 5px; /* Padding */\n"
"    min-width: 100px; /* Minimum width */\n"
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
"QComboBox::down-arrow {\n"
"    image: url(down_arrow.png); /* Image for the drop-down arrow */\n"
"}\n"
"\n"
"/* Styles for QComboBox items */\n"
"QComboBox:"
                        ":item {\n"
"    padding: 5px; /* Padding for each item */\n"
"}\n"
"\n"
"QComboBox::item:selected {\n"
"    background-color: #EBF1F4; /* Background color for selected item */\n"
"    color: black; /* Text color for selected item */\n"
"}\n"
""));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(10, 220, 50, 16));
        label_3->setBaseSize(QSize(2, 0));
        label_3->setStyleSheet(QStringLiteral("color: black"));
        add_btn = new QPushButton(widget_2);
        add_btn->setObjectName(QStringLiteral("add_btn"));
        add_btn->setGeometry(QRect(30, 310, 151, 34));
        add_btn->setStyleSheet(QLatin1String("QPushButton {\n"
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
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../../Users/moham/Desktop/icons/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        add_btn->setIcon(icon3);
        add_btn->setIconSize(QSize(20, 20));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(205, 168, 31, 31));
        pushButton_4->setLayoutDirection(Qt::LeftToRight);
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(30, 30));
        pushButton_4->setCheckable(true);
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 0, 41, 361));
        label_7->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: #FCFCFF;\n"
"    border: 2px solid black; /* Add border */\n"
"    border-top-right-radius: 10px; /* Border radius only on the top-right */\n"
"    border-bottom-right-radius: 10px; /* Border radius only on the bottom-right */\n"
"    padding: 5px 10px;\n"
"    color: black;\n"
"}\n"
""));
        label_5->raise();
        lineEdit_2->raise();
        add_btn->raise();
        lineEdit->raise();
        lineEdit_3->raise();
        comboBox->raise();
        label->raise();
        label_3->raise();
        label_2->raise();
        label_4->raise();
        label_7->raise();
        pushButton_4->raise();
        qrCodeLabel = new QLabel(Sponsor);
        qrCodeLabel->setObjectName(QStringLiteral("qrCodeLabel"));
        qrCodeLabel->setGeometry(QRect(370, 563, 161, 111));
        widget->raise();
        title_label->raise();
        widget_3->raise();
        result_widget->raise();
        widget_2->raise();
        qrCodeLabel->raise();

        retranslateUi(Sponsor);
        QObject::connect(pushButton_3, SIGNAL(toggled(bool)), widget_2, SLOT(setVisible(bool)));
        QObject::connect(pushButton_3, SIGNAL(toggled(bool)), widget, SLOT(setHidden(bool)));
        QObject::connect(pushButton_4, SIGNAL(toggled(bool)), widget, SLOT(setVisible(bool)));
        QObject::connect(pushButton_4, SIGNAL(toggled(bool)), widget_2, SLOT(setHidden(bool)));

        QMetaObject::connectSlotsByName(Sponsor);
    } // setupUi

    void retranslateUi(QWidget *Sponsor)
    {
        Sponsor->setWindowTitle(QApplication::translate("Sponsor", "Form", Q_NULLPTR));
        title_label->setText(QApplication::translate("Sponsor", "Liste des sponsors", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Sponsor", "statistiques", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Sponsor", "export pdf", Q_NULLPTR));
        search_input->setPlaceholderText(QApplication::translate("Sponsor", "Search...", Q_NULLPTR));
        label_8->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Sponsor", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem14->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem15->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem16->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem17->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem18->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(19);
        ___qtablewidgetitem19->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(20);
        ___qtablewidgetitem20->setText(QApplication::translate("Sponsor", "2", Q_NULLPTR));
        pushButton_3->setText(QString());
        label_6->setText(QString());
        label_5->setText(QString());
        label_4->setText(QApplication::translate("Sponsor", "Nom", Q_NULLPTR));
        label->setText(QApplication::translate("Sponsor", "telephone", Q_NULLPTR));
        label_2->setText(QApplication::translate("Sponsor", "email", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Sponsor", "test1", Q_NULLPTR)
         << QApplication::translate("Sponsor", "test2", Q_NULLPTR)
         << QApplication::translate("Sponsor", "test3", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("Sponsor", "categories", Q_NULLPTR));
        add_btn->setText(QApplication::translate("Sponsor", "Add", Q_NULLPTR));
        pushButton_4->setText(QString());
        label_7->setText(QString());
        qrCodeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Sponsor: public Ui_Sponsor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPONSOR_H
