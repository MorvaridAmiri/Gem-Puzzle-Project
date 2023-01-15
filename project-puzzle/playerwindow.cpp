#include "playerwindow.h"
#include "ui_playerwindow.h"
#include "menu.h"
#include "board9.h"
#include "board16.h"
#include "board25.h"

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

void playerWindow::on_medium_clicked()
{
    this->close();
    board25 *Newmain= new board25();
    Newmain->show();
}

void playerWindow::on_hard_clicked()
{
    this->close();
    board16 *Newmain= new board16();
    Newmain->show();
}
