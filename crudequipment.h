#ifndef CRUDEQUIPMENT_H
#define CRUDEQUIPMENT_H
#include <string>

class CRUDequipment
{
public:
    CRUDequipment(int id, const std::string& label, int stock, const std::string& state, const std::string& category );
    ~CRUDequipment();

    int         getId() const;
    std::string getlabel() const;
    std::string getstate() const;
    std::string getcategory() const;
    int         getStock() const;


    void setlabel(const std::string& label);
    void setstate(const std::string& state);
    void setcategory(const std::string& category);
    void setStock(int stock);

    void addEquipment();
    void readEquipment();
    void updateEquipment();
    void deleteEquipment();

private:
    int id;
    int stock;
    std::string label;
    std::string state;
    std::string category;
};

#endif // CRUDEQUIPMENT_H
