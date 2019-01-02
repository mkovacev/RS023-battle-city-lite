#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <ui_menu.h>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

    //deleted copy constructor and operator '='
    Menu(const Menu&) = delete;
    Menu& operator = (const Menu&) = delete;

    QPushButton *getStartButton();

private slots:
    /**
     * @brief exitProgram exits program
     */
    void exitProgram();

private:
    Ui::Menu *_ui;

    /**
     * @brief connectSlotsAndSignals enables program function to catch actions
     */
    void connectSlotsAndSignals();
};

#endif // MENU_H