#ifndef BOARDSET_H
#define BOARDSET_H

#include <QMainWindow>

namespace Ui {
class boardset;
}

class boardset : public QMainWindow
{
    Q_OBJECT

public:
    explicit boardset(QWidget *parent = 0);
    ~boardset();

private slots:
    void on_back_clicked();

private:
    Ui::boardset *ui;
};

#endif // BOARDSET_H
