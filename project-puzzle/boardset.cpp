#include "boardset.h"
#include "ui_boardset.h"
#include "settings.h"

boardset::boardset(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::boardset)
{
    ui->setupUi(this);
}

boardset::~boardset()
{
    delete ui;
}

void boardset::on_back_clicked()
{
    this->close();
    settings *FreshMain = new settings();
    FreshMain->show();
}
