#include "affectation.h"
#include "ui_affectation.h"
#include "employee.h"
#include "equipment.h"
#include "usersession.h"
#include "crudequipment.h"

Affectation::Affectation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Affectation)
{
    ui->setupUi(this);
    refreshEmployeeList();
    refreshEquipmentsList();
}

Affectation::~Affectation()
{
    delete ui;
}

void Affectation::refreshEmployeeList() {
    CrudEmployee crudEmp;
    QList<CrudEmployee> emp = crudEmp.getAllEmployees();
    for (int i = 0; i < emp.size(); i++) {
        ui->listWidget->addItem(emp[i].getEmployeeName());
    }
}

void Affectation::refreshEquipmentsList() {
    CRUDequipment crudEquip;
    QList<CRUDequipment> equip = crudEquip.getAll();
    for (int i = 0; i < equip.size(); i++) {
        ui->listWidget_2->addItem(equip[i].getlabel());
    }
}


CrudAffectation::CrudAffectation(unsigned int empId, unsigned int equipId) {
    this->empId = empId;
    this->equipId = equipId;
}

void CrudAffectation::setEmpId(unsigned int empId) {
    this->empId = empId;
}

unsigned int CrudAffectation::getEmpId() const {
    return empId;
}

void CrudAffectation::setEquipId(unsigned int equipId) {
    this->equipId = equipId;
}

unsigned int CrudAffectation::getEquipId() const {
    return equipId;
}

void CrudAffectation::addAffectation() {
    QSqlQuery query;
    query.prepare("INSERT INTO AFFECTATIONEQUIPEMENT (IDEQUIPEMENT, IDEMPLOYEE) VALUES (:equipId, :empId)");
    query.bindValue(":empId", empId);
    query.bindValue(":equipId", equipId);
    if (query.exec()) {
        qDebug() << "Affectation added successfully";
    } else {
        qDebug() << "Error adding affectation: " << query.lastError();
    }
}

CrudAffectation CrudAffectation::getAffectationByEmpId(unsigned int empId) {
    QSqlQuery query;
    query.prepare("SELECT * FROM AFFECTATIONEQUIPEMENT WHERE IDEMPLOYEE = :empId");
    query.bindValue(":empId", empId);
    if (query.exec()) {
        if (query.next()) {
            return CrudAffectation(query.value(0).toUInt(), query.value(1).toUInt());
        }
    }
    return CrudAffectation();
}

CrudAffectation CrudAffectation::getAffectationByEquipId(unsigned int equipId) {
    QSqlQuery query;
    query.prepare("SELECT * FROM AFFECTATIONEQUIPEMENT WHERE IDEQUIPEMENT = :equipId");
    query.bindValue(":equipId", equipId);
    if (query.exec()) {
        if (query.next()) {
            return CrudAffectation(query.value(0).toUInt(), query.value(1).toUInt());
        }
    }
    return CrudAffectation();
}

int CrudAffectation::getEmployeeIdByEquipmentId(unsigned int equipId) {
    QSqlQuery query;
    query.prepare("SELECT IDEMPLOYEE FROM AFFECTATIONEQUIPEMENT WHERE IDEQUIPEMENT = :equipId");
    query.bindValue(":equipId", equipId);
    if (query.exec()) {
        if (query.next()) {
            return query.value(0).toInt();
        }
    }
    return 0;
}

void Affectation::on_pushButton_clicked()
{
    // Get selected employee and equipment names
    QString selectedEmployeeName = ui->listWidget->currentItem()->text();
    QString selectedEquipmentLabel = ui->listWidget_2->currentItem()->text();

    // Retrieve employee ID using the selected name
    CrudEmployee crudEmp;
    unsigned int empId = crudEmp.getEmployeeIdByName(selectedEmployeeName);

    // Retrieve equipment ID using the selected label
    CRUDequipment crudEquip;
    unsigned int equipId = crudEquip.getEquipmentIdByLabel(selectedEquipmentLabel);

    qDebug() << "Employee ID: " << empId;
    qDebug() << "Equipment ID: " << equipId;

    // Create affectation with retrieved IDs
    CrudAffectation crudAffect(empId, equipId);
    crudAffect.addAffectation();
    emit affectationAdded();
    this->close();
}
