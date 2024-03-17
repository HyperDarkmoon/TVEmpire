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
    QWidget *result_widget;
    QPushButton *add_btn;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QLineEdit *search_input;
    QPushButton *pushButton_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *title_label;

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
        Sponsor->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #FFF5E0; /* Initially transparent background */\n"
"    color: black;\n"
"\n"
"    border-radius: 10px;\n"
"    padding: 10px 20px;\n"
"    font-weight: bold;\n"
"    font-family: Calibri, sans-serif;\n"
"}\n"
"/* Hover effect */\n"
"QPushButton:hover {\n"
"    background-color: #FFF5E0;\n"
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
"QPushButton:checked {\n"
"    background-color: #64a1c2; /* Your desired color */\n"
"    border: none; /* Remove the border if needed */\n"
"}\n"
""));
        result_widget = new QWidget(Sponsor);
        result_widget->setObjectName(QStringLiteral("result_widget"));
        result_widget->setGeometry(QRect(60, 170, 1301, 971));
        result_widget->setBaseSize(QSize(400, 400));
        add_btn = new QPushButton(result_widget);
        add_btn->setObjectName(QStringLiteral("add_btn"));
        add_btn->setGeometry(QRect(90, 410, 171, 41));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Users/moham/Desktop/icons/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        add_btn->setIcon(icon);
        add_btn->setIconSize(QSize(20, 20));
        label_5 = new QLabel(result_widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 100, 351, 401));
        label_5->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: white;\n"
"    border: 2px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 5px 10px;\n"
"    color: black;\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(result_widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 110, 171, 41));
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
        label_4 = new QLabel(result_widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 110, 31, 49));
        label_4->setStyleSheet(QLatin1String("color: black\n"
""));
        lineEdit_3 = new QLineEdit(result_widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 180, 171, 41));
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
        lineEdit = new QLineEdit(result_widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 260, 171, 41));
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
        comboBox = new QComboBox(result_widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(100, 350, 171, 31));
        comboBox->setStyleSheet(QLatin1String("QcomboBox {\n"
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
        label = new QLabel(result_widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 190, 61, 20));
        label->setStyleSheet(QLatin1String("color: black\n"
""));
        label_2 = new QLabel(result_widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 270, 60, 17));
        label_2->setStyleSheet(QStringLiteral("color: black"));
        label_3 = new QLabel(result_widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 350, 81, 31));
        label_3->setStyleSheet(QStringLiteral("color: black"));
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
        tableWidget->setGeometry(QRect(360, 70, 961, 471));
        tableWidget->setBaseSize(QSize(0, 0));
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
"    padding: 0px; /* Header padding */\n"
"    border:2px solid #2c3e50; /* Header border color */\n"
" border-radius: 0px\n"
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
"QTableWidget:"
                        ":item:alternate {\n"
"    background-color: #2c3e50; /* Darker blue even row background color */\n"
"}\n"
"\n"
"/* Apply styles when an item is selected in the QTableWidget */\n"
"QTableWidget QTableWidget::item:selected {\n"
"    background-color: #3498db; /* Selected item background color (a slightly lighter blue) */\n"
"    color: black; /* Selected item text color */\n"
"}"));
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
        pushButton = new QPushButton(result_widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1150, 20, 51, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../Downloads/format-de-fichier-pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(40, 40));
        search_input = new QLineEdit(result_widget);
        search_input->setObjectName(QStringLiteral("search_input"));
        search_input->setGeometry(QRect(610, 31, 291, 21));
        pushButton_2 = new QPushButton(result_widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1220, 17, 51, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../Downloads/charte-de-croissance.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        label_5->raise();
        lineEdit_2->raise();
        label_4->raise();
        lineEdit_3->raise();
        lineEdit->raise();
        comboBox->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        tableWidget->raise();
        pushButton->raise();
        search_input->raise();
        add_btn->raise();
        pushButton_2->raise();
        frame_3 = new QFrame(Sponsor);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 6, 914, 69));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        title_label = new QLabel(Sponsor);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setGeometry(QRect(320, 10, 894, 49));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto Black"));
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        title_label->setFont(font1);
        title_label->setStyleSheet(QStringLiteral("color: #F1F1F1"));
        title_label->setAlignment(Qt::AlignCenter);

        retranslateUi(Sponsor);

        QMetaObject::connectSlotsByName(Sponsor);
    } // setupUi

    void retranslateUi(QWidget *Sponsor)
    {
        Sponsor->setWindowTitle(QApplication::translate("Sponsor", "Form", Q_NULLPTR));
        add_btn->setText(QApplication::translate("Sponsor", "Add", Q_NULLPTR));
        label_5->setText(QString());
        label_4->setText(QApplication::translate("Sponsor", "Nom", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Sponsor", "test1", Q_NULLPTR)
         << QApplication::translate("Sponsor", "test2", Q_NULLPTR)
         << QApplication::translate("Sponsor", "test3", Q_NULLPTR)
        );
        label->setText(QApplication::translate("Sponsor", "telephone", Q_NULLPTR));
        label_2->setText(QApplication::translate("Sponsor", "email", Q_NULLPTR));
        label_3->setText(QApplication::translate("Sponsor", "categories", Q_NULLPTR));
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
        pushButton->setText(QString());
        search_input->setPlaceholderText(QApplication::translate("Sponsor", "Search...", Q_NULLPTR));
        pushButton_2->setText(QString());
        title_label->setText(QApplication::translate("Sponsor", "Liste des sponsors", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Sponsor: public Ui_Sponsor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPONSOR_H
