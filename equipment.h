#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <QWidget>
#include "addequipment.h"
#include "pdfexport.h"
#include "chatbox.h"
#include <QLabel>
#include <QMouseEvent>
#include "sponsor.h"
#include "affectation.h"

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
    void displayChart();
    void filterTable(const QString &text);
    void onSearchButtonClicked(int row);
private slots:
    void on_Ajout_clicked();
    void on_pdfButton_4_clicked();
    void on_pdfButton_5_clicked();

    void on_pushButton_clicked();

    void on_google_clicked();

    void on_amazon_clicked();

    void on_visual_impact_clicked();

    void on_Affecter_clicked();

    void on_Ajout_2_clicked();

    void selectImage();

private:
    Ui::Equipment *ui;
    addEquipment *addE;
    Affectation *affecter;
    QString selectedImagePath;
};

#endif // EQUIPMENT_H
