#ifndef FIVE_H
#define FIVE_H

#include <QMainWindow>

namespace Ui {
class five;
}

class five : public QMainWindow
{
    Q_OBJECT

public:
    explicit five(QWidget *parent = 0);
    ~five();

private slots:
    void on_back_clicked();

    void on_save_clicked();

private:
    Ui::five *ui;
};

#endif // FIVE_H
