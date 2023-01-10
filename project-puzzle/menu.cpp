#include "menu.h"
#include "ui_menu.h"
#include "loginwindow.h"
#include "playerwindow.h"
#include "adminlogin.h"
#include "scoreboard.h"
#include "about.h"

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

void menu::on_scoreboard_clicked()
{
    this->close();
    scoreboard *FreshMain = new scoreboard();
    FreshMain->show();
}

void menu::on_settingsButton_clicked()
{
    this->close();
    adminlogin *FreshMain = new adminlogin();
    FreshMain->show();
}

void menu::on_exit_clicked()
{
    this->close();
}


void menu::on_about_us_clicked()
{
    this->close();
    about *FreshMain = new about();
    FreshMain->show();
}
