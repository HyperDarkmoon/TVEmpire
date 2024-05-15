#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <QSqlQuery>
#include <QtCharts/QtCharts>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QDebug>
#include <QSqlError>
#include "employee.h"

MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);

    // Create a horizontal layout to hold the two chart views side by side
    QHBoxLayout *mainLayout = new QHBoxLayout(this);

    // Create a widget for the left chart (emission data)
    QWidget *leftWidget = new QWidget();
    QVBoxLayout *leftLayout = new QVBoxLayout(leftWidget);
    mainLayout->addWidget(leftWidget);

    // Create a widget for the right chart (employee data)
    QWidget *rightWidget = new QWidget();
    QVBoxLayout *rightLayout = new QVBoxLayout(rightWidget);
    mainLayout->addWidget(rightWidget);

    // Fetch and display emission data on the left side
    displayEmissionChart(leftWidget);

    // Display employee chart on the right side
    displayEmployeeChart(rightWidget);

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
