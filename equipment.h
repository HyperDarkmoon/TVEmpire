#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <QWidget>
#include "addequipment.h"

namespace Ui {
class Equipment;
}

class Equipment : public QWidget
{
    Q_OBJECT

public:
    explicit Equipment(QWidget *parent = nullptr);
    ~Equipment();
    void refreshTable();
    void onEditButtonClicked(int row);
    void onDeleteButtonClicked(unsigned int id);
    void onAddEmissionDialogClosed();
private slots:
    void on_Ajout_clicked();

private:
    Ui::Equipment *ui;
    addEquipment *addE;


};

#endif // EQUIPMENT_H
