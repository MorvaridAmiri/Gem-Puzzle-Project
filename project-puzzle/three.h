#ifndef THREE_H
#define THREE_H

#include <QMainWindow>

namespace Ui {
class three;
}

class three : public QMainWindow
{
    Q_OBJECT

public:
    explicit three(QWidget *parent = 0);
    ~three();

private slots:
    void on_back_clicked();

    void on_save_clicked();

private:
    Ui::three *ui;
};

#endif // THREE_H
