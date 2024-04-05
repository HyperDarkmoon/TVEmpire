/********************************************************************************
** Form generated from reading UI file 'emission.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMISSION_H
#define UI_EMISSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Emission
{
public:
    QWidget *employeeContainer;
    QTableWidget *tableWidget_2;
    QPushButton *add_btn_2;
    QPushButton *pdfButton;
    QLineEdit *searchBar;
    QPushButton *pdfButton_2;
    QPushButton *playVideoButton;
    QLabel *label;
    QLabel *label_8;
    QWidget *widget_2;
    QLabel *label_5;
    QLineEdit *name;
    QLabel *label_4;
    QLineEdit *genre;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_10;
    QPushButton *add;
    QPushButton *pushButton_4;
    QLabel *label_11;
    QDateEdit *dateEdit;
    QLabel *label_12;
    QComboBox *scene;
    QLineEdit *script;
    QLabel *label_13;
    QLabel *errorLabel;
    QWidget *widget;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QLabel *tempLabel;

    void setupUi(QWidget *Emission)
    {
        if (Emission->objectName().isEmpty())
            Emission->setObjectName(QStringLiteral("Emission"));
        Emission->resize(1310, 730);
        Emission->setStyleSheet(QLatin1String("#info_frame {\n"
"	background-color: #fff;\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"#info_frame QLabel,\n"
"#info_frame QLineEdit,\n"
"#info_frame QComboBox,\n"
"#function_frame QPushButton,\n"
"QHeaderView::section\n"
" {\n"
"	font-family: Segoe UI Semibold;\n"
"	font-size: 12px;\n"
"}\n"
"\n"
"#info_frame QLineEdit,\n"
"#info_frame QComboBox {\n"
"	padding: 4px 5px;\n"
"	border: 1px solid #838383;\n"
"	border-radius: 2px;\n"
"}\n"
"\n"
"#info_frame QLineEdit:focus,\n"
"#info_frame QComboBox:focus\n"
" {\n"
"	border-color: #0055ff;\n"
"}\n"
"\n"
"QComboBox::drop-down { \n"
"	background: transparent; \n"
"	border: none;\n"
"	margin-right: 5px;\n"
"} \n"
"\n"
"QComboBox::down-arrow {\n"
"	image: url(:/icons/icons/expand_more.svg);\n"
"}\n"
"\n"
"#result_frame {\n"
"	border-radius: 5px;\n"
"	background-color: #fff;\n"
"}\n"
"\n"
"QHeaderView::section{\n"
"	border: none;\n"
"	border-bottom:1px solid #d0c6ff;\n"
"	text-align:left;\n"
"	padding: 3px 5px;\n"
"}\n"
"\n"
"QTableWidget::Item{\n"
"	bor"
                        "der-bottom:1px solid #d0c6ff;\n"
"	color: black;\n"
"	padding-left: 3px;\n"
"}\n"
"\n"
"#function_frame QPushButton {\n"
"	font-size: 14px;\n"
"	padding: 5px 10px;\n"
"	border: 2px solid #f0f0f0;\n"
"	border-radius: 5px;\n"
"	background-color: #84e8f7;\n"
"}\n"
"\n"
"#function_frame QPushButton:hover {\n"
"	border-color: #4c96f7;\n"
"	font-size: 15px;\n"
"}\n"
"\n"
"#function_frame #delete_btn {\n"
"	background-color: #ff8183;\n"
"}\n"
"\n"
"#function_frame #delete_btn:hover {\n"
"	border-color: #dc0004;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        employeeContainer = new QWidget(Emission);
        employeeContainer->setObjectName(QStringLiteral("employeeContainer"));
        employeeContainer->setGeometry(QRect(0, 0, 1311, 731));
        employeeContainer->setAutoFillBackground(false);
        employeeContainer->setStyleSheet(QLatin1String("#employeeContainer {\n"
"    background-color: #EBF1F4 ; /* Background color for the Sponsor widget */\n"
"}\n"
""));
        tableWidget_2 = new QTableWidget(employeeContainer);
        if (tableWidget_2->columnCount() < 5)
            tableWidget_2->setColumnCount(5);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget_2->rowCount() < 20)
            tableWidget_2->setRowCount(20);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(340, 160, 791, 471));
        QPalette palette;
        QBrush brush(QColor(252, 252, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        tableWidget_2->setPalette(palette);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        tableWidget_2->setFont(font1);
        tableWidget_2->setFocusPolicy(Qt::NoFocus);
        tableWidget_2->setAutoFillBackground(true);
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
        tableWidget_2->setFrameShape(QFrame::NoFrame);
        tableWidget_2->setAutoScroll(true);
        tableWidget_2->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_2->setShowGrid(false);
        tableWidget_2->setGridStyle(Qt::NoPen);
        tableWidget_2->setSortingEnabled(true);
        tableWidget_2->setWordWrap(true);
        tableWidget_2->setCornerButtonEnabled(false);
        tableWidget_2->setRowCount(20);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(116);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(50);
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->verticalHeader()->setDefaultSectionSize(28);
        tableWidget_2->verticalHeader()->setHighlightSections(false);
        tableWidget_2->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget_2->verticalHeader()->setStretchLastSection(false);
        add_btn_2 = new QPushButton(employeeContainer);
        add_btn_2->setObjectName(QStringLiteral("add_btn_2"));
        add_btn_2->setGeometry(QRect(0, 10, 161, 71));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(241, 241, 241, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        QBrush brush4(QColor(255, 255, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        QBrush brush5(QColor(127, 127, 127, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush5);
        QBrush brush6(QColor(170, 170, 170, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        add_btn_2->setPalette(palette1);
        add_btn_2->setAutoFillBackground(false);
        add_btn_2->setStyleSheet(QStringLiteral("background : #F1F1F1;"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../#017_Students information system/icons/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        add_btn_2->setIcon(icon);
        add_btn_2->setIconSize(QSize(20, 20));
        pdfButton = new QPushButton(employeeContainer);
        pdfButton->setObjectName(QStringLiteral("pdfButton"));
        pdfButton->setGeometry(QRect(330, 100, 141, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush9(QColor(0, 0, 0, 0));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        pdfButton->setPalette(palette2);
        pdfButton->setAutoFillBackground(false);
        pdfButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        QIcon icon1;
        icon1.addFile(QStringLiteral("icon/format-de-fichier-pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pdfButton->setIcon(icon1);
        pdfButton->setIconSize(QSize(30, 30));
        searchBar = new QLineEdit(employeeContainer);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setGeometry(QRect(850, 105, 281, 31));
        searchBar->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        pdfButton_2 = new QPushButton(employeeContainer);
        pdfButton_2->setObjectName(QStringLiteral("pdfButton_2"));
        pdfButton_2->setGeometry(QRect(480, 100, 141, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        pdfButton_2->setPalette(palette3);
        pdfButton_2->setAutoFillBackground(false);
        pdfButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        QIcon icon2;
        icon2.addFile(QStringLiteral("icon/tableau-de-bord.png"), QSize(), QIcon::Normal, QIcon::Off);
        pdfButton_2->setIcon(icon2);
        pdfButton_2->setIconSize(QSize(30, 30));
        playVideoButton = new QPushButton(employeeContainer);
        playVideoButton->setObjectName(QStringLiteral("playVideoButton"));
        playVideoButton->setGeometry(QRect(630, 100, 141, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        playVideoButton->setPalette(palette4);
        playVideoButton->setAutoFillBackground(false);
        playVideoButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        icon3.addFile(QStringLiteral("icon/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        playVideoButton->setIcon(icon3);
        playVideoButton->setIconSize(QSize(30, 30));
        label = new QLabel(employeeContainer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 90, 951, 51));
        label_8 = new QLabel(employeeContainer);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1100, 110, 20, 20));
        label_8->setAutoFillBackground(false);
        label_8->setStyleSheet(QStringLiteral("background-color:transparent;"));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/recherche.png")));
        label_8->setScaledContents(true);
        label_8->setAlignment(Qt::AlignCenter);
        widget_2 = new QWidget(employeeContainer);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 170, 261, 471));
        widget_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        label_5->setGeometry(QRect(0, 0, 241, 471));
        label_5->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: white;\n"
"    border: 2px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 5px 10px;\n"
"    color: black;\n"
"}\n"
""));
        name = new QLineEdit(widget_2);
        name->setObjectName(QStringLiteral("name"));
        name->setEnabled(true);
        name->setGeometry(QRect(9, 42, 191, 30));
        name->setStyleSheet(QLatin1String("/* Styles for QLineEdit */\n"
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
        genre = new QLineEdit(widget_2);
        genre->setObjectName(QStringLiteral("genre"));
        genre->setGeometry(QRect(9, 111, 191, 30));
        genre->setStyleSheet(QLatin1String("/* Styles for QLineEdit */\n"
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
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 48, 16));
        label_3->setStyleSheet(QLatin1String("color: black\n"
""));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 150, 61, 16));
        label_7->setStyleSheet(QStringLiteral("color: black"));
        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setEnabled(true);
        label_10->setGeometry(QRect(10, 220, 50, 16));
        label_10->setBaseSize(QSize(2, 0));
        label_10->setStyleSheet(QStringLiteral("color: black"));
        add = new QPushButton(widget_2);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(30, 410, 151, 34));
        add->setStyleSheet(QLatin1String("QPushButton {\n"
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
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../../Users/moham/Desktop/icons/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        add->setIcon(icon4);
        add->setIconSize(QSize(20, 20));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(200, 210, 31, 31));
        pushButton_4->setLayoutDirection(Qt::LeftToRight);
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../../Downloads/plus (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon5);
        pushButton_4->setIconSize(QSize(30, 30));
        pushButton_4->setCheckable(true);
        label_11 = new QLabel(widget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(200, 0, 41, 471));
        label_11->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: white;\n"
"    border: 2px solid black; /* Add border */\n"
"    border-top-right-radius: 10px; /* Border radius only on the top-right */\n"
"    border-bottom-right-radius: 10px; /* Border radius only on the bottom-right */\n"
"    padding: 5px 10px;\n"
"    color: black;\n"
"}\n"
""));
        dateEdit = new QDateEdit(widget_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(10, 180, 171, 22));
        label_12 = new QLabel(widget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 220, 71, 16));
        scene = new QComboBox(widget_2);
        scene->setObjectName(QStringLiteral("scene"));
        scene->setGeometry(QRect(10, 250, 181, 22));
        scene->setStyleSheet(QLatin1String("/* Styles for QComboBox */\n"
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
        script = new QLineEdit(widget_2);
        script->setObjectName(QStringLiteral("script"));
        script->setGeometry(QRect(10, 320, 191, 71));
        script->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_13 = new QLabel(widget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 290, 71, 16));
        errorLabel = new QLabel(widget_2);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(20, 450, 161, 21));
        errorLabel->setStyleSheet(QStringLiteral("color: red;"));
        label_10->raise();
        label_5->raise();
        name->raise();
        add->raise();
        genre->raise();
        label_3->raise();
        label_4->raise();
        label_7->raise();
        dateEdit->raise();
        label_11->raise();
        pushButton_4->raise();
        label_12->raise();
        scene->raise();
        script->raise();
        label_13->raise();
        errorLabel->raise();
        widget = new QWidget(employeeContainer);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 160, 61, 381));
        widget->setStyleSheet(QStringLiteral("background-color:#fffff;"));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(14, 168, 31, 31));
        pushButton_3->setIcon(icon5);
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
        tempLabel = new QLabel(employeeContainer);
        tempLabel->setObjectName(QStringLiteral("tempLabel"));
        tempLabel->setGeometry(QRect(790, 60, 231, 16));
        widget->raise();
        label->raise();
        tableWidget_2->raise();
        add_btn_2->raise();
        pdfButton->raise();
        searchBar->raise();
        pdfButton_2->raise();
        playVideoButton->raise();
        label_8->raise();
        widget_2->raise();
        tempLabel->raise();

        retranslateUi(Emission);
        QObject::connect(pushButton_3, SIGNAL(toggled(bool)), widget_2, SLOT(setVisible(bool)));
        QObject::connect(pushButton_4, SIGNAL(toggled(bool)), widget, SLOT(setVisible(bool)));
        QObject::connect(pushButton_4, SIGNAL(toggled(bool)), widget_2, SLOT(setHidden(bool)));
        QObject::connect(pushButton_3, SIGNAL(toggled(bool)), widget, SLOT(setHidden(bool)));

        QMetaObject::connectSlotsByName(Emission);
    } // setupUi

    void retranslateUi(QWidget *Emission)
    {
        Emission->setWindowTitle(QApplication::translate("Emission", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Emission", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Emission", "Nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Emission", "Genre", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Emission", "Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Emission", "Sponsor", Q_NULLPTR));
        add_btn_2->setText(QApplication::translate("Emission", "Add", Q_NULLPTR));
        pdfButton->setText(QApplication::translate("Emission", "EXPORT PDF FILE", Q_NULLPTR));
        searchBar->setInputMask(QString());
        searchBar->setPlaceholderText(QApplication::translate("Emission", "search..", Q_NULLPTR));
        pdfButton_2->setText(QApplication::translate("Emission", "GET CHARTS", Q_NULLPTR));
        playVideoButton->setText(QApplication::translate("Emission", "playVideo", Q_NULLPTR));
        label->setText(QString());
        label_8->setText(QString());
        label_5->setText(QString());
        label_4->setText(QApplication::translate("Emission", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("Emission", "genre", Q_NULLPTR));
        label_7->setText(QApplication::translate("Emission", "Date", Q_NULLPTR));
        label_10->setText(QApplication::translate("Emission", "categories", Q_NULLPTR));
        add->setText(QApplication::translate("Emission", "Add", Q_NULLPTR));
        pushButton_4->setText(QString());
        label_11->setText(QString());
        label_12->setText(QApplication::translate("Emission", "scene", Q_NULLPTR));
        label_13->setText(QApplication::translate("Emission", "script", Q_NULLPTR));
        errorLabel->setText(QString());
        pushButton_3->setText(QString());
        label_6->setText(QString());
        tempLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Emission: public Ui_Emission {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMISSION_H
