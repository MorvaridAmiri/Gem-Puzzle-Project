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

    void on_Button1_clicked();

    void on_Button2_clicked();

    void on_Button3_clicked();

    void on_Button4_clicked();

    void on_Button5_clicked();

    void on_Button6_clicked();

    void on_Button7_clicked();

    void on_Button8_clicked();

    void on_Button9_clicked();

    void on_reset_clicked();

private:
    Ui::board9 *ui;

};

#endif // BOARD9_H
