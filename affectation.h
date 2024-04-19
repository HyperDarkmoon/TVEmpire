#ifndef AFFECTATION_H
#define AFFECTATION_H
#include <QWidget>
#include <QTime>
#include <QDate>
#include <QtSql>
#include <QDialog>

namespace Ui {
class Affectation;
}

class Affectation : public QDialog
{
    Q_OBJECT

public:
    explicit Affectation(QWidget *parent = nullptr);
    void refreshEmployeeList();
    void refreshEquipmentsList();
    ~Affectation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Affectation *ui;
};

class CrudAffectation {
    public: 
        CrudAffectation(unsigned int empId = 0, unsigned int equipId = 0);
        void setEmpId(unsigned int empId);
        unsigned int getEmpId() const;
        void setEquipId(unsigned int equipId);
        unsigned int getEquipId() const;
        void addAffectation();
        CrudAffectation getAffectationByEmpId(unsigned int empId);
        CrudAffectation getAffectationByEquipId(unsigned int equipId);
        int getEmployeeIdByEquipmentId(unsigned int equipId);
    private:
        unsigned int empId;
        unsigned int equipId;

};

#endif // AFFECTATION_H
