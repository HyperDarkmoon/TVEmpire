#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <QWidget>
#include "addequipment.h"
#include "modifyequipment.h"

namespace Ui {
class Equipment;
}

class Equipment : public QWidget
{
    Q_OBJECT

public:
    explicit Equipment(QWidget *parent = nullptr);
    ~Equipment();

private slots:
    void on_Ajout_clicked();
    void on_Modifier_clicked();

private:

    addEquipment *addE;
    modifyEquipment *modE;
    Ui::Equipment *ui;
};

#endif // EQUIPMENT_H
