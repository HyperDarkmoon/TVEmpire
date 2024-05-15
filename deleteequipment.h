#ifndef DELETEEQUIPMENT_H
#define DELETEEQUIPMENT_H

#include <QDialog>

namespace Ui {
class deleteEquipment;
}

class deleteEquipment : public QDialog
{
    Q_OBJECT

public:
    explicit deleteEquipment(QWidget *parent = nullptr);
    ~deleteEquipment();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::deleteEquipment *ui;
};

#endif // DELETEEQUIPMENT_H
