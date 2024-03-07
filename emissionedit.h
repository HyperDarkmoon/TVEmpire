#ifndef EMISSIONEDIT_H
#define EMISSIONEDIT_H

class CrudEmission;  // Forward declaration

#include <QDialog>

namespace Ui {
class EmissionEdit;
}

class EmissionEdit : public QDialog
{
    Q_OBJECT

public:
    explicit EmissionEdit(QWidget *parent = nullptr);
    ~EmissionEdit();
    void setData(const CrudEmission& emissiondata);
    void resetInputs();
private slots:
    void on_pushButton_5_clicked();
signals:
    void onButtonClick();
private:
    Ui::EmissionEdit *ui;
};

#endif // EMISSIONEDIT_H
