#ifndef BACKSTATE_H
#define BACKSTATE_H

#include <QMainWindow>

namespace Ui {
class backstate;
}

class backstate : public QMainWindow
{
    Q_OBJECT

public:
    explicit backstate(QWidget *parent = 0);
    ~backstate();

private slots:
    void on_save_clicked();

    void on_back_clicked();

private:
    Ui::backstate *ui;
};

#endif // BACKSTATE_H
