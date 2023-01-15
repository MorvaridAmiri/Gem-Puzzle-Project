#ifndef BOARD16_H
#define BOARD16_H

#include <QMainWindow>

namespace Ui {
class board16;
}

class board16 : public QMainWindow
{
    Q_OBJECT

public:
    explicit board16(QWidget *parent = 0);
    ~board16();

private slots:
    void on_back_clicked();

private:
    Ui::board16 *ui;
};

#endif // BOARD16_H
