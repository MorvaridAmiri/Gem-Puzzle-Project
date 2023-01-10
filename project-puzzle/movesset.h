#ifndef MOVESSET_H
#define MOVESSET_H

#include <QMainWindow>

namespace Ui {
class movesset;
}

class movesset : public QMainWindow
{
    Q_OBJECT

public:
    explicit movesset(QWidget *parent = 0);
    ~movesset();

private slots:
    void on_back_clicked();

private:
    Ui::movesset *ui;
};

#endif // MOVESSET_H
