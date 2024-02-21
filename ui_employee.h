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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Employee
{
public:
    QStackedWidget *searchStackedWidget;
    QWidget *searchWidget;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *searchTextBox;
    QPushButton *pushButton;
    QTableView *tableView;
    QLabel *label_8;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QPushButton *addEmpButton;
    QLabel *label_35;
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
        label_4 = new QLabel(searchWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(36, 30, 241, 136));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Images/empcardbg.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(searchWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(296, 30, 238, 136));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Images/attendancebg.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(searchWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(570, 30, 241, 136));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Images/absentbg.png")));
        label_6->setScaledContents(true);
        searchTextBox = new QLineEdit(searchWidget);
        searchTextBox->setObjectName(QStringLiteral("searchTextBox"));
        searchTextBox->setGeometry(QRect(40, 190, 871, 32));
        QFont font;
        font.setPointSize(10);
        searchTextBox->setFont(font);
        searchTextBox->setStyleSheet(QLatin1String("#searchTextBox\n"
"{\n"
"	padding-left:8px;\n"
"	border:none;\n"
"}"));
        pushButton = new QPushButton(searchWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(870, 190, 40, 32));
        QFont font1;
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("#pushButton\n"
"{\n"
"	border:none;\n"
"	color:black;\n"
"background:white;\n"
"}\n"
"#pushButton:hover\n"
"{\n"
"	border:none;\n"
"	color:red;\n"
"background:white;\n"
"}"));
        tableView = new QTableView(searchWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 260, 871, 271));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setFocusPolicy(Qt::NoFocus);
        tableView->setAutoFillBackground(false);
        tableView->setFrameShape(QFrame::NoFrame);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setTabKeyNavigation(false);
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setDragDropOverwriteMode(false);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setTextElideMode(Qt::ElideNone);
        tableView->setShowGrid(false);
        tableView->setGridStyle(Qt::NoPen);
        tableView->setCornerButtonEnabled(false);
        tableView->horizontalHeader()->setVisible(false);
        tableView->horizontalHeader()->setDefaultSectionSize(120);
        tableView->horizontalHeader()->setMinimumSectionSize(30);
        label_8 = new QLabel(searchWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 225, 131, 34));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_8->setFont(font2);
        label_8->setStyleSheet(QLatin1String("#label_8\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));
        label_21 = new QLabel(searchWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(170, 225, 120, 34));
        label_21->setFont(font2);
        label_21->setStyleSheet(QLatin1String("#label_21\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"	padding-left:5px;\n"
"}"));
        label_22 = new QLabel(searchWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(290, 225, 125, 34));
        label_22->setFont(font2);
        label_22->setStyleSheet(QLatin1String("#label_22\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"	padding-left:3px;\n"
"}"));
        label_23 = new QLabel(searchWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(413, 225, 120, 34));
        label_23->setFont(font2);
        label_23->setStyleSheet(QLatin1String("#label_23\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"}"));
        label_24 = new QLabel(searchWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(533, 225, 122, 34));
        label_24->setFont(font2);
        label_24->setStyleSheet(QLatin1String("#label_24\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"}"));
        label_25 = new QLabel(searchWidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(655, 225, 261, 34));
        label_25->setFont(font2);
        label_25->setStyleSheet(QLatin1String("#label_25\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"}"));
        addEmpButton = new QPushButton(searchWidget);
        addEmpButton->setObjectName(QStringLiteral("addEmpButton"));
        addEmpButton->setGeometry(QRect(690, 80, 181, 91));
        QFont font3;
        font3.setPointSize(11);
        addEmpButton->setFont(font3);
        addEmpButton->setLayoutDirection(Qt::LeftToRight);
        addEmpButton->setStyleSheet(QLatin1String("#addEmpButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#addEmpButton:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/icons8_Add_User_Male_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        addEmpButton->setIcon(icon);
        addEmpButton->setIconSize(QSize(32, 32));
        label_35 = new QLabel(searchWidget);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(790, 225, 130, 34));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        QBrush brush3(QColor(45, 45, 45, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        label_35->setPalette(palette);
        label_35->setFont(font2);
        label_35->setStyleSheet(QLatin1String("#label_25\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"}"));
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
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(10);
        empName->setFont(font4);
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
        empFather->setFont(font4);
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
        id->setFont(font2);
        label_18 = new QLabel(addEmpWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 20, 241, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        label_18->setFont(font5);
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
        empDOB->setFont(font4);
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
        empGender->setFont(font4);
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
        empEmail->setFont(font4);
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
        empPhone->setFont(font4);
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
        empAddress->setFont(font4);
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
        empID->setFont(font4);
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
        empSalary->setFont(font4);
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
        empDept->setFont(font4);
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
        empDOJ->setFont(font4);
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
        label_19->setFont(font5);
        empDesig = new QComboBox(addEmpWidget);
        empDesig->setObjectName(QStringLiteral("empDesig"));
        empDesig->setGeometry(QRect(290, 365, 240, 32));
        empDesig->setFont(font4);
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
        empType->setFont(font4);
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
        pushButton_6->setFont(font);
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
        pushButton_5->setFont(font);
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
        updateEmpName->setFont(font4);
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
        updateEmpGender->setFont(font4);
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
        updateEmpPhone->setFont(font4);
        updateEmpPhone->setStyleSheet(QStringLiteral(""));
        updateEmpEmail = new QLineEdit(updateEmpWidget);
        updateEmpEmail->setObjectName(QStringLiteral("updateEmpEmail"));
        updateEmpEmail->setGeometry(QRect(410, 370, 381, 32));
        updateEmpEmail->setFont(font4);
        updateEmpEmail->setStyleSheet(QStringLiteral(""));
        updateEmpAddress = new QLineEdit(updateEmpWidget);
        updateEmpAddress->setObjectName(QStringLiteral("updateEmpAddress"));
        updateEmpAddress->setGeometry(QRect(410, 440, 381, 32));
        updateEmpAddress->setFont(font4);
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
        updateEmpFName->setFont(font4);
        updateEmpFName->setStyleSheet(QStringLiteral(""));
        pushButton_7 = new QPushButton(updateEmpWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(640, 500, 150, 32));
        pushButton_7->setFont(font);
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
        pushButton_8->setFont(font);
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
        label_20->setFont(font5);
        updateEmpDOB = new QDateEdit(updateEmpWidget);
        updateEmpDOB->setObjectName(QStringLiteral("updateEmpDOB"));
        updateEmpDOB->setGeometry(QRect(610, 230, 181, 32));
        updateEmpDOB->setFont(font4);
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
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setPointSize(11);
        font6.setItalic(true);
        updateEmpID->setFont(font6);
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
        pushButton_3->setFont(font);
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
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        searchTextBox->setPlaceholderText(QApplication::translate("Employee", "Search", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Employee", "\303\227", Q_NULLPTR));
        label_8->setText(QApplication::translate("Employee", "<html><head/><body><p>    Employee ID</p></body></html>", Q_NULLPTR));
        label_21->setText(QApplication::translate("Employee", "<html><head/><body><p>Name</p></body></html>", Q_NULLPTR));
        label_22->setText(QApplication::translate("Employee", "<html><head/><body><p>Prenom</p></body></html>", Q_NULLPTR));
        label_23->setText(QApplication::translate("Employee", "<html><head/><body><p>Poste</p></body></html>", Q_NULLPTR));
        label_24->setText(QApplication::translate("Employee", "<html><head/><body><p>Salaire</p></body></html>", Q_NULLPTR));
        label_25->setText(QApplication::translate("Employee", "<html><head/><body><p>TempsEntree</p></body></html>", Q_NULLPTR));
        addEmpButton->setText(QApplication::translate("Employee", "  Add Employee", Q_NULLPTR));
        label_35->setText(QApplication::translate("Employee", "<html><head/><body><p>TempsSortie</p></body></html>", Q_NULLPTR));
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
