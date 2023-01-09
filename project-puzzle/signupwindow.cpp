#include "signupwindow.h"
#include "ui_signupwindow.h"
#include "playerwindow.h"


SignUpWindow::SignUpWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignUpWindow)
{
    ui->setupUi(this);
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
        QFile xfile("UserList.txt");
        xfile.open(QIODevice::Append);
        QTextStream in(&xfile);
        in << PlayerUsername << endl<< PlayerPass << endl;
        xfile.close();

        this->close();
        playerWindow *Newmain= new playerWindow();
        Newmain->show();
    }
}
