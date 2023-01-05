#include "playerwindow.h"
#include "ui_playerwindow.h"

playerWindow::playerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::playerWindow)
{
    ui->setupUi(this);
}

playerWindow::~playerWindow()
{
    delete ui;
}
