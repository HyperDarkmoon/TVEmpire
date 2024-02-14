#ifndef EMISSION_H
#define EMISSION_H

#include <QWidget>

namespace Ui {
class Emission;
}

class Emission : public QWidget
{
    Q_OBJECT

public:
    explicit Emission(QWidget *parent = nullptr);
    ~Emission();

private:
    Ui::Emission *ui;
};

#endif // EMISSION_H
