#ifndef CONTRAT_H
#define CONTRAT_H

#include <QDialog>

namespace Ui {
class contrat;
}

class contrat : public QDialog
{
    Q_OBJECT

public:
    explicit contrat(QWidget *parent = nullptr);
    ~contrat();

private:
    Ui::contrat *ui;
};

#endif // CONTRAT_H
