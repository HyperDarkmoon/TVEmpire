#include "emission.h"
#include "ui_emission.h"
#include <QDebug>
Emission::Emission(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Emission), addemission(new addEmission),edit(new EmissionEdit)
{
    ui->setupUi(this);
    connect(addemission, &addEmission::buttonClicked, this, &Emission::onAddEmissionDialogClosed);
    refreshTable();
}

void Emission::onAddEmissionDialogClosed()
{
    // Refresh the table
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


bool CrudEmission::create(CrudEmission e)
{
    QSqlQuery query;
    query.prepare("INSERT INTO emissions (id,nom, genre, horaire, idscene) VALUES (emission_seq.NEXTVAL, :nom, :genre, :horaire, :scene_id)");
    query.bindValue(":id", e.getId());
    query.bindValue(":nom", e.getNom());
    query.bindValue(":genre", e.getGenre());
    query.bindValue(":horaire", e.getHoraire());
    query.bindValue(":scene_id", e.getSceneId());
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
    query.prepare("UPDATE emissions SET nom = :nom, genre = :genre, horaire = :horaire, scene_id = :scene_id WHERE id = :id");
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
    query.prepare("DELETE FROM emissions WHERE id = :id");
    query.bindValue(":id", id);
    return query.exec();
}

void Emission::refreshTable()
{
    // Clear the existing content of the table
    ui->tableWidget_2->clearContents();
    ui->tableWidget_2->setRowCount(0);

    QStringList headers = {"ID", "Name", "Genre","Horaire","scene","delete","edit"};
    ui->tableWidget_2->setColumnCount(headers.size());
    ui->tableWidget_2->setHorizontalHeaderLabels(headers);

    // Create an object of CrudEmployee
    CrudEmission c;

    // Fetch all employees using getAllEmployees method
    QList<CrudEmission> emissionList = c.getAll();

    for (int row = 0; row < emissionList.size(); ++row) {
        ui->tableWidget_2->insertRow(row);

        for (int col = 0; col < headers.size() - 2; ++col) {  // Adjusted loop to skip the "Delete" and "Edit" columns
            QString fieldData = emissionList.at(row).getFieldByIndex(col).toString();
            QTableWidgetItem *item = new QTableWidgetItem(fieldData);
            ui->tableWidget_2->setItem(row, col, item);
        }

        // Add "Delete" button for each row in the "Delete" column
        QPushButton *deleteButton = new QPushButton("Delete", this);
        connect(deleteButton, &QPushButton::clicked, [this, row]() {
            onDeleteButtonClicked(row);
        });
        ui->tableWidget_2->setCellWidget(row, headers.size() - 2, deleteButton);

        // Add "Edit" button for each row in the "Edit" column
        QPushButton *editButton = new QPushButton("Edit", this);
        connect(editButton, &QPushButton::clicked, [this, row]() {
            onEditButtonClicked(row);
        });
        ui->tableWidget_2->setCellWidget(row, headers.size() - 1, editButton);
    }
}

QList<CrudEmission> CrudEmission::getAll() {
    QSqlQuery query;
    query.prepare("SELECT id, nom, genre , horaire , idscene FROM emissions");
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

    default:
        return QVariant();
    }
}


void Emission::onDeleteButtonClicked(int row)
{

    // Get the ID of the employee in the selected row
    QTableWidgetItem* idItem = ui->tableWidget_2->item(row, 0);  // Assuming ID is in the first column
    if (idItem) {
        unsigned int employeeId = idItem->text().toUInt();

        // Here, you can implement the logic to delete the corresponding row from your data source
        // For example, you might want to delete the record from the database using CrudEmployee class
        CrudEmission crudEmployee;
        if (crudEmployee.remove(employeeId)) {

            // Remove the row from QTableWidget
            ui->tableWidget_2->removeRow(row);
        }
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


void Emission::on_add_btn_2_clicked()
{
    addemission->show();
}

