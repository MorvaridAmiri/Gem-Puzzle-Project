#include "sure.h"
#include "ui_sure.h"

sure::sure(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sure)
{
    ui->setupUi(this);
}

sure::~sure()
{
    delete ui;
}
