#ifndef ADDEQUIPMENT_H
#define ADDEQUIPMENT_H

#include <QDialog>
#include <QLabel>  // Include QLabel header

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
    void on_selectImageButton_clicked();  // New private slot

signals:
    void buttonClicked();

private:
    Ui::addEquipment *ui;
    QLabel *imageLabel;  // New private QLabel member variable
};

#endif // ADDEQUIPMENT_H
