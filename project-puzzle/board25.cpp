#include "board25.h"
#include "ui_board25.h"
#include "playerwindow.h"
board25::board25(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::board25)
{
    ui->setupUi(this);
}

board25::~board25()
{
    delete ui;
}

void board25::on_back_clicked()
{
    this->close();
    playerWindow *Newmain= new playerWindow();
    Newmain->show();
}
