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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
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
    QFrame *result_frame;
    QTableWidget *tableWidget;
    QFrame *info_frame;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *title_label;
    QFrame *function_frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *add_btn;
    QPushButton *update_btn;
    QPushButton *select_btn;
    QPushButton *search_btn;
    QPushButton *clear_btn;
    QPushButton *delete_btn;

    void setupUi(QWidget *Sponsor)
    {
        if (Sponsor->objectName().isEmpty())
            Sponsor->setObjectName(QStringLiteral("Sponsor"));
        Sponsor->setEnabled(true);
        Sponsor->resize(1074, 587);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
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
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
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
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
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
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        Sponsor->setPalette(palette);
        Sponsor->setAutoFillBackground(true);
        Sponsor->setStyleSheet(QStringLiteral(""));
        result_frame = new QFrame(Sponsor);
        result_frame->setObjectName(QStringLiteral("result_frame"));
        result_frame->setGeometry(QRect(-50, 190, 1071, 401));
        result_frame->setFrameShape(QFrame::StyledPanel);
        result_frame->setFrameShadow(QFrame::Raised);
        tableWidget = new QTableWidget(result_frame);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 21)
            tableWidget->setRowCount(21);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(17, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(18, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(19, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(20, __qtablewidgetitem23);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(140, 10, 911, 381));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush9(QColor(127, 127, 127, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush9);
        QBrush brush10(QColor(170, 170, 170, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush11(QColor(240, 240, 240, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        tableWidget->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        tableWidget->setFont(font);
        tableWidget->setFocusPolicy(Qt::NoFocus);
        tableWidget->setStyleSheet(QLatin1String("QTableWidget {\n"
"    alternate-background-color: #f0f0f0; /* Alternate row background color */\n"
"    background-color: white; /* Default background color of the table */\n"
"    border: 1px solid #2c3e50; /* Table border color */\n"
"    font-family: \"Arial\"; /* Set the font family */\n"
"    font-size: 12px; /* Set the font size */\n"
"   border-radius: 20px;\n"
"}\n"
"\n"
"/* Apply styles to the header of the QTableWidget */\n"
"QHeaderView::section {\n"
"    background-color: #15406e; /* Darker blue header background color */\n"
"    color: white; /* Header text color */\n"
"    padding: 4px; /* Header padding */\n"
"    border: 1px solid #2c3e50; /* Header border color */\n"
"  border-radius: 20px;\n"
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
"}\n"
"\n"
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
        info_frame = new QFrame(Sponsor);
        info_frame->setObjectName(QStringLiteral("info_frame"));
        info_frame->setGeometry(QRect(70, 70, 921, 71));
        info_frame->setFrameShape(QFrame::StyledPanel);
        info_frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(info_frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(450, 40, 23, 20));
        label_4->setStyleSheet(QStringLiteral("color: #F1F1F1"));
        lineEdit_2 = new QLineEdit(info_frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(500, 40, 211, 20));
        frame_3 = new QFrame(Sponsor);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 6, 914, 69));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        title_label = new QLabel(frame_3);
        title_label->setObjectName(QStringLiteral("title_label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto Black"));
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        title_label->setFont(font1);
        title_label->setStyleSheet(QStringLiteral("color: #F1F1F1"));
        title_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(title_label);

        function_frame = new QFrame(Sponsor);
        function_frame->setObjectName(QStringLiteral("function_frame"));
        function_frame->setGeometry(QRect(50, 150, 914, 55));
        function_frame->setFrameShape(QFrame::StyledPanel);
        function_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(function_frame);
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, 10, 30, 10);
        add_btn = new QPushButton(function_frame);
        add_btn->setObjectName(QStringLiteral("add_btn"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Users/moham/Desktop/icons/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        add_btn->setIcon(icon);
        add_btn->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(add_btn);

        update_btn = new QPushButton(function_frame);
        update_btn->setObjectName(QStringLiteral("update_btn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../Users/moham/Desktop/icons/update.svg"), QSize(), QIcon::Normal, QIcon::Off);
        update_btn->setIcon(icon1);
        update_btn->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(update_btn);

        select_btn = new QPushButton(function_frame);
        select_btn->setObjectName(QStringLiteral("select_btn"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../Users/moham/Desktop/icons/select.svg"), QSize(), QIcon::Normal, QIcon::Off);
        select_btn->setIcon(icon2);
        select_btn->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(select_btn);

        search_btn = new QPushButton(function_frame);
        search_btn->setObjectName(QStringLiteral("search_btn"));
        search_btn->setStyleSheet(QStringLiteral("background : #F1F1F1;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../../Users/moham/Desktop/icons/search.svg"), QSize(), QIcon::Normal, QIcon::Off);
        search_btn->setIcon(icon3);
        search_btn->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(search_btn);

        clear_btn = new QPushButton(function_frame);
        clear_btn->setObjectName(QStringLiteral("clear_btn"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../../Users/moham/Desktop/icons/clear.svg"), QSize(), QIcon::Normal, QIcon::Off);
        clear_btn->setIcon(icon4);
        clear_btn->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(clear_btn);

        delete_btn = new QPushButton(function_frame);
        delete_btn->setObjectName(QStringLiteral("delete_btn"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../../Users/moham/Desktop/icons/delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        delete_btn->setIcon(icon5);
        delete_btn->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(delete_btn);


        retranslateUi(Sponsor);

        QMetaObject::connectSlotsByName(Sponsor);
    } // setupUi

    void retranslateUi(QWidget *Sponsor)
    {
        Sponsor->setWindowTitle(QApplication::translate("Sponsor", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Sponsor", "New Column", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Sponsor", "Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Sponsor", "Nom ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("Sponsor", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem14->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem15->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem16->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem17->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem18->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem19->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem20->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem21->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->verticalHeaderItem(19);
        ___qtablewidgetitem22->setText(QApplication::translate("Sponsor", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->verticalHeaderItem(20);
        ___qtablewidgetitem23->setText(QApplication::translate("Sponsor", "2", Q_NULLPTR));
        label_4->setText(QApplication::translate("Sponsor", "Nom", Q_NULLPTR));
        title_label->setText(QApplication::translate("Sponsor", "Liste des sponsors", Q_NULLPTR));
        add_btn->setText(QApplication::translate("Sponsor", "Add", Q_NULLPTR));
        update_btn->setText(QApplication::translate("Sponsor", "Update", Q_NULLPTR));
        select_btn->setText(QApplication::translate("Sponsor", "Select", Q_NULLPTR));
        search_btn->setText(QApplication::translate("Sponsor", "Search", Q_NULLPTR));
        clear_btn->setText(QApplication::translate("Sponsor", "Clear", Q_NULLPTR));
        delete_btn->setText(QApplication::translate("Sponsor", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Sponsor: public Ui_Sponsor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPONSOR_H
