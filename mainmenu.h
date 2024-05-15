#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>

namespace Ui {
class MainMenu;
}

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();
    void displayEmissionChart(QWidget *widget);
    void displayEmployeeChart(QWidget *widget);
    void displayEquipmentChart(QWidget *widget);
    void displaySponsorChart(QWidget *widget);
private:
    Ui::MainMenu *ui;
};

#endif // MAINMENU_H
