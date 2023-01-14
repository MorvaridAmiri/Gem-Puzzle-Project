#ifndef BOARD9_H
#define BOARD9_H

#include <QMainWindow>
#include <iostream>
#include <windows.h>

namespace Ui {
class board9;
}

class board9 : public QMainWindow
{
    Q_OBJECT

public:
    explicit board9(QWidget *parent = 0);
    ~board9();

private slots:
    void on_back_clicked();

private:
    Ui::board9 *ui;

};

#endif // BOARD9_H
