#include "boardset.h"
#include "ui_boardset.h"
#include "menu.h"
#include "three.h"
#include "four.h"
#include "five.h"

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
    menu *FreshMain = new menu();
    FreshMain->show();
}

void boardset::on_three_clicked()
{
    this->close();
    three *FreshMain = new three();
    FreshMain->show();
}

void boardset::on_four_clicked()
{
    this->close();
    four *FreshMain = new four();
    FreshMain->show();
}

void boardset::on_five_clicked()
{
    this->close();
    five *FreshMain = new five();
    FreshMain->show();
}
