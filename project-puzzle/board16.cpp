#include "board16.h"
#include "ui_board16.h"

board16::board16(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::board16)
{
    ui->setupUi(this);
}

board16::~board16()
{
    delete ui;
}
