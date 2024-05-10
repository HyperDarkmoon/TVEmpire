#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "arduino.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr,Arduino *arduino= nullptr);
    ~MainWindow();

private slots:
    void on_home_btn_1_clicked();
    void on_home_btn_2_clicked();
    void on_dashborad_btn_1_clicked();
    void on_dashborad_btn_2_clicked();
    void on_orders_btn_1_clicked();
    void on_orders_btn_2_clicked();
    void on_products_btn_1_clicked();
    void on_products_btn_2_clicked();
    void on_customers_btn_1_clicked();
    void on_customers_btn_2_clicked();


    void on_customers_btn_4_clicked();

    void on_customers_btn_3_clicked();

private:
    Ui::MainWindow *ui;
    void loadStyleSheet(const QString &styleSheetPath);
    Arduino *arduino;

};
#endif // MAINWINDOW_H
