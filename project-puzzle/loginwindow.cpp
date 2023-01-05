#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QFile>
#include "QStringList"
#include "QTextStream"
#include "playerwindow.h"
#include "signupwindow.h"
#include "bosswindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}
int CountUsers()
{
    int n = 0;
    QFile file("UserList.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream rd(&file);
    while(!rd.atEnd())
    {
        n++;
        rd.readLine();
    }
    file.close();

    return n/2 ;
}



void LoginWindow::on_loginButton_clicked()
{
    QString PlayerUsername = ui->usernametb->text();
    QString PlayerPass = ui->passwordtb->text();


    //*********************************************************************************
    if(PlayerUsername == "morvarid" && PlayerPass == "5046")
    {
        this->close();
        BossWindow *newmain= new BossWindow();
        newmain->show();
    }

    else
    {
        int UNum = CountUsers() ;
        struct UserData
        {
            QString Name;
            QString Pass;
        };
        bool NewUser = true;
        UserData *User = new UserData[UNum];

        QFile file("UserList.txt");
        file.open(QIODevice::ReadOnly);
        QTextStream rd(&file);
        file.seek(0);
        for(int i = 0 ; i < UNum ; i++)
        {
            User[i].Name = rd.readLine();
            User[i].Pass = rd.readLine();
        }
        file.close();

        for(int i = 0 ; i < UNum ; i++)
        {
            if(User[i].Name == PlayerUsername && User[i].Pass == PlayerPass)
            {
                NewUser = false;
                break;
            }
        }

        if(NewUser)
        {
            ui->invalidlable->setText("Invalid username or password");
        }
        else
        {
            this->close();
            playerWindow *Newmain= new playerWindow();
            Newmain->show();
        }
    }

}



void LoginWindow::on_sighnuoButton_clicked()
{
    this->close();
    SignUpWindow *FreshMain = new SignUpWindow();
    FreshMain->show();
}
