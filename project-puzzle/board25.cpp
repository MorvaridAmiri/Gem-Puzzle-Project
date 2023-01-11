#include "board25.h"
#include "ui_board25.h"

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
