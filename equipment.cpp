#include "equipment.h"
#include "ui_equipment.h"
#include "crudequipment.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include "pdfexport.h"
#include <qdesktopservices.h>
#include <QUrl>
#include <QPixmap>
#include <QLabel>
#include <QVBoxLayout>
Equipment::Equipment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Equipment), addE(new addEquipment)
{
    ui->setupUi(this);
    connect(addE, &addEquipment::buttonClicked, this, &Equipment::onAddEmissionDialogClosed);
    connect(ui->pdfButton_4, &QPushButton::clicked, this, &Equipment::on_pdfButton_4_clicked);
    connect(ui->search_input, &QLineEdit::textChanged, this, &Equipment::filterTable);

    refreshTable();
}

void Equipment::onAddEmissionDialogClosed(){
    refreshTable();
}

Equipment::~Equipment()
{
    delete ui;
}

void Equipment::on_Ajout_clicked()
{
    addE->show();
}

void Equipment::refreshTable()
{
    // Clear the existing content of the table
    ui->tableWidget_2->clearContents();
    ui->tableWidget_2->setRowCount(0);

    QStringList headers = {"ID", "libelle", "Quantite", "condition", "categorie", "delete", "edit", "search The web", "Image"};
    ui->tableWidget_2->setColumnCount(headers.size());
    ui->tableWidget_2->setHorizontalHeaderLabels(headers);

    // Create an object of CRUDEquipment
    CRUDequipment c;

    // Fetch all equipment using getAll method
    QList<CRUDequipment> EquipmentList = c.getAll();

    for (int row = 0; row < EquipmentList.size(); ++row) {
        ui->tableWidget_2->insertRow(row);

        for (int col = 0; col < headers.size() - 4; ++col) {  // Adjusted loop to skip the "Delete", "Edit", and "Search" columns
            QString fieldData = EquipmentList.at(row).getFieldByIndex(col).toString();
            QTableWidgetItem *item = new QTableWidgetItem(fieldData);
            ui->tableWidget_2->setItem(row, col, item);
        }

        // Load and display the image from the CRUDequipment object
        ClickableQLabel *imageLabel = new ClickableQLabel(this);
        QPixmap pixmap;
        QByteArray imageData = EquipmentList.at(row).getImage();

        qDebug() << "Image data size for row" << row << ":" << imageData.size();  // Debug statement to check image data size

        if (!imageData.isEmpty() && pixmap.loadFromData(imageData, "PNG")) {  // Specify image format as "PNG"
            qDebug() << "Image loaded successfully for row:" << row;
            imageLabel->setPixmap(pixmap.scaled(25, 25, Qt::KeepAspectRatio));  // Adjusted image size
            imageLabel->setMinimumSize(25, 25);
            imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
            ui->tableWidget_2->setCellWidget(row, headers.size() - 1, imageLabel);
        } else {
            qDebug() << "Failed to load image for row:" << row;
        }
        //zoom image
        connect(imageLabel, &ClickableQLabel::clicked, [pixmap]() {
            // Create a QDialog to display the larger QR code
            QDialog *qrCodeDialog = new QDialog();

            // Create a QVBoxLayout for the dialog
            QVBoxLayout *layout = new QVBoxLayout(qrCodeDialog);

            // Adjust the size of the dialog
            qrCodeDialog->setFixedSize(pixmap.size() * 2 + QSize(150, 150)); // Adjust size as needed

            // Create a QLabel to display the larger QR code
            QLabel *largerLabel = new QLabel(qrCodeDialog);

            // Adjust the size of the QR code inside the QLabel
            QPixmap scaledPixmap = pixmap.scaled(pixmap.size() * 3); // Scale the QR code pixmap (double the size)
            largerLabel->setPixmap(scaledPixmap);

            // Set a fixed size for the QLabel containing the QR code pixmap
            largerLabel->setFixedSize(scaledPixmap.size());

            // Center the QLabel inside the dialog
            layout->addWidget(largerLabel, 0, Qt::AlignCenter);

            qrCodeDialog->setLayout(layout);
            qrCodeDialog->exec(); // Use exec() instead of show() to make the dialog modal
        });


        /*
        // Event filter for zooming and dezooming
                largerLabel->installEventFilter(largerLabel); // Enable event filtering

                largerLabel->installEventFilter(new QObject); // Create an event filter for the QLabel
                largerLabel->setMouseTracking(true); // Enable mouse tracking to receive wheel events

                connect(largerLabel, &QObject::eventFilter, [=](QObject *watched, QEvent *event) {
                    if (watched == largerLabel && event->type() == QEvent::Wheel) {
                        QWheelEvent *wheelEvent = static_cast<QWheelEvent*>(event);
                        QPoint numDegrees = wheelEvent->angleDelta() / 8;
                        if (!numDegrees.isNull()) {
                            // Zoom in
                            if (numDegrees.y() > 0) {
                                QPixmap currentPixmap = largerLabel->pixmap()->scaled(largerLabel->pixmap()->size() * 1.1);
                                largerLabel->setPixmap(currentPixmap);
                                largerLabel->setFixedSize(currentPixmap.size());
                            }
                            // Zoom out
                            else if (numDegrees.y() < 0) {
                                QPixmap currentPixmap = largerLabel->pixmap()->scaled(largerLabel->pixmap()->size() * 0.9);
                                largerLabel->setPixmap(currentPixmap);
                                largerLabel->setFixedSize(currentPixmap.size());
                            }
                            return true; // Event handled
                        }
                    }
                    return false; // Event not handled
                });  */



        // Add "Delete" button for each row in the "Delete" column
        QPushButton *deleteButton = new QPushButton("Delete", this);
        unsigned int id = ui->tableWidget_2->item(row, 0)->text().toUInt();
        connect(deleteButton, &QPushButton::clicked, [this, id]() {
            onDeleteButtonClicked(id);
        });
        ui->tableWidget_2->setCellWidget(row, headers.size() - 4, deleteButton);

        // Add "Edit" button for each row in the "Edit" column
        QPushButton *editButton = new QPushButton("Edit", this);
        connect(editButton, &QPushButton::clicked, [this, row]() {
            onEditButtonClicked(row);
        });
        ui->tableWidget_2->setCellWidget(row, headers.size() - 3, editButton);

        // Add "Search" button for each row in the "Search" column
        QPushButton *WebScrape = new QPushButton("search", this);
        connect(WebScrape, &QPushButton::clicked, [this, row]() {
            onSearchButtonClicked(row);
        });
        ui->tableWidget_2->setCellWidget(row, headers.size() - 2, WebScrape);
    }
}



QList<CRUDequipment> CRUDequipment::getAll() {
    QSqlQuery query;
    query.prepare("SELECT * FROM Equipement");
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }

    QList<CRUDequipment> EquipmentList;  // Use a list to store all records

    while (query.next()) {
        CRUDequipment em;  // Create a new object for each record
        em.setId(query.value(0).toUInt());
        em.setlabel(query.value(1).toString());
        em.setStock(query.value(2).toInt());
        em.setstate(query.value(3).toString());
        em.setcategory(query.value(4).toString());

        QByteArray imageData = query.value("IMAGE").toByteArray();
        qDebug() << "Image data size from database:" << imageData.size();  // Debug statement to check image data size

        em.setImage(imageData);  // Set image data to CRUDequipment object
        EquipmentList.append(em);  // Add the object to the list
    }

    return EquipmentList;
}


QVariant CRUDequipment::getFieldByIndex(int index) const{
    switch (index) {
    case 0:
        return getId();
    case 1:
        return getlabel();
    case 2:
        return getStock();
    case 3:
        return getstate();
    case 4:
        return getcategory();

    default:
        return QVariant();
    }
}

void Equipment::onDeleteButtonClicked(unsigned int id)
{
    CRUDequipment CRUDEquipment;
    CRUDEquipment.deleteEquipment(id);
    refreshTable();
}

void Equipment::onEditButtonClicked(int row)
{
    CRUDequipment e;

    e.setId(ui->tableWidget_2->item(row,0)->text().toInt());
    e.setlabel(ui->tableWidget_2->item(row,1)->text());
    e.setStock(ui->tableWidget_2->item(row,2)->text().toUInt());
    e.setstate(ui->tableWidget_2->item(row,3)->text());
    e.setcategory(ui->tableWidget_2->item(row,4)->text());
    e.updateEquipment();
    refreshTable();
}

void Equipment::displayChart() {
    // Create a bar series
    QtCharts::QBarSeries *series = new QtCharts::QBarSeries();

    // Fetch the stock data from the database and count the number of items for each equipment
    QMap<QString, int> stockCountByEquipment;
    CRUDequipment C;
    QList<CRUDequipment> equipmentList = C.getAll();
    for (const CRUDequipment& equipment : equipmentList) {
        QString label = equipment.getlabel();
        int stock = equipment.getStock();
        stockCountByEquipment[label] = stock;
    }

    // Add data to the series
    for (auto it = stockCountByEquipment.constBegin(); it != stockCountByEquipment.constEnd(); ++it) {
        QtCharts::QBarSet *set = new QtCharts::QBarSet(it.key());
        *set << it.value();
        series->append(set);
    }

    // Create a chart and add the series to it
    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setAnimationOptions(QtCharts::QChart::SeriesAnimations);

    // Create axes
    QtCharts::QBarCategoryAxis *axisX = new QtCharts::QBarCategoryAxis();
    QtCharts::QValueAxis *axisY = new QtCharts::QValueAxis();
    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisX);
    series->attachAxis(axisY);

    // Create a chart view and set the chart
    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Set chart view properties
    chartView->setWindowTitle("Stock by Equipment");
    chartView->resize(800, 600);
    chartView->show();
}

void Equipment::on_pdfButton_4_clicked()
{
    displayChart();
}

void Equipment::filterTable(const QString &text) {
    // Get the search query
    QString query = text.toLower();

    // Iterate through each row in the table
    for (int row = 0; row < ui->tableWidget_2->rowCount(); ++row) {
        bool matchFound = false;
        // Get the item in the first column of the current row
        QTableWidgetItem *item = ui->tableWidget_2->item(row, 1); // Assuming the first column is the "Name" column
        if (item) {
            QString cellText = item->text().toLower();
            // Check if the cell text contains the search query
            if (cellText.contains(query)) {
                matchFound = true;
            }
        }
        // Show or hide the row based on whether a match was found
        ui->tableWidget_2->setRowHidden(row, !matchFound);
    }
}

void Equipment::on_pdfButton_5_clicked()
{
    pdfExport pdfExporter;
    pdfExporter.exportTableToPDF(ui->tableWidget_2);
}

void Equipment::on_google_clicked()
{
    QString link="https://www.google.com";
    QDesktopServices:: openUrl(QUrl(link));
}

void Equipment::on_amazon_clicked()
{
    QString link="https://www.amazon.com/s?k=camera&crid=YY8E1FKMHB10&sprefix=camer%2Caps%2C232&ref=nb_sb_noss_2";
    QDesktopServices:: openUrl(QUrl(link));
}

void Equipment::on_visual_impact_clicked()
{
    QString link="https://www.visualsfrance.com/14-accessoires-tournage";
    QDesktopServices:: openUrl(QUrl(link));
}

void Equipment::onSearchButtonClicked(int row)
{
    QString url = "https://www.mytek.tn/catalogsearch/result/?q=";
    url += ui->tableWidget_2->item(row,1)->text();
    QDesktopServices::openUrl(url);
}
