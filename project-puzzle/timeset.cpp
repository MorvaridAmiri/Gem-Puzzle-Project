#include "timeset.h"
#include "ui_timeset.h"
#include "settings.h"

timeset::timeset(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::timeset)
{
    ui->setupUi(this);
}

timeset::~timeset()
{
    delete ui;
}

void timeset::on_back_clicked()
{
    this->close();
    settings *FreshMain = new settings();
    FreshMain->show();
}
