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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Employee
{
public:
    QStackedWidget *searchStackedWidget;
    QWidget *searchWidget;
    QTableWidget *tableWidget;
    QPushButton *add_btn;
    QWidget *attendanceWidget;
    QWidget *paymentWidget;
    QWidget *addEmpWidget;
    QLineEdit *empName;
    QLineEdit *empFather;
    QLabel *id;
    QLabel *label_18;
    QLabel *id_2;
    QLabel *id_3;
    QDateEdit *empDOB;
    QLabel *id_4;
    QComboBox *empGender;
    QLabel *id_5;
    QLineEdit *empEmail;
    QLineEdit *empPhone;
    QLabel *id_6;
    QLineEdit *empAddress;
    QLabel *id_7;
    QLabel *id_8;
    QLabel *id_9;
    QLineEdit *empID;
    QLineEdit *empSalary;
    QComboBox *empDept;
    QDateEdit *empDOJ;
    QLabel *id_10;
    QLabel *id_12;
    QLabel *label_19;
    QComboBox *empDesig;
    QLabel *id_14;
    QComboBox *empType;
    QLabel *id_13;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QWidget *updateEmpWidget;
    QLineEdit *updateEmpName;
    QLabel *id_15;
    QLabel *id_16;
    QLabel *id_17;
    QComboBox *updateEmpGender;
    QLabel *id_19;
    QLabel *id_18;
    QLineEdit *updateEmpPhone;
    QLineEdit *updateEmpEmail;
    QLineEdit *updateEmpAddress;
    QLabel *id_20;
    QLabel *id_21;
    QLineEdit *updateEmpFName;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_20;
    QDateEdit *updateEmpDOB;
    QTableView *updateTableView;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *updateEmpID;
    QWidget *deleteEmpWidget;
    QTableView *deleteTableView;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Employee)
    {
        if (Employee->objectName().isEmpty())
            Employee->setObjectName(QStringLiteral("Employee"));
        Employee->resize(971, 560);
        searchStackedWidget = new QStackedWidget(Employee);
        searchStackedWidget->setObjectName(QStringLiteral("searchStackedWidget"));
        searchStackedWidget->setGeometry(QRect(0, 0, 1121, 570));
        searchStackedWidget->setStyleSheet(QLatin1String("#addEmpWidget\n"
"{\n"
"	background:#2D2D2D;\n"
"}\n"
"\n"
""));
        searchWidget = new QWidget();
        searchWidget->setObjectName(QStringLiteral("searchWidget"));
        searchWidget->setStyleSheet(QLatin1String("#searchWidget\n"
"{\n"
"	background:#2D2D2D;\n"
"}"));
        tableWidget = new QTableWidget(searchWidget);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (tableWidget->rowCount() < 20)
            tableWidget->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(17, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(18, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(19, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(19, 0, __qtablewidgetitem28);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 120, 951, 431));
        tableWidget->setFont(font);
        tableWidget->setFocusPolicy(Qt::NoFocus);
        tableWidget->setStyleSheet(QStringLiteral(""));
        tableWidget->setFrameShape(QFrame::NoFrame);
        tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::NoPen);
        tableWidget->setSortingEnabled(true);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->setRowCount(20);
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
        add_btn = new QPushButton(searchWidget);
        add_btn->setObjectName(QStringLiteral("add_btn"));
        add_btn->setGeometry(QRect(10, 20, 161, 71));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Desktop/#017_Students information system/icons/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        add_btn->setIcon(icon);
        add_btn->setIconSize(QSize(20, 20));
        searchStackedWidget->addWidget(searchWidget);
        attendanceWidget = new QWidget();
        attendanceWidget->setObjectName(QStringLiteral("attendanceWidget"));
        attendanceWidget->setStyleSheet(QLatin1String("#attendanceWidget\n"
"{\n"
"	background:#2D2D2D;\n"
"}"));
        searchStackedWidget->addWidget(attendanceWidget);
        paymentWidget = new QWidget();
        paymentWidget->setObjectName(QStringLiteral("paymentWidget"));
        searchStackedWidget->addWidget(paymentWidget);
        addEmpWidget = new QWidget();
        addEmpWidget->setObjectName(QStringLiteral("addEmpWidget"));
        empName = new QLineEdit(addEmpWidget);
        empName->setObjectName(QStringLiteral("empName"));
        empName->setGeometry(QRect(30, 90, 240, 32));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        empName->setFont(font1);
        empName->setStyleSheet(QLatin1String("#empName\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empFather = new QLineEdit(addEmpWidget);
        empFather->setObjectName(QStringLiteral("empFather"));
        empFather->setGeometry(QRect(290, 90, 240, 32));
        empFather->setFont(font1);
        empFather->setStyleSheet(QLatin1String("#empFather\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id = new QLabel(addEmpWidget);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(30, 65, 141, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        id->setFont(font2);
        label_18 = new QLabel(addEmpWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 20, 241, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_18->setFont(font3);
        id_2 = new QLabel(addEmpWidget);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(290, 65, 141, 21));
        id_2->setFont(font2);
        id_3 = new QLabel(addEmpWidget);
        id_3->setObjectName(QStringLiteral("id_3"));
        id_3->setGeometry(QRect(550, 65, 141, 21));
        id_3->setFont(font2);
        empDOB = new QDateEdit(addEmpWidget);
        empDOB->setObjectName(QStringLiteral("empDOB"));
        empDOB->setGeometry(QRect(550, 90, 240, 32));
        empDOB->setFont(font1);
        empDOB->setStyleSheet(QLatin1String("#empDOB\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empDOB->setCurrentSection(QDateTimeEdit::YearSection);
        id_4 = new QLabel(addEmpWidget);
        id_4->setObjectName(QStringLiteral("id_4"));
        id_4->setGeometry(QRect(30, 140, 141, 21));
        id_4->setFont(font2);
        empGender = new QComboBox(addEmpWidget);
        empGender->setObjectName(QStringLiteral("empGender"));
        empGender->setGeometry(QRect(30, 165, 240, 32));
        empGender->setFont(font1);
        empGender->setStyleSheet(QLatin1String("#empGender\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_5 = new QLabel(addEmpWidget);
        id_5->setObjectName(QStringLiteral("id_5"));
        id_5->setGeometry(QRect(290, 140, 141, 21));
        id_5->setFont(font2);
        empEmail = new QLineEdit(addEmpWidget);
        empEmail->setObjectName(QStringLiteral("empEmail"));
        empEmail->setGeometry(QRect(290, 165, 240, 32));
        empEmail->setFont(font1);
        empEmail->setStyleSheet(QLatin1String("#empEmail\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empPhone = new QLineEdit(addEmpWidget);
        empPhone->setObjectName(QStringLiteral("empPhone"));
        empPhone->setGeometry(QRect(550, 165, 240, 32));
        empPhone->setFont(font1);
        empPhone->setStyleSheet(QLatin1String("#empPhone\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_6 = new QLabel(addEmpWidget);
        id_6->setObjectName(QStringLiteral("id_6"));
        id_6->setGeometry(QRect(550, 140, 141, 21));
        id_6->setFont(font2);
        empAddress = new QLineEdit(addEmpWidget);
        empAddress->setObjectName(QStringLiteral("empAddress"));
        empAddress->setGeometry(QRect(30, 235, 761, 32));
        empAddress->setFont(font1);
        empAddress->setStyleSheet(QLatin1String("#empAddress\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_7 = new QLabel(addEmpWidget);
        id_7->setObjectName(QStringLiteral("id_7"));
        id_7->setGeometry(QRect(30, 210, 141, 21));
        id_7->setFont(font2);
        id_8 = new QLabel(addEmpWidget);
        id_8->setObjectName(QStringLiteral("id_8"));
        id_8->setGeometry(QRect(290, 415, 141, 21));
        id_8->setFont(font2);
        id_9 = new QLabel(addEmpWidget);
        id_9->setObjectName(QStringLiteral("id_9"));
        id_9->setGeometry(QRect(30, 415, 141, 21));
        id_9->setFont(font2);
        empID = new QLineEdit(addEmpWidget);
        empID->setObjectName(QStringLiteral("empID"));
        empID->setEnabled(false);
        empID->setGeometry(QRect(30, 440, 201, 32));
        empID->setFont(font1);
        empID->setStyleSheet(QLatin1String("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empSalary = new QLineEdit(addEmpWidget);
        empSalary->setObjectName(QStringLiteral("empSalary"));
        empSalary->setGeometry(QRect(550, 440, 240, 32));
        empSalary->setFont(font1);
        empSalary->setStyleSheet(QLatin1String("#empSalary\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empDept = new QComboBox(addEmpWidget);
        empDept->setObjectName(QStringLiteral("empDept"));
        empDept->setGeometry(QRect(30, 365, 240, 32));
        empDept->setFont(font1);
        empDept->setStyleSheet(QLatin1String("#empDept\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empDOJ = new QDateEdit(addEmpWidget);
        empDOJ->setObjectName(QStringLiteral("empDOJ"));
        empDOJ->setGeometry(QRect(290, 440, 240, 32));
        empDOJ->setFont(font1);
        empDOJ->setStyleSheet(QLatin1String("#empDOJ\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_10 = new QLabel(addEmpWidget);
        id_10->setObjectName(QStringLiteral("id_10"));
        id_10->setGeometry(QRect(550, 415, 141, 21));
        id_10->setFont(font2);
        id_12 = new QLabel(addEmpWidget);
        id_12->setObjectName(QStringLiteral("id_12"));
        id_12->setGeometry(QRect(30, 340, 141, 21));
        id_12->setFont(font2);
        label_19 = new QLabel(addEmpWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 295, 241, 31));
        label_19->setFont(font3);
        empDesig = new QComboBox(addEmpWidget);
        empDesig->setObjectName(QStringLiteral("empDesig"));
        empDesig->setGeometry(QRect(290, 365, 240, 32));
        empDesig->setFont(font1);
        empDesig->setStyleSheet(QLatin1String("#empDesig\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_14 = new QLabel(addEmpWidget);
        id_14->setObjectName(QStringLiteral("id_14"));
        id_14->setGeometry(QRect(290, 340, 141, 21));
        id_14->setFont(font2);
        empType = new QComboBox(addEmpWidget);
        empType->setObjectName(QStringLiteral("empType"));
        empType->setGeometry(QRect(550, 365, 240, 32));
        empType->setFont(font1);
        empType->setStyleSheet(QLatin1String("#empType\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_13 = new QLabel(addEmpWidget);
        id_13->setObjectName(QStringLiteral("id_13"));
        id_13->setGeometry(QRect(550, 340, 141, 21));
        id_13->setFont(font2);
        pushButton_6 = new QPushButton(addEmpWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(470, 500, 150, 32));
        QFont font4;
        font4.setPointSize(10);
        pushButton_6->setFont(font4);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setFocusPolicy(Qt::TabFocus);
        pushButton_6->setStyleSheet(QLatin1String("#pushButton_6\n"
"{\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_6:hover\n"
"{\n"
"	background:#2d2d2d;\n"
"	border:2px solid #EC3245;\n"
"	color:#EC3245;\n"
"}"));
        pushButton_5 = new QPushButton(addEmpWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(640, 500, 150, 32));
        pushButton_5->setFont(font4);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setFocusPolicy(Qt::TabFocus);
        pushButton_5->setStyleSheet(QLatin1String("#pushButton_5\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_5:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        pushButton_2 = new QPushButton(addEmpWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 440, 41, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("#pushButton_2\n"
"{\n"
"	border:none;\n"
"	background:white;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/id_card.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));
        searchStackedWidget->addWidget(addEmpWidget);
        updateEmpWidget = new QWidget();
        updateEmpWidget->setObjectName(QStringLiteral("updateEmpWidget"));
        updateEmpWidget->setStyleSheet(QLatin1String("#updateEmpWidget\n"
"{\n"
"	background:#2D2D2D;\n"
"}\n"
"\n"
""));
        updateEmpName = new QLineEdit(updateEmpWidget);
        updateEmpName->setObjectName(QStringLiteral("updateEmpName"));
        updateEmpName->setGeometry(QRect(410, 90, 381, 32));
        updateEmpName->setFont(font1);
        updateEmpName->setStyleSheet(QStringLiteral(""));
        id_15 = new QLabel(updateEmpWidget);
        id_15->setObjectName(QStringLiteral("id_15"));
        id_15->setGeometry(QRect(410, 65, 141, 21));
        id_15->setFont(font2);
        id_16 = new QLabel(updateEmpWidget);
        id_16->setObjectName(QStringLiteral("id_16"));
        id_16->setGeometry(QRect(410, 345, 141, 21));
        id_16->setFont(font2);
        id_17 = new QLabel(updateEmpWidget);
        id_17->setObjectName(QStringLiteral("id_17"));
        id_17->setGeometry(QRect(410, 205, 141, 21));
        id_17->setFont(font2);
        updateEmpGender = new QComboBox(updateEmpWidget);
        updateEmpGender->setObjectName(QStringLiteral("updateEmpGender"));
        updateEmpGender->setGeometry(QRect(410, 230, 180, 32));
        updateEmpGender->setFont(font1);
        updateEmpGender->setStyleSheet(QLatin1String("#empDesig\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_19 = new QLabel(updateEmpWidget);
        id_19->setObjectName(QStringLiteral("id_19"));
        id_19->setGeometry(QRect(610, 205, 141, 21));
        id_19->setFont(font2);
        id_18 = new QLabel(updateEmpWidget);
        id_18->setObjectName(QStringLiteral("id_18"));
        id_18->setGeometry(QRect(410, 275, 141, 21));
        id_18->setFont(font2);
        updateEmpPhone = new QLineEdit(updateEmpWidget);
        updateEmpPhone->setObjectName(QStringLiteral("updateEmpPhone"));
        updateEmpPhone->setGeometry(QRect(410, 300, 381, 32));
        updateEmpPhone->setFont(font1);
        updateEmpPhone->setStyleSheet(QStringLiteral(""));
        updateEmpEmail = new QLineEdit(updateEmpWidget);
        updateEmpEmail->setObjectName(QStringLiteral("updateEmpEmail"));
        updateEmpEmail->setGeometry(QRect(410, 370, 381, 32));
        updateEmpEmail->setFont(font1);
        updateEmpEmail->setStyleSheet(QStringLiteral(""));
        updateEmpAddress = new QLineEdit(updateEmpWidget);
        updateEmpAddress->setObjectName(QStringLiteral("updateEmpAddress"));
        updateEmpAddress->setGeometry(QRect(410, 440, 381, 32));
        updateEmpAddress->setFont(font1);
        updateEmpAddress->setStyleSheet(QStringLiteral(""));
        id_20 = new QLabel(updateEmpWidget);
        id_20->setObjectName(QStringLiteral("id_20"));
        id_20->setGeometry(QRect(410, 415, 141, 21));
        id_20->setFont(font2);
        id_21 = new QLabel(updateEmpWidget);
        id_21->setObjectName(QStringLiteral("id_21"));
        id_21->setGeometry(QRect(410, 135, 141, 21));
        id_21->setFont(font2);
        updateEmpFName = new QLineEdit(updateEmpWidget);
        updateEmpFName->setObjectName(QStringLiteral("updateEmpFName"));
        updateEmpFName->setGeometry(QRect(410, 160, 381, 32));
        updateEmpFName->setFont(font1);
        updateEmpFName->setStyleSheet(QStringLiteral(""));
        pushButton_7 = new QPushButton(updateEmpWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(640, 500, 150, 32));
        pushButton_7->setFont(font4);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setFocusPolicy(Qt::TabFocus);
        pushButton_7->setStyleSheet(QLatin1String("#pushButton_7\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_7:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        pushButton_8 = new QPushButton(updateEmpWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(470, 500, 150, 32));
        pushButton_8->setFont(font4);
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setFocusPolicy(Qt::TabFocus);
        pushButton_8->setStyleSheet(QLatin1String("#pushButton_8\n"
"{\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_8:hover\n"
"{\n"
"	background:#2d2d2d;\n"
"	border:2px solid #EC3245;\n"
"	color:#EC3245;\n"
"}"));
        label_20 = new QLabel(updateEmpWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(410, 23, 81, 31));
        label_20->setFont(font3);
        updateEmpDOB = new QDateEdit(updateEmpWidget);
        updateEmpDOB->setObjectName(QStringLiteral("updateEmpDOB"));
        updateEmpDOB->setGeometry(QRect(610, 230, 181, 32));
        updateEmpDOB->setFont(font1);
        updateEmpDOB->setStyleSheet(QLatin1String("#updateEmpDOB\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        updateTableView = new QTableView(updateEmpWidget);
        updateTableView->setObjectName(QStringLiteral("updateTableView"));
        updateTableView->setGeometry(QRect(30, 65, 361, 465));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(updateTableView->sizePolicy().hasHeightForWidth());
        updateTableView->setSizePolicy(sizePolicy);
        updateTableView->setFocusPolicy(Qt::NoFocus);
        updateTableView->setAutoFillBackground(false);
        updateTableView->setFrameShape(QFrame::NoFrame);
        updateTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        updateTableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        updateTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        updateTableView->setTabKeyNavigation(false);
        updateTableView->setProperty("showDropIndicator", QVariant(false));
        updateTableView->setDragDropOverwriteMode(false);
        updateTableView->setAlternatingRowColors(true);
        updateTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        updateTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        updateTableView->setTextElideMode(Qt::ElideNone);
        updateTableView->setShowGrid(false);
        updateTableView->setGridStyle(Qt::NoPen);
        updateTableView->setCornerButtonEnabled(false);
        updateTableView->horizontalHeader()->setVisible(false);
        updateTableView->horizontalHeader()->setDefaultSectionSize(120);
        updateTableView->horizontalHeader()->setMinimumSectionSize(30);
        label_26 = new QLabel(updateEmpWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(30, 30, 131, 34));
        label_26->setFont(font2);
        label_26->setStyleSheet(QLatin1String("#label_26\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));
        label_27 = new QLabel(updateEmpWidget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(160, 30, 120, 34));
        label_27->setFont(font2);
        label_27->setStyleSheet(QLatin1String("#label_27\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"	padding-left:5px;\n"
"}"));
        label_28 = new QLabel(updateEmpWidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(280, 30, 111, 34));
        label_28->setFont(font2);
        label_28->setStyleSheet(QLatin1String("#label_28\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"	padding-left:3px;\n"
"}"));
        updateEmpID = new QLabel(updateEmpWidget);
        updateEmpID->setObjectName(QStringLiteral("updateEmpID"));
        updateEmpID->setGeometry(QRect(485, 23, 191, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        font5.setPointSize(11);
        font5.setItalic(true);
        updateEmpID->setFont(font5);
        updateEmpID->setStyleSheet(QLatin1String("color:white;\n"
"font-style:italic;"));
        searchStackedWidget->addWidget(updateEmpWidget);
        deleteEmpWidget = new QWidget();
        deleteEmpWidget->setObjectName(QStringLiteral("deleteEmpWidget"));
        deleteEmpWidget->setStyleSheet(QLatin1String("#deleteEmpWidget\n"
"{\n"
"	background:#2D2D2D;\n"
"}\n"
"\n"
""));
        deleteTableView = new QTableView(deleteEmpWidget);
        deleteTableView->setObjectName(QStringLiteral("deleteTableView"));
        deleteTableView->setGeometry(QRect(33, 65, 755, 426));
        sizePolicy.setHeightForWidth(deleteTableView->sizePolicy().hasHeightForWidth());
        deleteTableView->setSizePolicy(sizePolicy);
        deleteTableView->setFocusPolicy(Qt::NoFocus);
        deleteTableView->setAutoFillBackground(false);
        deleteTableView->setFrameShape(QFrame::NoFrame);
        deleteTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        deleteTableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        deleteTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        deleteTableView->setTabKeyNavigation(false);
        deleteTableView->setProperty("showDropIndicator", QVariant(false));
        deleteTableView->setDragDropOverwriteMode(false);
        deleteTableView->setAlternatingRowColors(true);
        deleteTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        deleteTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        deleteTableView->setTextElideMode(Qt::ElideNone);
        deleteTableView->setShowGrid(false);
        deleteTableView->setGridStyle(Qt::NoPen);
        deleteTableView->setCornerButtonEnabled(false);
        deleteTableView->horizontalHeader()->setVisible(false);
        deleteTableView->horizontalHeader()->setDefaultSectionSize(120);
        deleteTableView->horizontalHeader()->setMinimumSectionSize(30);
        label_29 = new QLabel(deleteEmpWidget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(33, 30, 135, 34));
        label_29->setFont(font2);
        label_29->setStyleSheet(QLatin1String("#label_29\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));
        label_30 = new QLabel(deleteEmpWidget);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(167, 30, 120, 34));
        label_30->setFont(font2);
        label_30->setStyleSheet(QLatin1String("#label_30\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"	padding-left:5px;\n"
"}"));
        label_31 = new QLabel(deleteEmpWidget);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(287, 30, 125, 34));
        label_31->setFont(font2);
        label_31->setStyleSheet(QLatin1String("#label_31\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"	padding-left:3px;\n"
"}"));
        label_32 = new QLabel(deleteEmpWidget);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(530, 30, 122, 34));
        label_32->setFont(font2);
        label_32->setStyleSheet(QLatin1String("#label_32\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"}"));
        label_33 = new QLabel(deleteEmpWidget);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(410, 30, 120, 34));
        label_33->setFont(font2);
        label_33->setStyleSheet(QLatin1String("#label_33\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"}"));
        label_34 = new QLabel(deleteEmpWidget);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(652, 30, 137, 34));
        label_34->setFont(font2);
        label_34->setStyleSheet(QLatin1String("#label_34\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"}"));
        pushButton_3 = new QPushButton(deleteEmpWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(640, 500, 150, 34));
        pushButton_3->setFont(font4);
        pushButton_3->setStyleSheet(QLatin1String("#pushButton_3\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_3:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        searchStackedWidget->addWidget(deleteEmpWidget);

        retranslateUi(Employee);

        searchStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Employee);
    } // setupUi

    void retranslateUi(QWidget *Employee)
    {
        Employee->setWindowTitle(QApplication::translate("Employee", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Employee", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Employee", "Login", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Employee", "Nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Employee", "Prenom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Employee", "Poste", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Employee", "Salaire", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Employee", "Temps d'entree", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Employee", "Temps de Sortie", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem13->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem14->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem15->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem16->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem17->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem18->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem19->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem20->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem21->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem22->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem23->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem24->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem25->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem26->setText(QApplication::translate("Employee", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->verticalHeaderItem(19);
        ___qtablewidgetitem27->setText(QApplication::translate("Employee", "2", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        add_btn->setText(QApplication::translate("Employee", "Add", Q_NULLPTR));
        id->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Name</span></p></body></html>", Q_NULLPTR));
        label_18->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#55aaff;\">Personal Info</span></p></body></html>", Q_NULLPTR));
        id_2->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Father's Name</span></p></body></html>", Q_NULLPTR));
        id_3->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Date of Birth</span></p></body></html>", Q_NULLPTR));
        id_4->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Gender</span></p></body></html>", Q_NULLPTR));
        empGender->clear();
        empGender->insertItems(0, QStringList()
         << QApplication::translate("Employee", "Male", Q_NULLPTR)
         << QApplication::translate("Employee", "Female", Q_NULLPTR)
         << QApplication::translate("Employee", "Other", Q_NULLPTR)
        );
        id_5->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Email</span></p></body></html>", Q_NULLPTR));
        id_6->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Phone No</span></p></body></html>", Q_NULLPTR));
        id_7->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Address</span></p></body></html>", Q_NULLPTR));
        id_8->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Date of Joining</span></p></body></html>", Q_NULLPTR));
        id_9->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Employee ID</span></p></body></html>", Q_NULLPTR));
        empDept->clear();
        empDept->insertItems(0, QStringList()
         << QApplication::translate("Employee", "Male", Q_NULLPTR)
         << QApplication::translate("Employee", "Female", Q_NULLPTR)
         << QApplication::translate("Employee", "Other", Q_NULLPTR)
        );
        id_10->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Joining Salary (in \342\202\271)</span></p></body></html>", Q_NULLPTR));
        id_12->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Department</span></p></body></html>", Q_NULLPTR));
        label_19->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#55aaff;\">Company Info</span></p></body></html>", Q_NULLPTR));
        empDesig->clear();
        empDesig->insertItems(0, QStringList()
         << QApplication::translate("Employee", "Male", Q_NULLPTR)
         << QApplication::translate("Employee", "Female", Q_NULLPTR)
         << QApplication::translate("Employee", "Other", Q_NULLPTR)
        );
        id_14->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Designation</span></p></body></html>", Q_NULLPTR));
        empType->clear();
        empType->insertItems(0, QStringList()
         << QApplication::translate("Employee", "Fresher", Q_NULLPTR)
         << QApplication::translate("Employee", "Experienced", Q_NULLPTR)
        );
        id_13->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Fresher/Experienced</span></p></body></html>", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Employee", "Clear", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Employee", "Submit", Q_NULLPTR));
        pushButton_2->setText(QString());
        id_15->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Name</span></p></body></html>", Q_NULLPTR));
        id_16->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Email</span></p></body></html>", Q_NULLPTR));
        id_17->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Gender</span></p></body></html>", Q_NULLPTR));
        updateEmpGender->clear();
        updateEmpGender->insertItems(0, QStringList()
         << QApplication::translate("Employee", "Male", Q_NULLPTR)
         << QApplication::translate("Employee", "Female", Q_NULLPTR)
         << QApplication::translate("Employee", "Other", Q_NULLPTR)
        );
        id_19->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Date of Birth</span></p></body></html>", Q_NULLPTR));
        id_18->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Phone No</span></p></body></html>", Q_NULLPTR));
        id_20->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Address</span></p></body></html>", Q_NULLPTR));
        id_21->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" color:#ffffff;\">Father's Name</span></p></body></html>", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Employee", "Update", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Employee", "Clear", Q_NULLPTR));
        label_20->setText(QApplication::translate("Employee", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#00aaff;\">Edit Info</span><span style=\" font-style:italic; color:#00aaff;\"> : </span></p></body></html>", Q_NULLPTR));
        label_26->setText(QApplication::translate("Employee", "<html><head/><body><p>    Employee ID</p></body></html>", Q_NULLPTR));
        label_27->setText(QApplication::translate("Employee", "<html><head/><body><p>Name</p></body></html>", Q_NULLPTR));
        label_28->setText(QApplication::translate("Employee", "<html><head/><body><p>Department</p></body></html>", Q_NULLPTR));
        updateEmpID->setText(QApplication::translate("Employee", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        label_29->setText(QApplication::translate("Employee", "<html><head/><body><p>    Employee ID</p></body></html>", Q_NULLPTR));
        label_30->setText(QApplication::translate("Employee", "<html><head/><body><p>Name</p></body></html>", Q_NULLPTR));
        label_31->setText(QApplication::translate("Employee", "<html><head/><body><p>Department</p></body></html>", Q_NULLPTR));
        label_32->setText(QApplication::translate("Employee", "<html><head/><body><p>Phone</p></body></html>", Q_NULLPTR));
        label_33->setText(QApplication::translate("Employee", "<html><head/><body><p>Designation</p></body></html>", Q_NULLPTR));
        label_34->setText(QApplication::translate("Employee", "<html><head/><body><p>Email</p></body></html>", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Employee", "Refresh", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Employee: public Ui_Employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H
