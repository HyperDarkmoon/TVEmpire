#include "emission.h"
#include "ui_emission.h"
#include <QDebug>
#include "weatherapicall.h"
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QChart>
#include <QFileDialog>
#include <QByteArray>
#include <QDate>
Emission::Emission(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Emission), edit(new EmissionEdit),Gemini(new GeminiDialog)
{
    ui->setupUi(this);
    // each time the add button gets clicked it emits a signal button clicked that executes onAddEmissionDialogClosed
    // same but for edit
    connect(edit, &EmissionEdit::onButtonClick, this, &Emission::onEdit );

    // Assuming this code is inside the constructor of Emission

    connect(ui->searchBar, &QLineEdit::textChanged, this, &Emission::filterTable);


    refreshTable();
   // WeatherAPI weatherAPI;
    WeatherApiClient client;
    QString temperature = client.getTemperature(36.689758, 10.182578, "4532eb473c444451c6c57986a7f7f4c9");
    if (!temperature.isEmpty()) {
        temperature = "current temp: " + temperature;
        ui->tempLabel->setText(temperature);
    } else {
        qDebug() << "Failed to retrieve temperature";
    }

    //testing gemini api

    //GeminiApi g;
    //g.generateBotResponse("hi");
    resetInputs();
}

void Emission::onEdit(){
    refreshTable();
}
void Emission::onAddEmissionDialogClosed()
{

    refreshTable();
}
Emission::~Emission()
{
    delete ui;
}

void CrudEmission::setId(unsigned int newId) {
    id = newId;
}

void CrudEmission::setNom(const QString& newNom) {
    nom = newNom;
}

void CrudEmission::setGenre(const QString& newGenre) {
    genre = newGenre;
}

void CrudEmission::setHoraire(const QDate& newHoraire) {
    horaire = newHoraire;
}

void CrudEmission::setSceneId(unsigned int newSceneId) {
    sceneId = newSceneId;
}
void CrudEmission::setScript(const QString &newscript)
{
    script = newscript;
}

unsigned int CrudEmission::getId()  const{
    return id;
}

QString CrudEmission::getNom() const{
    return nom;
}

QString CrudEmission::getGenre() const{
    return genre;
}

QDate CrudEmission::getHoraire() const{
    return horaire;
}

unsigned int CrudEmission::getSceneId() const{
    return sceneId;
}
QString CrudEmission::getScript() const{
    return script;
}


bool CrudEmission::create(CrudEmission e)
{
    QSqlQuery query;
    query.prepare("INSERT INTO emissions (id,nom, genre, horaire, idscene,script,VIDEODATA) VALUES (emission_seq.NEXTVAL, :nom, :genre, :horaire, :scene_id, :script,:vid)");
    query.bindValue(":id", e.getId());
    query.bindValue(":nom", e.getNom());
    query.bindValue(":genre", e.getGenre());
    query.bindValue(":horaire", e.getHoraire());
    query.bindValue(":scene_id", e.getSceneId());
    query.bindValue(":script",e.getScript());
    query.bindValue(":vid",e.videoData);
    return query.exec();
}

CrudEmission CrudEmission::read(unsigned int id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM emissions WHERE id = :id");
    query.bindValue(":id", id);
    query.exec();
    CrudEmission e;
    if (query.next()) {
        e.setId(query.value(0).toUInt());
        e.setNom(query.value(1).toString());
        e.setGenre(query.value(2).toString());
        e.setHoraire(query.value(3).toDate());
        e.setSceneId(query.value(4).toUInt());
    }
    return e;
}

bool CrudEmission::update(unsigned int id, CrudEmission e)
{
    QSqlQuery query;
    query.prepare("UPDATE emissions SET nom = :nom, genre = :genre, horaire = :horaire, idscene = :scene_id WHERE id = :id");
    query.bindValue(":nom", e.getNom());
    query.bindValue(":genre", e.getGenre());
    query.bindValue(":horaire", e.getHoraire());
    query.bindValue(":scene_id", e.getSceneId());
    query.bindValue(":id", id);
    return query.exec();
}

bool CrudEmission::remove(unsigned int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM emissions WHERE id = :id ");
    query.bindValue(":id", id);
    return query.exec();
}

void Emission::refreshTable()
{
    // Clear the existing content of the table
    ui->tableWidget_2->clearContents();
    ui->tableWidget_2->setRowCount(0);

    QStringList headers = {"ID", "Name", "Genre","Horaire","scene","script","delete","edit","summarize script","playVideo"};
    ui->tableWidget_2->setColumnCount(headers.size());
    ui->tableWidget_2->setHorizontalHeaderLabels(headers);

    // Create an object of CrudEmployee
    CrudEmission c;

    // Fetch all employees using getAllEmployees method
    QList<CrudEmission> emissionList = c.getAll();

    for (int row = 0; row < emissionList.size(); ++row) {
        ui->tableWidget_2->insertRow(row);

        for (int col = 0; col < headers.size() - 4; ++col) {  // Adjusted loop to skip the "Delete" and "Edit" columns
            QString fieldData = emissionList.at(row).getFieldByIndex(col).toString();
            QTableWidgetItem *item = new QTableWidgetItem(fieldData);
            ui->tableWidget_2->setItem(row, col, item);
        }

        // Add "Delete" button for each row in the "Delete" column
        QPushButton *deleteButton = new QPushButton(this);
        deleteButton->setIcon(QIcon(":icon/icon/delete.png"));
                deleteButton->setStyleSheet("border: none;"); // Remove border
        unsigned int id = ui->tableWidget_2->item(row,0)->text().toUInt();
        connect(deleteButton, &QPushButton::clicked, [this, id]() {
            onDeleteButtonClicked(id);
        });
        ui->tableWidget_2->setCellWidget(row, headers.size() - 4, deleteButton);

        // Add "Edit" button for each row in the "Edit" column
        QPushButton *editButton = new QPushButton(this);
        editButton->setIcon(QIcon(":icon/icon/update.png"));
        editButton->setStyleSheet("border: none;");
        connect(editButton, &QPushButton::clicked, [this, row]() {
            onEditButtonClicked(row);
        });
        ui->tableWidget_2->setCellWidget(row, headers.size() - 3, editButton);

        // Add "summarize script button for row in the "Edit colum
        QPushButton *sumButton = new QPushButton("summarize",this);
        connect(sumButton,&QPushButton::clicked, [this,row] () {
            onSummarizeButtonClicked(row);
        });
        ui->tableWidget_2->setCellWidget(row,headers.size() - 2 ,sumButton);

        // Add Play video Button
        QPushButton *videoButton = new QPushButton("play",this);
        connect(videoButton,&QPushButton::clicked,[this,id]
        {
            on_playVideoButton_clicked(id);

        });
        ui->tableWidget_2->setCellWidget(row,headers.size() - 1, videoButton);
    }
}

QList<CrudEmission> CrudEmission::getAll() {
    QSqlQuery query;
    query.prepare("SELECT id, nom, genre , horaire , idscene,script FROM emissions");
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }

    QList<CrudEmission> emissionList;  // Use a list to store all records

    while (query.next()) {
        CrudEmission em;  // Create a new object for each record
        em.setId(query.value(0).toUInt());
        em.setNom(query.value(1).toString());
        em.setGenre(query.value(2).toString());
        em.setHoraire(query.value(3).toDate());
        em.setSceneId(query.value(4).toUInt());
        em.setScript(query.value(5).toString());
        emissionList.append(em);  // Add the object to the list
    }

    return emissionList;
}
QVariant CrudEmission::getFieldByIndex(int index) const{
    switch (index) {
    case 0:
        return getId();
    case 1:
        return getNom();
    case 2:
        return getGenre();
    case 3:
        return getHoraire();
    case 4:
        return getSceneId();
    case 5:
        return getScript();
    default:
        return QVariant();
    }
}


void Emission::onDeleteButtonClicked(unsigned int id)
{

    CrudEmission crudEmployee;
    if (crudEmployee.remove(id)) {

        refreshTable();
    }
}

void Emission::onEditButtonClicked(int row)
{

    // Get the ID of the employee in the selected row
    QTableWidgetItem* idItem = ui->tableWidget_2->item(row, 0);
     if (idItem) {
         unsigned int emissionId = idItem->text().toUInt();
         CrudEmission emissionData;  // Retrieve the data from the database
         emissionData = emissionData.read(emissionId);

         // Pass the data to the edit dialog

         edit->setData(emissionData);
         edit->show();
     } else {
         qDebug() << "Unable to get emission ID from the selected row.";
     }
}




void Emission::on_pdfButton_clicked()
{
    pdfExport pdfExporter;
    pdfExporter.exportTableToPDF(ui->tableWidget_2);
}

void Emission::filterTable(const QString &text) {
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

void Emission::displayChart() {
    // Create a bar series
    QtCharts::QBarSeries *series = new QtCharts::QBarSeries();

    // Fetch the emissions data from the database and count the number of emissions for each year
    QMap<int, int> emissionCountByYear;
    CrudEmission C;
    QList<CrudEmission> emissionList = C.getAll();
    for (const auto& emission : emissionList) {
        int year = emission.getHoraire().year();
        emissionCountByYear[year]++;
    }

    // Add data to the series
    for (auto it = emissionCountByYear.constBegin(); it != emissionCountByYear.constEnd(); ++it) {
        QtCharts::QBarSet *set = new QtCharts::QBarSet(QString::number(it.key()));
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
    chartView->setWindowTitle("Emissions by Year");
    chartView->resize(800, 600);
    chartView->show();
}

void Emission::on_pdfButton_2_clicked()
{
    displayChart();
}


#include "videoplayerdialog.h"

void Emission::on_playVideoButton_clicked(unsigned int id) {
    // Replace "path_to_your_video.mp4" with the actual path to your video file
    QString videoFilePath = "D:\\Movies\\Batman The Dark Knight (2008) [1080p]\\Batman.The.Dark.Knight.2008.1080p.BluRay.x264.YIFY.mp4";


    VideoPlayerDialog dialog(this);
    dialog.playVideo(id);
    dialog.exec();  // Show the dialog modally
}



void Emission::on_add_clicked()
{
    // Check for minimum characters in nom (name)
    QString nom = ui->name->text();
    if (nom.length() < 3) {
      // Display error message (assuming you have an error label)
      ui->errorLabel->setText("Error: Name must be at least 3 characters long.");
      return; // Exit the function without creating emission
    }
    if (ui->genre->text().length() < 3) {
      // Display error message (assuming you have an error label)
      ui->errorLabel->setText("Error: Genre must be at least 3 characters long.");
      return; // Exit the function without creating emission
    }
    // Check for horaire (schedule) to be at least the current day
    QDate now = QDate::currentDate();
    QDate horaire = ui->dateEdit->date();
    if (horaire < now) {
      ui->errorLabel->setText("Error: Schedule cannot be before today's date.");
      return; // Exit the function without creating emission
    }
    // Proceed with creating the emission if checks pass
    CrudEmission c;
    c.setNom(nom);
    c.setGenre(ui->genre->text());
    c.setHoraire(horaire);
    c.setSceneId(ui->scene->currentText().toUInt());
    c.setScript(ui->script->text());
    c.videoData = vidData;
    c.create(c);
    resetInputs();
    refreshTable();
}
void Emission::resetInputs()
{
    // Reset all input fields in the dialog
    ui->name->clear();
    ui->genre->clear();
   // ui->dateEdit->setData(); // You may want to set it to an appropriate default date
    ui->scene->clear();
    ui->errorLabel->setText("");
    ui->dateEdit->setDate(QDate::currentDate());
    QSqlQuery scenes;
        scenes.prepare("SELECT id from Scenes");
        scenes.exec();
        while (scenes.next()) {
                int sceneId = scenes.value(0).toInt();
                ui->scene->addItem(QString::number(sceneId));
            }
    // Add similar lines for other input fields as needed
}


void Emission::onSummarizeButtonClicked(int row){

    QString script;
    script= ui->tableWidget_2->item(row,5)->text();
    Gemini->setData(script);
    Gemini->show();
}

void Emission::on_uploadVid_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Select Video", "", "*.mp4");
     if (filePath.isEmpty()) {
       // Handle case where no file is selected
       return;
     }

     // Read video data into a byte array
     QFile videoFile(filePath);
     if (!videoFile.open(QIODevice::ReadOnly)) {
       // Handle file opening error
       return;
     }
     QByteArray videoData = videoFile.readAll();
     videoFile.close();

     // Now you have the video data as a byte array, proceed to upload it to the database
    vidData = videoData;
}
