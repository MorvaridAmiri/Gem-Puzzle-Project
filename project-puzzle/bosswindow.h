#ifndef BOSSWINDOW_H
#define BOSSWINDOW_H

#include <QMainWindow>

namespace Ui {
class BossWindow;
}

class BossWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BossWindow(QWidget *parent = 0);
    ~BossWindow();

private:
    Ui::BossWindow *ui;
};

#endif // BOSSWINDOW_H
