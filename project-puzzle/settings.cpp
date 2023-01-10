#include "settings.h"
#include "ui_settings.h"
#include "menu.h"
#include "boardset.h"
#include "movesset.h"
#include "backstate.h"
#include "timeset.h"

settings::settings(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
}

settings::~settings()
{
    delete ui;
}

void settings::on_back_clicked()
{
    this->close();
    menu *FreshMain = new menu();
    FreshMain->show();
}

void settings::on_puzzle_board_setting_clicked()
{
    this->close();
    boardset *FreshMain = new boardset();
    FreshMain->show();
}

void settings::on_moves_setting_clicked()
{
    this->close();
    movesset *FreshMain = new movesset();
    FreshMain->show();
}

void settings::on_back_setting_clicked()
{
    this->close();
    backstate *FreshMain = new backstate();
    FreshMain->show();
}

void settings::on_time_setting_clicked()
{
    this->close();
    timeset *FreshMain = new timeset();
    FreshMain->show();
}
