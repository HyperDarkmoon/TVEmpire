/********************************************************************************
** Form generated from reading UI file 'employee.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_H
#define UI_EMPLOYEE_H

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
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Employee
{
public:
    QWidget *employeeContainer;
    QTableWidget *emp;
    QPushButton *add_btn_3;
    QPushButton *add_btn_4;
    QLineEdit *search_input;
    QWidget *widget_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_10;
    QPushButton *add_btn_5;
    QPushButton *pushButton_4;
    QLabel *label_11;
    QDateEdit *dateEdit;
    QLabel *label_12;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QTimeEdit *timeEdit;
    QTimeEdit *timeEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *add_btn_2;
    QWidget *widget;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QPushButton *pushButton;
    QLabel *label_15;

    void setupUi(QWidget *Employee)
    {
        if (Employee->objectName().isEmpty())
            Employee->setObjectName(QStringLiteral("Employee"));
        Employee->resize(1294, 657);
        QPalette palette;
        QBrush brush(QColor(36, 46, 66, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(47, 59, 82, 255));
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
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        Employee->setPalette(palette);
        Employee->setStyleSheet(QStringLiteral(""));
        employeeContainer = new QWidget(Employee);
        employeeContainer->setObjectName(QStringLiteral("employeeContainer"));
        employeeContainer->setGeometry(QRect(0, 0, 1311, 661));
        employeeContainer->setAutoFillBackground(false);
        employeeContainer->setStyleSheet(QLatin1String("\n"
"#employeeContainer {\n"
"    background-color: #EBF1F4 ; /* Background color for the Sponsor widget */\n"
"}\n"
""));
        emp = new QTableWidget(employeeContainer);
        if (emp->columnCount() < 13)
            emp->setColumnCount(13);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem->setFont(font);
        emp->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        emp->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem2->setFont(font);
        emp->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        emp->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        emp->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        emp->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        emp->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        emp->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        emp->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        emp->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        emp->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        emp->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        emp->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        if (emp->rowCount() < 20)
            emp->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(5, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(6, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(7, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(8, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(9, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(10, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(11, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(12, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(13, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(14, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(15, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(16, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(17, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(18, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        emp->setVerticalHeaderItem(19, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        emp->setItem(19, 0, __qtablewidgetitem33);
        emp->setObjectName(QStringLiteral("emp"));
        emp->setGeometry(QRect(310, 160, 951, 431));
        QPalette palette1;
        QBrush brush10(QColor(241, 241, 241, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        emp->setPalette(palette1);
        emp->setFont(font);
        emp->setFocusPolicy(Qt::NoFocus);
        emp->setAutoFillBackground(true);
        emp->setStyleSheet(QStringLiteral("background-color: #f1f1f1;"));
        emp->setFrameShape(QFrame::NoFrame);
        emp->setAlternatingRowColors(false);
        emp->setSelectionMode(QAbstractItemView::ExtendedSelection);
        emp->setSelectionBehavior(QAbstractItemView::SelectRows);
        emp->setShowGrid(false);
        emp->setGridStyle(Qt::NoPen);
        emp->setSortingEnabled(true);
        emp->setWordWrap(true);
        emp->setCornerButtonEnabled(false);
        emp->setRowCount(20);
        emp->horizontalHeader()->setCascadingSectionResizes(false);
        emp->horizontalHeader()->setDefaultSectionSize(120);
        emp->horizontalHeader()->setMinimumSectionSize(50);
        emp->horizontalHeader()->setStretchLastSection(true);
        emp->verticalHeader()->setVisible(false);
        emp->verticalHeader()->setCascadingSectionResizes(false);
        emp->verticalHeader()->setDefaultSectionSize(28);
        emp->verticalHeader()->setHighlightSections(false);
        emp->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        emp->verticalHeader()->setStretchLastSection(false);
        add_btn_3 = new QPushButton(employeeContainer);
        add_btn_3->setObjectName(QStringLiteral("add_btn_3"));
        add_btn_3->setGeometry(QRect(1080, 30, 161, 71));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush11(QColor(127, 127, 127, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush11);
        QBrush brush12(QColor(170, 170, 170, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        QBrush brush13(QColor(0, 0, 0, 128));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        add_btn_3->setPalette(palette2);
        QIcon icon;
        icon.addFile(QStringLiteral("../../#017_Students information system/icons/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        add_btn_3->setIcon(icon);
        add_btn_3->setIconSize(QSize(20, 20));
        add_btn_4 = new QPushButton(employeeContainer);
        add_btn_4->setObjectName(QStringLiteral("add_btn_4"));
        add_btn_4->setGeometry(QRect(340, 110, 141, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        QBrush brush14(QColor(0, 0, 0, 0));
        brush14.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush14);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        add_btn_4->setPalette(palette3);
        add_btn_4->setStyleSheet(QLatin1String("QPushButton {\n"
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
        add_btn_4->setIcon(icon1);
        add_btn_4->setIconSize(QSize(30, 30));
        search_input = new QLineEdit(employeeContainer);
        search_input->setObjectName(QStringLiteral("search_input"));
        search_input->setGeometry(QRect(740, 111, 242, 31));
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
        widget_2 = new QWidget(employeeContainer);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 10, 261, 651));
        widget_2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 0, 241, 631));
        label_5->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: white;\n"
"    border: 2px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 5px 10px;\n"
"    color: black;\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setGeometry(QRect(10, 30, 191, 30));
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
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 61, 16));
        label_4->setStyleSheet(QLatin1String("color: black\n"
""));
        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 90, 191, 30));
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
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 48, 16));
        label_3->setStyleSheet(QLatin1String("color: black\n"
""));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 130, 101, 16));
        label_7->setStyleSheet(QStringLiteral("color: black"));
        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setEnabled(true);
        label_10->setGeometry(QRect(10, 220, 50, 16));
        label_10->setBaseSize(QSize(2, 0));
        label_10->setStyleSheet(QStringLiteral("color: black"));
        add_btn_5 = new QPushButton(widget_2);
        add_btn_5->setObjectName(QStringLiteral("add_btn_5"));
        add_btn_5->setGeometry(QRect(20, 310, 151, 34));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../Users/moham/Desktop/icons/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        add_btn_5->setIcon(icon2);
        add_btn_5->setIconSize(QSize(20, 20));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(205, 315, 31, 31));
        pushButton_4->setLayoutDirection(Qt::LeftToRight);
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../../Downloads/plus (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(30, 30));
        pushButton_4->setCheckable(true);
        label_11 = new QLabel(widget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(200, 0, 41, 631));
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
        dateEdit->setGeometry(QRect(10, 160, 171, 22));
        label_12 = new QLabel(widget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 190, 81, 16));
        comboBox = new QComboBox(widget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 220, 181, 22));
        comboBox_2 = new QComboBox(widget_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 270, 181, 22));
        timeEdit = new QTimeEdit(widget_2);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(10, 320, 181, 22));
        timeEdit_2 = new QTimeEdit(widget_2);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(10, 380, 181, 22));
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 430, 191, 30));
        lineEdit_4 = new QLineEdit(widget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(10, 480, 191, 30));
        lineEdit_5 = new QLineEdit(widget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(10, 540, 191, 30));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 250, 47, 14));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 300, 101, 16));
        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 360, 111, 16));
        label_9 = new QLabel(widget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 410, 47, 14));
        label_13 = new QLabel(widget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 460, 47, 14));
        label_14 = new QLabel(widget_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 520, 47, 14));
        add_btn_2 = new QPushButton(widget_2);
        add_btn_2->setObjectName(QStringLiteral("add_btn_2"));
        add_btn_2->setGeometry(QRect(20, 590, 161, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        add_btn_2->setPalette(palette4);
        add_btn_2->setIcon(icon);
        add_btn_2->setIconSize(QSize(20, 20));
        add_btn_5->raise();
        label_10->raise();
        label_5->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        label_3->raise();
        label_4->raise();
        label_7->raise();
        dateEdit->raise();
        label_11->raise();
        pushButton_4->raise();
        label_12->raise();
        comboBox->raise();
        comboBox_2->raise();
        timeEdit->raise();
        timeEdit_2->raise();
        lineEdit->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();
        label->raise();
        label_2->raise();
        label_8->raise();
        label_9->raise();
        label_13->raise();
        label_14->raise();
        add_btn_2->raise();
        widget = new QWidget(employeeContainer);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-10, 10, 61, 651));
        widget->setStyleSheet(QStringLiteral("background-color:#fffff;"));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(14, 315, 31, 31));
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_3->setCheckable(true);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 0, 41, 631));
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
        pushButton = new QPushButton(employeeContainer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(540, 110, 141, 41));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(30, 30));
        label_15 = new QLabel(employeeContainer);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(955, 116, 20, 20));
        label_15->setAutoFillBackground(false);
        label_15->setStyleSheet(QStringLiteral("background-color:transparent;"));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/recherche.png")));
        label_15->setScaledContents(true);
        label_15->setAlignment(Qt::AlignCenter);
        widget->raise();
        emp->raise();
        add_btn_4->raise();
        add_btn_3->raise();
        search_input->raise();
        widget_2->raise();
        pushButton->raise();
        label_15->raise();

        retranslateUi(Employee);
        QObject::connect(pushButton_3, SIGNAL(toggled(bool)), widget_2, SLOT(setVisible(bool)));
        QObject::connect(pushButton_3, SIGNAL(toggled(bool)), widget, SLOT(setHidden(bool)));
        QObject::connect(pushButton_4, SIGNAL(toggled(bool)), widget_2, SLOT(setHidden(bool)));
        QObject::connect(pushButton_4, SIGNAL(toggled(bool)), widget, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(Employee);
    } // setupUi

    void retranslateUi(QWidget *Employee)
    {
        Employee->setWindowTitle(QApplication::translate("Employee", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = emp->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Employee", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = emp->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Employee", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = emp->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Employee", "Last name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = emp->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Employee", "Post", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = emp->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Employee", "Salary", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = emp->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Employee", "Login", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = emp->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Employee", "Password", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = emp->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Employee", "Temps d'entree", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = emp->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Employee", "Temps de Sortie", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = emp->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Employee", "Date of Birth", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = emp->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("Employee", "Gender", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = emp->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("Employee", "Delete", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = emp->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("Employee", "Edit", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = emp->verticalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = emp->verticalHeaderItem(1);
        ___qtablewidgetitem14->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = emp->verticalHeaderItem(2);
        ___qtablewidgetitem15->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = emp->verticalHeaderItem(3);
        ___qtablewidgetitem16->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = emp->verticalHeaderItem(4);
        ___qtablewidgetitem17->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = emp->verticalHeaderItem(5);
        ___qtablewidgetitem18->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = emp->verticalHeaderItem(6);
        ___qtablewidgetitem19->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = emp->verticalHeaderItem(7);
        ___qtablewidgetitem20->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = emp->verticalHeaderItem(8);
        ___qtablewidgetitem21->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = emp->verticalHeaderItem(9);
        ___qtablewidgetitem22->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = emp->verticalHeaderItem(10);
        ___qtablewidgetitem23->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = emp->verticalHeaderItem(11);
        ___qtablewidgetitem24->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = emp->verticalHeaderItem(12);
        ___qtablewidgetitem25->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = emp->verticalHeaderItem(13);
        ___qtablewidgetitem26->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = emp->verticalHeaderItem(14);
        ___qtablewidgetitem27->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = emp->verticalHeaderItem(15);
        ___qtablewidgetitem28->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = emp->verticalHeaderItem(16);
        ___qtablewidgetitem29->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = emp->verticalHeaderItem(17);
        ___qtablewidgetitem30->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = emp->verticalHeaderItem(18);
        ___qtablewidgetitem31->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = emp->verticalHeaderItem(19);
        ___qtablewidgetitem32->setText(QApplication::translate("Employee", "2", Q_NULLPTR));

        const bool __sortingEnabled = emp->isSortingEnabled();
        emp->setSortingEnabled(false);
        emp->setSortingEnabled(__sortingEnabled);

        add_btn_3->setText(QApplication::translate("Employee", "Refresh", Q_NULLPTR));
        add_btn_4->setText(QApplication::translate("Employee", "Export PDF", Q_NULLPTR));
        search_input->setPlaceholderText(QApplication::translate("Employee", "Search...", Q_NULLPTR));
        label_5->setText(QString());
        label_4->setText(QApplication::translate("Employee", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("Employee", "prenom", Q_NULLPTR));
        label_7->setText(QApplication::translate("Employee", "date naissance", Q_NULLPTR));
        label_10->setText(QApplication::translate("Employee", "categories", Q_NULLPTR));
        add_btn_5->setText(QApplication::translate("Employee", "Add", Q_NULLPTR));
        pushButton_4->setText(QString());
        label_11->setText(QString());
        label_12->setText(QApplication::translate("Employee", "sexe", Q_NULLPTR));
        label->setText(QApplication::translate("Employee", "poste", Q_NULLPTR));
        label_2->setText(QApplication::translate("Employee", "temps d'entree", Q_NULLPTR));
        label_8->setText(QApplication::translate("Employee", "temps de sortie", Q_NULLPTR));
        label_9->setText(QApplication::translate("Employee", "login ", Q_NULLPTR));
        label_13->setText(QApplication::translate("Employee", "password", Q_NULLPTR));
        label_14->setText(QApplication::translate("Employee", "salaire", Q_NULLPTR));
        add_btn_2->setText(QApplication::translate("Employee", "Add", Q_NULLPTR));
        pushButton_3->setText(QString());
        label_6->setText(QString());
        pushButton->setText(QApplication::translate("Employee", "PushButton", Q_NULLPTR));
        label_15->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Employee: public Ui_Employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H
