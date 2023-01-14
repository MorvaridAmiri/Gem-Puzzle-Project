#include "board9.h"
#include "ui_board9.h"
#include "playerwindow.h"

board9::board9(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::board9)
{
    ui->setupUi(this);
}

board9::~board9()
{
    delete ui;
}

void board9::on_back_clicked()
{
    this->close();
    playerWindow *Newmain= new playerWindow();
    Newmain->show();
}
