#ifndef SPONSOR_H
#define SPONSOR_H

#include <QWidget>

namespace Ui {
class Sponsor;
}

class Sponsor : public QWidget
{
    Q_OBJECT

public:
    explicit Sponsor(QWidget *parent = nullptr);
    ~Sponsor();

private:
    Ui::Sponsor *ui;
};

#endif // SPONSOR_H
