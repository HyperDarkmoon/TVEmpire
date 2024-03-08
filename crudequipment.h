#ifndef CRUDEQUIPMENT_H
#define CRUDEQUIPMENT_H
#include <QString>
#include <QVariant>
class CRUDequipment
{
public:
    CRUDequipment(int id, const QString label, int stock, const QString state, const QString category );
    CRUDequipment();
    ~CRUDequipment();

    int     getId() const;
    QString getlabel() const;
    QString getstate() const;
    QString getcategory() const;
    int     getStock() const;

    void setId(int id);
    void setlabel(const QString& label);
    void setstate(const QString& state);
    void setcategory(const QString& category);
    void setStock(int stock);

    void addEquipment();
   // bool createEquipment(CRUDequipment E);
    void readEquipment();
    void updateEquipment();
    void deleteEquipment();
    void deleteEquipment(int id);
    QList<CRUDequipment> getAll();
    QVariant getFieldByIndex(int index) const;
private:
    int id;
    int stock;
    QString label;
    QString state;
    QString category;
};

#endif // CRUDEQUIPMENT_H
