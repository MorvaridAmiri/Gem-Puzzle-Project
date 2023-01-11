#ifndef BOARD25_H
#define BOARD25_H

#include <QMainWindow>

namespace Ui {
class board25;
}

class board25 : public QMainWindow
{
    Q_OBJECT

public:
    explicit board25(QWidget *parent = 0);
    ~board25();

private:
    Ui::board25 *ui;
};

#endif // BOARD25_H
