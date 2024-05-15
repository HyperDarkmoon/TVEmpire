#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent,Arduino *arduino)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),arduino(arduino)
{
    ui->setupUi(this);
    ui->icon_only_widget->hide();
    ui->stackedWidget->setCurrentIndex(0);

    ui->home_btn_1->setChecked(true);
    ui->home_btn_2->setChecked(true);
    loadStyleSheet("style.qss");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_home_btn_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_home_btn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_dashborad_btn_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_dashborad_btn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_orders_btn_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_orders_btn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_products_btn_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_products_btn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_customers_btn_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_customers_btn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::loadStyleSheet(const QString &styleSheetPath)
{
    QFile file(styleSheetPath);

    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        return;
    }

    QTextStream stream(&file);
    QString styleSheet = stream.readAll();
    file.close();

    this->setStyleSheet(styleSheet);
}


void MainWindow::on_customers_btn_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_customers_btn_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
}
