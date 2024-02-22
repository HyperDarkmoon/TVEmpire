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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Employee
{
public:
    QWidget *employeeContainer;
    QTableWidget *tableWidget_2;
    QPushButton *add_btn_2;

    void setupUi(QWidget *Employee)
    {
        if (Employee->objectName().isEmpty())
            Employee->setObjectName(QStringLiteral("Employee"));
        Employee->resize(971, 560);
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
        Employee->setStyleSheet(QLatin1String("#info_frame {\n"
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
        employeeContainer = new QWidget(Employee);
        employeeContainer->setObjectName(QStringLiteral("employeeContainer"));
        employeeContainer->setGeometry(QRect(-1, -1, 971, 561));
        employeeContainer->setAutoFillBackground(false);
        employeeContainer->setStyleSheet(QLatin1String("\n"
"	background:#2F3B52;\n"
""));
        tableWidget_2 = new QTableWidget(employeeContainer);
        if (tableWidget_2->columnCount() < 8)
            tableWidget_2->setColumnCount(8);
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
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem2->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (tableWidget_2->rowCount() < 20)
            tableWidget_2->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(7, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(8, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(9, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(10, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(11, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(12, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(13, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(14, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(15, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(16, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(17, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(18, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(19, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_2->setItem(19, 0, __qtablewidgetitem28);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 110, 951, 431));
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
        tableWidget_2->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        tableWidget_2->setFont(font1);
        tableWidget_2->setFocusPolicy(Qt::NoFocus);
        tableWidget_2->setAutoFillBackground(true);
        tableWidget_2->setStyleSheet(QLatin1String("background:#F1F1F1;\n"
""));
        tableWidget_2->setFrameShape(QFrame::NoFrame);
        tableWidget_2->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_2->setShowGrid(false);
        tableWidget_2->setGridStyle(Qt::NoPen);
        tableWidget_2->setSortingEnabled(true);
        tableWidget_2->setWordWrap(true);
        tableWidget_2->setCornerButtonEnabled(false);
        tableWidget_2->setRowCount(20);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(120);
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
        add_btn_2->setGeometry(QRect(10, 20, 161, 71));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush10);
        QBrush brush11(QColor(224, 224, 225, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        add_btn_2->setPalette(palette2);
        add_btn_2->setAutoFillBackground(false);
        add_btn_2->setStyleSheet(QStringLiteral("background : #F1F1F1;"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Desktop/#017_Students information system/icons/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        add_btn_2->setIcon(icon);
        add_btn_2->setIconSize(QSize(20, 20));

        retranslateUi(Employee);

        QMetaObject::connectSlotsByName(Employee);
    } // setupUi

    void retranslateUi(QWidget *Employee)
    {
        Employee->setWindowTitle(QApplication::translate("Employee", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Employee", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Employee", "Login", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Employee", "Nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Employee", "Prenom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Employee", "Poste", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Employee", "Salaire", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Employee", "Temps d'entree", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Employee", "Temps de Sortie", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->verticalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->verticalHeaderItem(5);
        ___qtablewidgetitem13->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->verticalHeaderItem(6);
        ___qtablewidgetitem14->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->verticalHeaderItem(7);
        ___qtablewidgetitem15->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->verticalHeaderItem(8);
        ___qtablewidgetitem16->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->verticalHeaderItem(9);
        ___qtablewidgetitem17->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_2->verticalHeaderItem(10);
        ___qtablewidgetitem18->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_2->verticalHeaderItem(11);
        ___qtablewidgetitem19->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_2->verticalHeaderItem(12);
        ___qtablewidgetitem20->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_2->verticalHeaderItem(13);
        ___qtablewidgetitem21->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_2->verticalHeaderItem(14);
        ___qtablewidgetitem22->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_2->verticalHeaderItem(15);
        ___qtablewidgetitem23->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_2->verticalHeaderItem(16);
        ___qtablewidgetitem24->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_2->verticalHeaderItem(17);
        ___qtablewidgetitem25->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_2->verticalHeaderItem(18);
        ___qtablewidgetitem26->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_2->verticalHeaderItem(19);
        ___qtablewidgetitem27->setText(QApplication::translate("Employee", "2", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        tableWidget_2->setSortingEnabled(__sortingEnabled);

        add_btn_2->setText(QApplication::translate("Employee", "Add", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Employee: public Ui_Employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H
