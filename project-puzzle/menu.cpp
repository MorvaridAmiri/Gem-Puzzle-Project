#include "menu.h"
#include "ui_menu.h"
#include "loginwindow.h"
#include "playerwindow.h"
#include "settings.h"

menu::menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_loginButton_clicked()
{
    this->close();
    LoginWindow *FreshMain = new LoginWindow();
    FreshMain->show();
}

void menu::on_guestButton_clicked()
{
    this->close();
    playerWindow *FreshMain = new playerWindow();
    FreshMain->show();

}

void menu::on_settingsButton_clicked()
{
    this->close();
    settings *FreshMain = new settings();
    FreshMain->show();
}