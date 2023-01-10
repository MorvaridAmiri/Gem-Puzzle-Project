#ifndef TIMESET_H
#define TIMESET_H

#include <QMainWindow>

namespace Ui {
class timeset;
}

class timeset : public QMainWindow
{
    Q_OBJECT

public:
    explicit timeset(QWidget *parent = 0);
    ~timeset();

private slots:
    void on_back_clicked();

private:
    Ui::timeset *ui;
};

#endif // TIMESET_H
