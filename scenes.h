#ifndef SCENES_H
#define SCENES_H

#include <QWidget>
namespace Ui {
class Scenes;
}

class Scenes : public QWidget
{
    Q_OBJECT

public:
    explicit Scenes(QWidget *parent = nullptr);
    ~Scenes();

private:
    Ui::Scenes *ui;
};

#endif // SCENES_H
