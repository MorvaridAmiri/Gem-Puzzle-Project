#include "backstate.h"
#include "ui_backstate.h"
#include "settings.h"

backstate::backstate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::backstate)
{
    ui->setupUi(this);
}

backstate::~backstate()
{
    delete ui;
}

void backstate::on_save_clicked()
{
    this->close();
    settings *FreshMain = new settings();
    FreshMain->show();
}

void backstate::on_back_clicked()
{
    this->close();
    settings *FreshMain = new settings();
    FreshMain->show();
}
