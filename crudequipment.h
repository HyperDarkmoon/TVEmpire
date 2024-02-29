#ifndef CRUDEQUIPMENT_H
#define CRUDEQUIPMENT_H
#include <string>

class CRUDequipment
{
public:
    CRUDequipment(int id, const std::string& name, int stockCount);
    ~CRUDequipment();

    int getId() const;
    std::string getName() const;
    int getStockCount() const;


    void setName(const std::string& name);
    void setStockCount(int stockCount);

    void addEquipment();
    void readEquipment();
    void updateEquipment();
    void deleteEquipment();

private:
    int id_;
    std::string name_;
    int stockCount_;
};

#endif // CRUDEQUIPMENT_H
