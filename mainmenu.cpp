#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <QSqlQuery>
#include <QtCharts/QtCharts>
#include <QVBoxLayout>
#include <QDebug>
MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    fetchEmissionData();
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::fetchEmissionData() {
    QSqlQuery q;
    q.prepare("SELECT(SELECT COUNT(DISTINCT e.id) FROM emissions e INNER JOIN contract c ON e.id = c.idemission) AS emissions_with_contracts,(SELECT COUNT(*) FROM emissions) - (SELECT COUNT(DISTINCT e.id) FROM emissions e INNER JOIN contract c ON e.id = c.idemission) AS emissions_without_contractsFROMdual;");
    if (q.exec() )
       qDebug() << "hazebi";
    if (q.next()) {
        int emissionsWithContracts = q.value(0).toInt();
        int emissionsWithoutContracts = q.value(1).toUInt();
        QPieSeries *series = new QPieSeries();
        series->append("Emissions with Contracts", emissionsWithContracts);
        series->append("Emissions without Contracts", emissionsWithoutContracts);

            // Create the chart
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Emissions with and without Contracts");
        qDebug() << "test71 " << emissionsWithContracts << " "  << emissionsWithoutContracts ;
            // Create the chart view and set the chart
        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);
        QVBoxLayout *l = new QVBoxLayout;

        l->addWidget(chartView);
        ui->sponsoredEmission->setLayout(l);
    } else qDebug() << "tnekna";


}
