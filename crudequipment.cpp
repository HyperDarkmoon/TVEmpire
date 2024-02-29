#include "crudequipment.h"
#include <iostream>
#include <QtSql>

CRUDequipment::CRUDequipment(int id, const std::string& name, int stockCount)
    : id_(id), name_(name), stockCount_(stockCount) {}

CRUDequipment::~CRUDequipment() {}

int CRUDequipment::getId() const
{
    return id_;
}

std::string CRUDequipment::getName() const
{
    return name_;
}

int CRUDequipment::getStockCount() const
{
    return stockCount_;
}

void CRUDequipment::setName(const std::string& name)
{
    name_ = name;
}

void CRUDequipment::setStockCount(int stockCount)
{
    stockCount_ = stockCount;
}

void CRUDequipment::addEquipment()
{
    std::cout << "Ajout d'un nouvel équipement : " << name_ << std::endl;
}

void CRUDequipment::readEquipment()
{
    std::cout << "ID : " << id_ << ", Nom : " << name_ << ", Stock : " << stockCount_ << std::endl;
}

void CRUDequipment::updateEquipment()
{
    std::cout << "Mise à jour de l'équipement : " << name_ << std::endl;
}

void CRUDequipment::deleteEquipment()
{
    std::cout << "Suppression de l'équipement : " << name_ << std::endl;
}
