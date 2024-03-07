#ifndef SHOWEQUIPMENT_H
#define SHOWEQUIPMENT_H

#include <QDialog>

namespace Ui {
class showEquipment;
}

class showEquipment : public QDialog
{
    Q_OBJECT

public:
    explicit showEquipment(QWidget *parent = nullptr);
    ~showEquipment();

private:
    Ui::showEquipment *ui;
};

#endif // SHOWEQUIPMENT_H
