#ifndef ABOUT_H
#define ABOUT_H

#include <QMainWindow>

namespace Ui {
class about;
}

class about : public QMainWindow
{
    Q_OBJECT

public:
    explicit about(QWidget *parent = 0);
    ~about();

private slots:
    void on_back_clicked();

private:
    Ui::about *ui;
};

#endif // ABOUT_H
