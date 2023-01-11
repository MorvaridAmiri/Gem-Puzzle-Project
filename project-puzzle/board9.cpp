#include "board9.h"
#include "ui_board9.h"

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
