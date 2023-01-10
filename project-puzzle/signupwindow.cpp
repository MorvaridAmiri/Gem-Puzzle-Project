#include "signupwindow.h"
#include "ui_signupwindow.h"
#include <string.h>
#include <QFile>
#include "QStringList"
#include "QTextStream"
#include "playerwindow.h"


SignUpWindow::SignUpWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignUpWindow)
{
    ui->setupUi(this);
}
int CountUser()
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


SignUpWindow::~SignUpWindow()
{
    delete ui;
}

void SignUpWindow::on_signup_Button_clicked()
{
    QString PlayerUsername = ui->usernameup->text();
    QString PlayerPass = ui->passwordup->text();
    QFile file(PlayerUsername+"txt");


    //check lines:
    if(PlayerUsername == nullptr || PlayerPass == nullptr )
    {
        ui->invalidlabel->setText("Please Fill All Of The Items");
    }
    else
    {
        int UNum = CountUser() ;
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
            if(User[i].Name == PlayerUsername )
            {
                NewUser = false;
                break;
            }
        }

        if(NewUser)
        {
                QFile xfile("UserList.txt");
                xfile.open(QIODevice::Append);
                QTextStream in(&xfile);
                in << PlayerUsername << endl<< PlayerPass << endl;
                xfile.close();
                this->close();
                playerWindow *Newmain= new playerWindow();
                Newmain->show();
        }
        else
        {
            ui->invalidlabel->setText("The username already exists");
        }
    }

}
