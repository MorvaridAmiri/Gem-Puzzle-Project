#include "adminlogin.h"
#include "ui_adminlogin.h"
#include <QFile>
#include "QStringList"
#include "QTextStream"

#include "settings.h"

adminlogin::adminlogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminlogin)
{
    ui->setupUi(this);
}

adminlogin::~adminlogin()
{
    delete ui;
}

void adminlogin::on_login_admin_clicked()
{
    QString PlayerUsername = ui->usernameadmin->text();
    QString PlayerPass = ui->passwordadmin->text();

    //*********************************************************************************
    if(PlayerUsername == "morvarid" && PlayerPass == "5046")
    {
        this->close();
        settings *newmain= new settings();
        newmain->show();
    }
    else if(PlayerUsername == nullptr || PlayerPass == nullptr )
    {
        ui->invalidlabel->setText("Please Fill All Of The Items");
    }
    else
        ui->invalidlabel->setText("Invalid username or password");
}
