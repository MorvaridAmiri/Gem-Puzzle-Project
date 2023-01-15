#ifndef PLAYERWINDOW_H
#define PLAYERWINDOW_H

#include <QMainWindow>

namespace Ui {
class playerWindow;
}

class playerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit playerWindow(QWidget *parent = 0);
    ~playerWindow();

private slots:
    void on_back_clicked();

    void on_easy_clicked();

    void on_medium_clicked();

    void on_hard_clicked();

private:
    Ui::playerWindow *ui;
};

#endif // PLAYERWINDOW_H
