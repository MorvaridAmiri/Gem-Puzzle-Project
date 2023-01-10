#ifndef SETTINGS_H
#define SETTINGS_H

#include <QMainWindow>

namespace Ui {
class settings;
}

class settings : public QMainWindow
{
    Q_OBJECT

public:
    explicit settings(QWidget *parent = 0);
    ~settings();

private slots:
    void on_back_clicked();

    void on_puzzle_board_setting_clicked();

    void on_moves_setting_clicked();

    void on_back_setting_clicked();

    void on_time_setting_clicked();

private:
    Ui::settings *ui;
};

#endif // SETTINGS_H
