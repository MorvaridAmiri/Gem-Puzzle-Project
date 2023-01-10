#include "about.h"
#include "ui_about.h"
#include "menu.h"

about::about(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
}

about::~about()
{
    delete ui;
}

void about::on_back_clicked()
{
    this->close();
    menu *FreshMain = new menu();
    FreshMain->show();
}
