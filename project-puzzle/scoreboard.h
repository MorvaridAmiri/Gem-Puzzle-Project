#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <QMainWindow>

namespace Ui {
class scoreboard;
}

class scoreboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit scoreboard(QWidget *parent = 0);
    ~scoreboard();

private:
    Ui::scoreboard *ui;
};

#endif // SCOREBOARD_H
