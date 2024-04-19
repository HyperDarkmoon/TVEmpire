#ifndef CRUDEQUIPMENT_H
#define CRUDEQUIPMENT_H

#include <QString>
#include <QVariant>
#include <QByteArray> // Added for handling IMAGE as QByteArray
#include <vector>     // Added for other functionalities, if needed

class CRUDequipment
{
public:
    CRUDequipment(int id, const QString label, int stock, const QString state, const QString category, const QByteArray image = QByteArray()); // Added image parameter
    CRUDequipment();
    ~CRUDequipment();

    int     getId() const;
    QString getlabel() const;
    QString getstate() const;
    QString getcategory() const;
    int     getStock() const;
    QByteArray getImage() const; // Added getImage method

    void setId(int id);
    void setlabel(const QString& label);
    void setstate(const QString& state);
    void setcategory(const QString& category);
    void setStock(int stock);
    void setImage(const QByteArray& image); // Added setImage method

    void addEquipment();
    void readEquipment();
    void updateEquipment();
    void deleteEquipment();
    void deleteEquipment(int id);
    unsigned int getEquipmentIdByLabel(const QString& label);

    QList<CRUDequipment> getAll();
    QVariant getFieldByIndex(int index) const;

private:
    int id;
    int stock;
    QString label;
    QString state;
    QString category;
    QByteArray image; // Added image member variable
};

#endif // CRUDEQUIPMENT_H
