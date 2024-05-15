#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <QSqlQuery>
#include <QtCharts/QtCharts>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QDebug>
#include <QSqlError>
#include "employee.h"
#include "equipment.h"
#include "crudequipment.h"
#include "sponsor.h"

MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);

    // Create a grid layout to split the main window into 2x2 sections
    QGridLayout *mainLayout = new QGridLayout(this);

    // Display emission chart in top-left quadrant
    QWidget *emissionWidget = new QWidget();
    QVBoxLayout *emissionLayout = new QVBoxLayout(emissionWidget);
    mainLayout->addWidget(emissionWidget, 0, 0);
    displayEmissionChart(emissionWidget);

    // Display employee chart in top-right quadrant
    QWidget *employeeWidget = new QWidget();
    QVBoxLayout *employeeLayout = new QVBoxLayout(employeeWidget);
    mainLayout->addWidget(employeeWidget, 0, 1);
    displayEmployeeChart(employeeWidget);

    // Display equipment chart in bottom-left quadrant
    QWidget *equipmentWidget = new QWidget();
    QVBoxLayout *equipmentLayout = new QVBoxLayout(equipmentWidget);
    mainLayout->addWidget(equipmentWidget, 1, 0);
    displayEquipmentChart(equipmentWidget);

    // Display sponsor chart in bottom-right quadrant
    QWidget *sponsorWidget = new QWidget();
    QVBoxLayout *sponsorLayout = new QVBoxLayout(sponsorWidget);
    mainLayout->addWidget(sponsorWidget, 1, 1);
    displaySponsorChart(sponsorWidget);

    // Set the main layout for the MainMenu widget
    setLayout(mainLayout);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::displayEmissionChart(QWidget *widget)
{
    // Create a pie series for emission data
    QPieSeries *series = new QPieSeries();

    // Fetch the emission data from the database
    QSqlQuery query;
    query.prepare("SELECT "
                  "(SELECT COUNT(DISTINCT e.id) FROM emissions e INNER JOIN contract c ON e.id = c.idemission) AS emissions_with_contracts, "
                  "(SELECT COUNT(*) FROM emissions) - (SELECT COUNT(DISTINCT e.id) FROM emissions e INNER JOIN contract c ON e.id = c.idemission) AS emissions_without_contracts "
                  "FROM dual;");

    if (query.exec() && query.next()) {
        int emissionsWithContracts = query.value(0).toInt();
        int emissionsWithoutContracts = query.value(1).toInt();

        series->append("Emissions with Contracts", emissionsWithContracts);
        series->append("Emissions without Contracts", emissionsWithoutContracts);

        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Emissions with and without Contracts");

        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);

        QVBoxLayout *layout = qobject_cast<QVBoxLayout*>(widget->layout());
        if (layout) {
            layout->addWidget(chartView);
        }
    } else {
        qDebug() << "Failed to fetch emission data:" << query.lastError().text();
    }
}

void MainMenu::displayEmployeeChart(QWidget *widget)
{
    // Create a bar series for employee salary distribution
    QBarSeries *series = new QBarSeries();

    // Fetch employee data from the database and count by post
    QMap<QString, int> salaryCountByPost;
    CrudEmployee C;
    QList<CrudEmployee> employeeList = C.getAllEmployees();
    for (const auto &employee : employeeList)
    {
        QString post = employee.getPost();
        salaryCountByPost[post] += 1; // Count employees by post
    }

    // Add data to the bar series
    for (auto it = salaryCountByPost.constBegin(); it != salaryCountByPost.constEnd(); ++it)
    {
        QBarSet *set = new QBarSet(it.key());
        *set << it.value();
        series->append(set);
    }

    // Create a chart and set the series
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Salary Distribution by Post");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Create axes
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    QValueAxis *axisY = new QValueAxis();
    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisX);
    series->attachAxis(axisY);

    // Create a chart view and set the chart
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QVBoxLayout *layout = qobject_cast<QVBoxLayout*>(widget->layout());
    if (layout) {
        layout->addWidget(chartView);
    }
}

void MainMenu::displayEquipmentChart(QWidget *widget)
{
    // Create a bar series for equipment stock
    QBarSeries *series = new QBarSeries();

    // Fetch equipment data from the database and count by equipment label
    QMap<QString, int> stockCountByEquipment;
    CRUDequipment C;
    QList<CRUDequipment> equipmentList = C.getAll();
    for (const CRUDequipment &equipment : equipmentList)
    {
        QString label = equipment.getlabel();
        int stock = equipment.getStock();
        stockCountByEquipment[label] = stock;
    }

    // Add data to the bar series
    for (auto it = stockCountByEquipment.constBegin(); it != stockCountByEquipment.constEnd(); ++it)
    {
        QBarSet *set = new QBarSet(it.key());
        *set << it.value();
        series->append(set);
    }

    // Create a chart and set the series
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Stock by Equipment");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Create axes
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    QValueAxis *axisY = new QValueAxis();
    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisX);
    series->attachAxis(axisY);

    // Create a chart view and set the chart
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QVBoxLayout *layout = qobject_cast<QVBoxLayout*>(widget->layout());
    if (layout) {
        layout->addWidget(chartView);
    }
}

void MainMenu::displaySponsorChart(QWidget *widget)
{
    // Create a bar series for sponsor count by category
    QBarSeries *series = new QBarSeries();

    // Fetch sponsor data from the database and count by category
    QMap<QString, int> sponsorCountByCategory;
    CrudSponsor c;
    QList<CrudSponsor> sponsorList = c.getAll();
    for (const auto& sponsor : sponsorList) {
        QString category = sponsor.getCategories();
        sponsorCountByCategory[category]++;
    }

    // Add data to the bar series
    for (auto it = sponsorCountByCategory.constBegin(); it != sponsorCountByCategory.constEnd(); ++it) {
        QBarSet *set = new QBarSet(it.key());
        *set << it.value();
        series->append(set);
    }

    // Create a chart and set the series
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Sponsors by Category");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Create axes
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    QValueAxis *axisY = new QValueAxis();
    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisX);
    series->attachAxis(axisY);

    // Create a chart view and set the chart
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QVBoxLayout *layout = qobject_cast<QVBoxLayout*>(widget->layout());
    if (layout) {
        layout->addWidget(chartView);
    }
}
