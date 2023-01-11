#ifndef FOUR_H
#define FOUR_H

#include <QMainWindow>

namespace Ui {
class four;
}

class four : public QMainWindow
{
    Q_OBJECT

public:
    explicit four(QWidget *parent = 0);
    ~four();

private slots:
    void on_back_clicked();

    void on_save_clicked();

private:
    Ui::four *ui;
};

#endif // FOUR_H
