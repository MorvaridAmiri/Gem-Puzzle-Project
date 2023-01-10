#ifndef MENU_H
#define MENU_H

#include <QMainWindow>

namespace Ui {
class menu;
}

class menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
    ~menu();

private slots:
    void on_loginButton_clicked();

    void on_guestButton_clicked();

    void on_settingsButton_clicked();

    void on_exit_clicked();

    void on_scoreboard_clicked();

    void on_about_us_clicked();

private:
    Ui::menu *ui;
};

#endif // MENU_H
