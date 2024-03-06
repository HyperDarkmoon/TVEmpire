#ifndef CRUDEQUIPMENT_H
#define CRUDEQUIPMENT_H
#include <QString>

class CRUDequipment
{
public:
    CRUDequipment(int id, const QString& label, int stock, const QString& state, const QString& category );
    ~CRUDequipment();

    int         getId() const;
    QString getlabel() const;
    QString getstate() const;
    QString getcategory() const;
    int         getStock() const;


    void setlabel(const QString& label);
    void setstate(const QString& state);
    void setcategory(const QString& category);
    void setStock(int stock);

    void addEquipment();
    void readEquipment();
    void updateEquipment();
    void deleteEquipment();

private:
    int id;
    int stock;
    QString label;
    QString state;
    QString category;
};

#endif // CRUDEQUIPMENT_H
