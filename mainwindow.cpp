#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

