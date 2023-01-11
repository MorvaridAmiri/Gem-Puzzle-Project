#include "playerwindow.h"
#include "ui_playerwindow.h"
#include "menu.h"

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


void playerWindow::on_back_clicked()
{
    this->close();
    menu *FreshMain = new menu();
    FreshMain->show();
}
