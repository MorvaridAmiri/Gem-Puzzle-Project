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

private:
    Ui::playerWindow *ui;
};

#endif // PLAYERWINDOW_H
