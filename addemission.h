#ifndef ADDEMISSION_H
#define ADDEMISSION_H

#include <QWidget>

namespace Ui {
class addEmission;
}

class addEmission : public QWidget
{
    Q_OBJECT

public:
    explicit addEmission(QWidget *parent = nullptr);
    ~addEmission();

private:
    Ui::addEmission *ui;
};

#endif // ADDEMISSION_H