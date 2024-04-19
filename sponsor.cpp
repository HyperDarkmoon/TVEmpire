#include "sponsor.h"
#include "ui_sponsor.h"
#include <QTableWidgetItem>
#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QScreen>
#include "QDebug"
#include <QMessageBox>
#include <QToolButton>
#include <QTextStream>
#include <QPdfWriter>
#include <QPrinter>
#include <QTextDocument>
#include <QtWidgets>
#include <QPainter>
#include <QTextDocument>
#include <QFileDialog>
#include "pdfexport.h"
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include "qrcodegen.h" // Include Nayuki QR Code library header

Sponsor::Sponsor(QWidget *parent) : QWidget(parent), ui(new Ui::Sponsor), c(new Contract) {
    ui->setupUi(this);
    refreshTable();
    connect(ui->search_input, &QLineEdit::textChanged, this, &Sponsor::filterTable);
}

Sponsor::~Sponsor() {
    delete ui;

}

unsigned int CrudSponsor::getId() const {
    return id;
}

QString CrudSponsor::getNom() const {
    return nom;
}

QString CrudSponsor::getEmail() const {
    return email;
}

QString CrudSponsor::getPhone() const {
    return phone;
}

QString CrudSponsor::getCategories() const {
    return categories;
}

QByteArray CrudSponsor::getQrCodeData() const {
    return qrCodeData;
}

void CrudSponsor::setId(unsigned int newId) {
    id = newId;
}

void CrudSponsor::setNom(const QString &newNom) {
    nom = newNom;
}

void CrudSponsor::setEmail(const QString &newEmail) {
    email = newEmail;
}

void CrudSponsor::setPhone(const QString &newPhone) {
    phone = newPhone;
}

void CrudSponsor::setCategories(const QString &newCategories) {
    categories = newCategories;
}

void CrudSponsor::setQrCodeData(const QByteArray &data) {
    qrCodeData = data;
}


bool CrudSponsor::create(CrudSponsor s) {
    QSqlQuery query;
    query.prepare("INSERT INTO Sponsor (id, nom, tel, email, categorie, QRCODE) VALUES (sponsor_seq.NEXTVAL, :nom , :phone, :email, :categories, :qrcode)");
    query.bindValue(":nom", s.getNom());
    query.bindValue(":email", s.getEmail());
    query.bindValue(":phone", s.getPhone());
    query.bindValue(":categories", s.getCategories());

    // Generate QR code with lower error correction level to allow smaller size
    QString qrContent = "Nom: " + s.getNom() + "; Email: " + s.getEmail() + "; Phone: " + s.getPhone();
    qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(qrContent.toUtf8().constData(), qrcodegen::QrCode::Ecc::LOW);

    // Convert QR code to QImage
    QImage qrImage = QImage(qr.getSize(), qr.getSize(), QImage::Format_RGB32); // Use Format_RGB32 for color
    qrImage.fill(Qt::white); // Fill the image with white background
    for (int y = 0; y < qr.getSize(); y++) {
        for (int x = 0; x < qr.getSize(); x++) {
            // Set QR code modules as black pixels
            qrImage.setPixelColor(x, y, qr.getModule(x, y) ? Qt::black : Qt::white);
        }
    }

    // Convert QImage to QByteArray
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    buffer.open(QIODevice::WriteOnly);
    qrImage.save(&buffer, "PNG"); // You can choose any format supported by Qt, like PNG, JPEG, etc.

    query.bindValue(":qrcode", byteArray);

    if (query.exec()) {
        return true;
    } else {
        return false;
    }
}


CrudSponsor CrudSponsor::read(unsigned int id) {
    QSqlQuery query;
    query.prepare("SELECT * FROM Sponsor WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        CrudSponsor s;
        s.setId(query.value("id").toUInt());
        s.setNom(query.value("nom").toString());
        s.setEmail(query.value("email").toString());
        s.setPhone(query.value("tel").toString());
        s.setCategories(query.value("categorie").toString());
        s.setQrCodeData(query.value("QRCODE").toByteArray()); // Retrieve QR code data

        return s;
    } else {
        return CrudSponsor();
    }
}


bool CrudSponsor::update(unsigned int id, CrudSponsor s) {
    QSqlQuery query;
    query.prepare("UPDATE Sponsor SET nom = :nom, email = :email, tel = :phone, categorie = :categories, QRCODE = :qrcode WHERE id = :id");
    query.bindValue(":id", id);
    query.bindValue(":nom", s.getNom());
    query.bindValue(":email", s.getEmail());
    query.bindValue(":phone", s.getPhone());
    query.bindValue(":categories", s.getCategories());
    query.bindValue(":qrcode", s.getQrCodeData()); // Bind QR code data directly

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Update failed:" << query.lastError().text();
        return false;
    }
}





bool CrudSponsor::remove(unsigned int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM Sponsor WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        return true;
    } else {
        return false;
    }
}

void Sponsor::on_add_btn_clicked() {
    QString nom = ui->lineEdit_2->text().trimmed();
    QString email = ui->lineEdit->text().trimmed();
    QString phone = ui->lineEdit_3->text().trimmed();
    QString categories = ui->comboBox->currentText();

    if (nom.isEmpty() || email.isEmpty() || phone.isEmpty() || categories.isEmpty()) {
        QMessageBox::critical(this, "Error", "All fields must be filled.");
        return;
    }

    if (!nom.at(0).isUpper()) {
        QMessageBox::critical(this, "Error", "The first letter of the name must be uppercase.");
        return;
    }

    QRegExp phoneRegex("\\d*"); // Regular expression to allow only digits
    if (!phoneRegex.exactMatch(phone)) {
        QMessageBox::critical(this, "Error", "Phone must contain only numbers.");
        return;
    }

    QRegExp emailRegex("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}\\b");
    if (!emailRegex.exactMatch(email)) {
        QMessageBox::critical(this, "Error", "Invalid email format.");
        return;
    }

    CrudSponsor cc;
    cc.setNom(nom);
    cc.setEmail(email);
    cc.setPhone(phone);
    cc.setCategories(categories);

    if (cc.create(cc)) {
        refreshTable();
        c.refreshTable();
    } else {
        QMessageBox::critical(this, "Error", "Insertion into the database failed.");
    }
}

void Sponsor::refreshTable() {
    ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QStringList headers = {"ID", "Nom", "email", "telephone", "categories", "QR Code", "delete", "edit", "contrat"};
        ui->tableWidget->setColumnCount(headers.size());
        ui->tableWidget->setHorizontalHeaderLabels(headers);

        CrudSponsor c;
        QList<CrudSponsor> emissionList = c.getAll();

        for (int row = 0; row < emissionList.size(); ++row) {
            ui->tableWidget->insertRow(row);

            for (int col = 0; col < headers.size() - 4; ++col) {
                QString fieldData = emissionList.at(row).getFieldByIndex(col).toString();
                QTableWidgetItem *item = new QTableWidgetItem(fieldData);
                ui->tableWidget->setItem(row, col, item);
            }

            // Display QR code
            QByteArray qrCodeData = emissionList.at(row).getQrCodeData();
            QPixmap qrCodePixmap;
            qrCodePixmap.loadFromData(qrCodeData);

            // Create a clickable QLabel to display the small QR code in the table cell
            ClickableQLabel *clickableLabel = new ClickableQLabel(this);
            clickableLabel->setPixmap(qrCodePixmap.scaled(22, 22)); // Adjust the size as needed
            clickableLabel->setAlignment(Qt::AlignCenter); // Center the QR code label
            clickableLabel->setCursor(Qt::PointingHandCursor); // Change cursor to indicate clickability

            connect(clickableLabel, &ClickableQLabel::clicked, [qrCodePixmap]() {
                // Create a QDialog to display the larger QR code
                QDialog *qrCodeDialog = new QDialog();

                // Create a QVBoxLayout for the dialog
                QVBoxLayout *layout = new QVBoxLayout(qrCodeDialog);

                // Adjust the size of the dialog
                qrCodeDialog->setFixedSize(qrCodePixmap.size() * 2 + QSize(150, 150)); // Adjust size as needed

                // Create a QLabel to display the larger QR code
                QLabel *largerLabel = new QLabel(qrCodeDialog);

                // Adjust the size of the QR code inside the QLabel
                QPixmap scaledPixmap = qrCodePixmap.scaled(qrCodePixmap.size() * 3); // Scale the QR code pixmap (double the size)
                largerLabel->setPixmap(scaledPixmap);

                // Set a fixed size for the QLabel containing the QR code pixmap
                largerLabel->setFixedSize(scaledPixmap.size());

                // Center the QLabel inside the dialog
                layout->addWidget(largerLabel, 0, Qt::AlignCenter);

                qrCodeDialog->setLayout(layout);
                qrCodeDialog->exec(); // Use exec() instead of show() to make the dialog modal
            });

            // Set the clickable label containing the small QR code as the cell widget
            ui->tableWidget->setCellWidget(row, headers.size() - 4, clickableLabel);


        // Delete button
        QToolButton *deleteButton = new QToolButton(this);
        deleteButton->setIcon(QIcon("C:/Users/yassine abid/Desktop/tv/TVEmpire/icon/delete.png"));
        unsigned int deleteId = ui->tableWidget->item(row, 0)->text().toUInt();
        connect(deleteButton, &QToolButton::clicked, [this, deleteId]() {
            onDeleteButtonClicked(deleteId);
        });
        ui->tableWidget->setCellWidget(row, headers.size() - 3, deleteButton);

        // Style for delete button
        // Edit button
        QToolButton *editButton = new QToolButton(this);
        editButton->setIcon(QIcon("C:/Users/yassine abid/Desktop/tv/TVEmpire/icon/update.png"));
        connect(editButton, &QToolButton::clicked, [this, row]() {
            onEditButtonClicked(row);
        });
        ui->tableWidget->setCellWidget(row, headers.size() - 2, editButton);

        // Style for edit button (you can customize it similarly to the delete button)

        // Contrat button
        QToolButton *contratButton = new QToolButton(this);
        contratButton->setIcon(QIcon("C:/Users/yassine abid/Desktop/tv/TVEmpire/icon/contract.png"));  // Update with the actual path to your contrat icon
        connect(contratButton, &QToolButton::clicked, [this, row]() {
            onContratButtonClicked(row);
        });
        ui->tableWidget->setCellWidget(row, headers.size() - 1, contratButton);

        // Style for contrat button (you can customize it similarly to the delete button)

        // Make cells non-editable
        int columnIndex = 0;
                for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
                    QTableWidgetItem *item = ui->tableWidget->item(row, columnIndex);

                    if (item) {
                        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
                    } else {
                        QTableWidgetItem *newItem = new QTableWidgetItem();
                        newItem->setFlags(newItem->flags() & ~Qt::ItemIsEditable);
                        ui->tableWidget->setItem(row, columnIndex, newItem);
            }
        }
    }
}


QList<CrudSponsor> CrudSponsor::getAll() {
    QSqlQuery query;
    query.prepare("SELECT id, nom , email ,tel ,categorie, QRCODE FROM sponsor");
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }

    QList<CrudSponsor> sponsorlist;

    while (query.next()) {
        CrudSponsor s;
        s.setId(query.value(0).toUInt());
        s.setNom(query.value(1).toString());
        s.setEmail(query.value(2).toString());
        s.setPhone(query.value(3).toString());
        s.setCategories(query.value(4).toString());
        s.setQrCodeData(query.value(5).toByteArray());
        sponsorlist.append(s);
    }

    return sponsorlist;
}

QVariant CrudSponsor::getFieldByIndex(int index) const {
    switch (index) {
        case 0:
            return getId();
        case 1:
            return getNom();
        case 2:
            return getEmail();
        case 3:
            return getPhone();
        case 4:
            return getCategories();
        case 5:
            return getQrCodeData();
        default:
            return QVariant();
    }
}


void Sponsor::onDeleteButtonClicked(int id) {
    CrudSponsor c;
    if (c.remove(id))
        refreshTable();
}

void Sponsor::onEditButtonClicked(int row) {
    CrudSponsor e;
    e.setId(ui->tableWidget->item(row, 0)->text().toUInt());
    e.setNom(ui->tableWidget->item(row, 1)->text());
    e.setEmail(ui->tableWidget->item(row, 2)->text());
    e.setPhone(ui->tableWidget->item(row, 3)->text());
    e.setCategories(ui->tableWidget->item(row, 4)->text());

    // Generate QR code data based on the updated information
    QString qrContent = "Nom: " + e.getNom() + "; Email: " + e.getEmail() + "; Phone: " + e.getPhone();
    qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(qrContent.toUtf8().constData(), qrcodegen::QrCode::Ecc::LOW);

    // Convert QR code to QImage
    QImage qrImage = QImage(qr.getSize(), qr.getSize(), QImage::Format_RGB32); // Use Format_RGB32 for color
    qrImage.fill(Qt::white); // Fill the image with white background
    for (int y = 0; y < qr.getSize(); y++) {
        for (int x = 0; x < qr.getSize(); x++) {
            // Set QR code modules as black pixels
            qrImage.setPixelColor(x, y, qr.getModule(x, y) ? Qt::black : Qt::white);
        }
    }

    // Convert QImage to QByteArray
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    buffer.open(QIODevice::WriteOnly);
    qrImage.save(&buffer, "PNG"); // You can choose any format supported by Qt, like PNG, JPEG, etc.

    e.setQrCodeData(byteArray);

    // Update the record
    if (e.update(ui->tableWidget->item(row, 0)->text().toUInt(), e)) {
        // Record updated successfully
        refreshTable(); // Refresh the table to reflect the changes
    } else {
        // Handle update failure
        QMessageBox::critical(this, "Error", "Failed to update record.");
    }
}




void Sponsor::on_pushButton_clicked()
{
    pdfExport pdfExporter;

    pdfExporter.exportTableToPDF(ui->tableWidget);
}
void Sponsor::onContratButtonClicked(int row) {

    c.show();

}
void Sponsor::filterTable(const QString &text) {
        // Get the search query
        QString query = text.toLower();

        // Iterate through each row in the table
        for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
            bool matchFound = false;
            // Get the item in the first column of the current row
            QTableWidgetItem *item = ui->tableWidget->item(row, 1); // Assuming the first column is the "Name" column
            if (item) {
                QString cellText = item->text().toLower();
                // Check if the cell text contains the search query
                if (cellText.contains(query)) {
                    matchFound = true;
                }
            }
            // Show or hide the row based on whether a match was found
            ui->tableWidget->setRowHidden(row, !matchFound);
        }
    }
void Sponsor::displayChart() {
    // Create a bar series
    QtCharts::QBarSeries *series = new QtCharts::QBarSeries();

    // Fetch the sponsor data from the database and count the number of sponsors for each category
    QMap<QString, int> sponsorCountByCategory;
    CrudSponsor c;
    QList<CrudSponsor> sponsorList = c.getAll();
    for (const auto& sponsor : sponsorList) {
        QString category = sponsor.getCategories();
        sponsorCountByCategory[category]++;
    }

    // Add data to the series
    for (auto it = sponsorCountByCategory.constBegin(); it != sponsorCountByCategory.constEnd(); ++it) {
        QtCharts::QBarSet *set = new QtCharts::QBarSet(it.key());
        *set << it.value();
        series->append(set);
    }

    // Create a chart and add the series to it
    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);

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
    chartView->setWindowTitle("Sponsors by Category");
    chartView->resize(800, 600);
    chartView->show();
}


void Sponsor::on_pushButton_2_clicked()
{
     displayChart();
}
