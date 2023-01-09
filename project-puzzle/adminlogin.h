#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QMainWindow>

namespace Ui {
class adminlogin;
}

class adminlogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminlogin(QWidget *parent = 0);
    ~adminlogin();

private slots:
    void on_login_admin_clicked();

private:
    Ui::adminlogin *ui;
};

#endif // ADMINLOGIN_H
