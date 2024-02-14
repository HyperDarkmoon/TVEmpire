/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "emission.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *icon_only_widget;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *logo_label_1;
    QVBoxLayout *verticalLayout;
    QPushButton *home_btn_1;
    QPushButton *dashborad_btn_1;
    QPushButton *orders_btn_1;
    QPushButton *products_btn_1;
    QPushButton *customers_btn_1;
    QPushButton *customers_btn_3;
    QSpacerItem *verticalSpacer;
    QPushButton *exit_btn_1;
    QWidget *full_menu_widget;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logo_label_2;
    QLabel *logo_label_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *home_btn_2;
    QPushButton *dashborad_btn_2;
    QPushButton *orders_btn_2;
    QPushButton *products_btn_2;
    QPushButton *customers_btn_2;
    QPushButton *customers_btn_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *exit_btn_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *change_btn;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLineEdit *search_input;
    QPushButton *search_btn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *user_btn;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    Emission *page_2;
    QGridLayout *gridLayout_3;
    QWidget *page_3;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QWidget *page_4;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QWidget *page_5;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QWidget *page_6;
    QGridLayout *gridLayout_7;
    QLabel *label_9;
    QWidget *page_7;
    QGridLayout *gridLayout_8;
    QLabel *label_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(950, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        icon_only_widget = new QWidget(centralwidget);
        icon_only_widget->setObjectName(QStringLiteral("icon_only_widget"));
        gridLayout_10 = new QGridLayout(icon_only_widget);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        logo_label_1 = new QLabel(icon_only_widget);
        logo_label_1->setObjectName(QStringLiteral("logo_label_1"));
        logo_label_1->setMinimumSize(QSize(50, 50));
        logo_label_1->setMaximumSize(QSize(50, 50));
        logo_label_1->setPixmap(QPixmap(QString::fromUtf8("hhh.png")));
        logo_label_1->setScaledContents(true);

        horizontalLayout_3->addWidget(logo_label_1);


        gridLayout_10->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        home_btn_1 = new QPushButton(icon_only_widget);
        home_btn_1->setObjectName(QStringLiteral("home_btn_1"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icon/home-4-32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/icon/icon/home-4-48.ico"), QSize(), QIcon::Normal, QIcon::On);
        home_btn_1->setIcon(icon);
        home_btn_1->setIconSize(QSize(20, 20));
        home_btn_1->setCheckable(true);
        home_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(home_btn_1);

        dashborad_btn_1 = new QPushButton(icon_only_widget);
        dashborad_btn_1->setObjectName(QStringLiteral("dashborad_btn_1"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/icon/dashboard-5-32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/icon/icon/dashboard-5-48.ico"), QSize(), QIcon::Normal, QIcon::On);
        dashborad_btn_1->setIcon(icon1);
        dashborad_btn_1->setIconSize(QSize(20, 20));
        dashborad_btn_1->setCheckable(true);
        dashborad_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(dashborad_btn_1);

        orders_btn_1 = new QPushButton(icon_only_widget);
        orders_btn_1->setObjectName(QStringLiteral("orders_btn_1"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/icon/activity-feed-32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/icon/icon/activity-feed-48.ico"), QSize(), QIcon::Normal, QIcon::On);
        orders_btn_1->setIcon(icon2);
        orders_btn_1->setIconSize(QSize(20, 20));
        orders_btn_1->setCheckable(true);
        orders_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(orders_btn_1);

        products_btn_1 = new QPushButton(icon_only_widget);
        products_btn_1->setObjectName(QStringLiteral("products_btn_1"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/icon/product-32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/icon/icon/product-48.ico"), QSize(), QIcon::Normal, QIcon::On);
        products_btn_1->setIcon(icon3);
        products_btn_1->setIconSize(QSize(20, 20));
        products_btn_1->setCheckable(true);
        products_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(products_btn_1);

        customers_btn_1 = new QPushButton(icon_only_widget);
        customers_btn_1->setObjectName(QStringLiteral("customers_btn_1"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/icon/group-32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QStringLiteral(":/icon/icon/group-48.ico"), QSize(), QIcon::Normal, QIcon::On);
        customers_btn_1->setIcon(icon4);
        customers_btn_1->setIconSize(QSize(20, 20));
        customers_btn_1->setCheckable(true);
        customers_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(customers_btn_1);

        customers_btn_3 = new QPushButton(icon_only_widget);
        customers_btn_3->setObjectName(QStringLiteral("customers_btn_3"));
        customers_btn_3->setIcon(icon4);
        customers_btn_3->setIconSize(QSize(20, 20));
        customers_btn_3->setCheckable(true);
        customers_btn_3->setAutoExclusive(true);

        verticalLayout->addWidget(customers_btn_3);


        gridLayout_10->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 375, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer, 2, 0, 1, 1);

        exit_btn_1 = new QPushButton(icon_only_widget);
        exit_btn_1->setObjectName(QStringLiteral("exit_btn_1"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/icon/close-window-64.ico"), QSize(), QIcon::Normal, QIcon::Off);
        exit_btn_1->setIcon(icon5);
        exit_btn_1->setIconSize(QSize(20, 20));

        gridLayout_10->addWidget(exit_btn_1, 3, 0, 1, 1);


        gridLayout->addWidget(icon_only_widget, 0, 0, 1, 1);

        full_menu_widget = new QWidget(centralwidget);
        full_menu_widget->setObjectName(QStringLiteral("full_menu_widget"));
        gridLayout_9 = new QGridLayout(full_menu_widget);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        logo_label_2 = new QLabel(full_menu_widget);
        logo_label_2->setObjectName(QStringLiteral("logo_label_2"));
        logo_label_2->setMinimumSize(QSize(40, 40));
        logo_label_2->setMaximumSize(QSize(40, 40));
        logo_label_2->setPixmap(QPixmap(QString::fromUtf8("hhh.png")));
        logo_label_2->setScaledContents(true);

        horizontalLayout_2->addWidget(logo_label_2);

        logo_label_3 = new QLabel(full_menu_widget);
        logo_label_3->setObjectName(QStringLiteral("logo_label_3"));
        QFont font;
        font.setPointSize(15);
        logo_label_3->setFont(font);

        horizontalLayout_2->addWidget(logo_label_3);


        gridLayout_9->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        home_btn_2 = new QPushButton(full_menu_widget);
        home_btn_2->setObjectName(QStringLiteral("home_btn_2"));
        home_btn_2->setIcon(icon);
        home_btn_2->setIconSize(QSize(14, 14));
        home_btn_2->setCheckable(true);
        home_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(home_btn_2);

        dashborad_btn_2 = new QPushButton(full_menu_widget);
        dashborad_btn_2->setObjectName(QStringLiteral("dashborad_btn_2"));
        dashborad_btn_2->setIcon(icon1);
        dashborad_btn_2->setIconSize(QSize(14, 14));
        dashborad_btn_2->setCheckable(true);
        dashborad_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(dashborad_btn_2);

        orders_btn_2 = new QPushButton(full_menu_widget);
        orders_btn_2->setObjectName(QStringLiteral("orders_btn_2"));
        orders_btn_2->setIcon(icon2);
        orders_btn_2->setIconSize(QSize(14, 14));
        orders_btn_2->setCheckable(true);
        orders_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(orders_btn_2);

        products_btn_2 = new QPushButton(full_menu_widget);
        products_btn_2->setObjectName(QStringLiteral("products_btn_2"));
        products_btn_2->setIcon(icon3);
        products_btn_2->setIconSize(QSize(14, 14));
        products_btn_2->setCheckable(true);
        products_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(products_btn_2);

        customers_btn_2 = new QPushButton(full_menu_widget);
        customers_btn_2->setObjectName(QStringLiteral("customers_btn_2"));
        customers_btn_2->setIcon(icon4);
        customers_btn_2->setIconSize(QSize(14, 14));
        customers_btn_2->setCheckable(true);
        customers_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(customers_btn_2);

        customers_btn_4 = new QPushButton(full_menu_widget);
        customers_btn_4->setObjectName(QStringLiteral("customers_btn_4"));
        customers_btn_4->setIcon(icon4);
        customers_btn_4->setIconSize(QSize(14, 14));
        customers_btn_4->setCheckable(true);
        customers_btn_4->setAutoExclusive(true);

        verticalLayout_2->addWidget(customers_btn_4);


        gridLayout_9->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 373, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_2, 2, 0, 1, 1);

        exit_btn_2 = new QPushButton(full_menu_widget);
        exit_btn_2->setObjectName(QStringLiteral("exit_btn_2"));
        exit_btn_2->setIcon(icon5);
        exit_btn_2->setIconSize(QSize(14, 14));

        gridLayout_9->addWidget(exit_btn_2, 3, 0, 1, 1);


        gridLayout->addWidget(full_menu_widget, 0, 1, 1, 1);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(widget_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 40));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 9, 0);
        change_btn = new QPushButton(widget);
        change_btn->setObjectName(QStringLiteral("change_btn"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/icon/menu-4-32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        change_btn->setIcon(icon6);
        change_btn->setIconSize(QSize(14, 14));
        change_btn->setCheckable(true);

        horizontalLayout_4->addWidget(change_btn);

        horizontalSpacer = new QSpacerItem(236, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        search_input = new QLineEdit(widget);
        search_input->setObjectName(QStringLiteral("search_input"));

        horizontalLayout->addWidget(search_input);

        search_btn = new QPushButton(widget);
        search_btn->setObjectName(QStringLiteral("search_btn"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/icon/search-13-48.ico"), QSize(), QIcon::Normal, QIcon::Off);
        search_btn->setIcon(icon7);

        horizontalLayout->addWidget(search_btn);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(236, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        user_btn = new QPushButton(widget);
        user_btn->setObjectName(QStringLiteral("user_btn"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icon/icon/user-48.ico"), QSize(), QIcon::Normal, QIcon::Off);
        user_btn->setIcon(icon8);

        horizontalLayout_4->addWidget(user_btn);


        verticalLayout_5->addWidget(widget);

        stackedWidget = new QStackedWidget(widget_3);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setPointSize(20);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new Emission();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_4 = new QGridLayout(page_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout_5 = new QGridLayout(page_4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        gridLayout_6 = new QGridLayout(page_5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_8 = new QLabel(page_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        gridLayout_7 = new QGridLayout(page_6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_9 = new QLabel(page_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_9, 0, 0, 1, 1);

        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        gridLayout_8 = new QGridLayout(page_7);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_10 = new QLabel(page_7);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_10, 0, 0, 1, 1);

        stackedWidget->addWidget(page_7);

        verticalLayout_5->addWidget(stackedWidget);


        gridLayout->addWidget(widget_3, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(change_btn, SIGNAL(toggled(bool)), icon_only_widget, SLOT(setVisible(bool)));
        QObject::connect(change_btn, SIGNAL(toggled(bool)), full_menu_widget, SLOT(setHidden(bool)));
        QObject::connect(home_btn_1, SIGNAL(toggled(bool)), home_btn_2, SLOT(setChecked(bool)));
        QObject::connect(dashborad_btn_1, SIGNAL(toggled(bool)), dashborad_btn_2, SLOT(setChecked(bool)));
        QObject::connect(orders_btn_1, SIGNAL(toggled(bool)), orders_btn_2, SLOT(setChecked(bool)));
        QObject::connect(products_btn_1, SIGNAL(toggled(bool)), products_btn_2, SLOT(setChecked(bool)));
        QObject::connect(customers_btn_1, SIGNAL(toggled(bool)), customers_btn_2, SLOT(setChecked(bool)));
        QObject::connect(home_btn_2, SIGNAL(toggled(bool)), home_btn_1, SLOT(setChecked(bool)));
        QObject::connect(dashborad_btn_2, SIGNAL(toggled(bool)), dashborad_btn_1, SLOT(setChecked(bool)));
        QObject::connect(orders_btn_2, SIGNAL(toggled(bool)), orders_btn_1, SLOT(setChecked(bool)));
        QObject::connect(products_btn_2, SIGNAL(toggled(bool)), products_btn_1, SLOT(setChecked(bool)));
        QObject::connect(customers_btn_2, SIGNAL(toggled(bool)), customers_btn_1, SLOT(setChecked(bool)));
        QObject::connect(exit_btn_2, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(exit_btn_1, SIGNAL(clicked()), MainWindow, SLOT(close()));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        logo_label_1->setText(QString());
        home_btn_1->setText(QString());
        dashborad_btn_1->setText(QString());
        orders_btn_1->setText(QString());
        products_btn_1->setText(QString());
        customers_btn_1->setText(QString());
        customers_btn_3->setText(QString());
        exit_btn_1->setText(QString());
        logo_label_2->setText(QString());
        logo_label_3->setText(QApplication::translate("MainWindow", "TvEmpire", Q_NULLPTR));
        home_btn_2->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        dashborad_btn_2->setText(QApplication::translate("MainWindow", "Emissions", Q_NULLPTR));
        orders_btn_2->setText(QApplication::translate("MainWindow", "Equipements", Q_NULLPTR));
        products_btn_2->setText(QApplication::translate("MainWindow", "Scenes", Q_NULLPTR));
        customers_btn_2->setText(QApplication::translate("MainWindow", "Employees", Q_NULLPTR));
        customers_btn_4->setText(QApplication::translate("MainWindow", "Employees", Q_NULLPTR));
        exit_btn_2->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        change_btn->setText(QString());
        search_input->setPlaceholderText(QApplication::translate("MainWindow", "Search...", Q_NULLPTR));
        search_btn->setText(QString());
        user_btn->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Home Page", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Equipements Page", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Scenes Page", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Employees  Page", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Search Page", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "User Page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
