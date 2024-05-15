#ifndef MODIFYEQUIPMENT_H
#define MODIFYEQUIPMENT_H

#include <QDialog>

namespace Ui {
class modifyEquipment;
}

class modifyEquipment : public QDialog
{
    Q_OBJECT

public:
    explicit modifyEquipment(QWidget *parent = nullptr);
    ~modifyEquipment();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::modifyEquipment *ui;
};

#endif // MODIFYEQUIPMENT_H
