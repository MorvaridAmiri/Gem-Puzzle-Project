#include "playerwindow.h"
#include "ui_playerwindow.h"
#include "menu.h"
#include "board9.h"

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

void playerWindow::on_easy_clicked()
{
    this->close();
    board9 *FreshMain = new board9();
    FreshMain->show();
}
