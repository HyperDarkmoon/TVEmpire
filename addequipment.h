#ifndef ADDEQUIPMENT_H
#define ADDEQUIPMENT_H

#include <QDialog>

namespace Ui {
class addEquipment;
}

class addEquipment : public QDialog
{
    Q_OBJECT

public:
    explicit addEquipment(QWidget *parent = nullptr);
    ~addEquipment();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::addEquipment *ui;
};

#endif // ADDEQUIPMENT_H
