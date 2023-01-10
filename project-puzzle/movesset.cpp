#include "movesset.h"
#include "ui_movesset.h"
#include "settings.h"

movesset::movesset(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::movesset)
{
    ui->setupUi(this);
}

movesset::~movesset()
{
    delete ui;
}

void movesset::on_back_clicked()
{
    this->close();
    settings *FreshMain = new settings();
    FreshMain->show();
}
