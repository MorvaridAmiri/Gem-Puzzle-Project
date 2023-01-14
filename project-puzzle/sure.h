#ifndef SURE_H
#define SURE_H

#include <QMainWindow>

namespace Ui {
class sure;
}

class sure : public QMainWindow
{
    Q_OBJECT

public:
    explicit sure(QWidget *parent = 0);
    ~sure();

private:
    Ui::sure *ui;
};

#endif // SURE_H
