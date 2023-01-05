#include "bosswindow.h"
#include "ui_bosswindow.h"

BossWindow::BossWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BossWindow)
{
    ui->setupUi(this);
}

BossWindow::~BossWindow()
{
    delete ui;
}
