#ifndef EMPLOYEEEDIT_H
#define EMPLOYEEEDIT_H

class CrudEmployee;

#include <QDialog>

namespace Ui {
class employeeedit;
}

class employeeedit : public QDialog
{
    Q_OBJECT

public:
    explicit employeeedit(QWidget *parent = nullptr);
    ~employeeedit();
    void setData(const CrudEmployee &employeedata);

private slots:
    void on_pushButton_5_clicked();
signals:
    void onButtonClick();
private:
    Ui::employeeedit *ui;
};

#endif // EMPLOYEEEDIT_H
