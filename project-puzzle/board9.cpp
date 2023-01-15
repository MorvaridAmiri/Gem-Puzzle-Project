#include "board9.h"
#include "ui_board9.h"
#include "playerwindow.h"
#include <windows.h>
#include <time.h>
#include <string.h>
#include <QFile>
#include "QStringList"
#include "QTextStream"

board9::board9(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::board9)
{
    ui->setupUi(this);
}

board9::~board9()
{
    delete ui;
}

void empty(QPushButton *butt1,QPushButton *butt2)
{
    QString str=butt2->text();
    if(str==""){
        butt2->setText(butt1->text());
        butt1->setText(str);
    }
}

void board9::on_back_clicked()
{
    this->close();
    playerWindow *Newmain= new playerWindow();
    Newmain->show();
}

void board9::on_Button1_clicked()
{
    empty( ui->Button1 ,ui->Button2);
    empty( ui->Button1, ui->Button4);
}

void board9::on_Button2_clicked()
{
    empty( ui->Button2,ui->Button1);
    empty( ui->Button2, ui->Button3);
    empty( ui->Button2, ui->Button5);
}

void board9::on_Button3_clicked()
{
    empty(ui->Button3, ui->Button2);
    empty( ui->Button3, ui->Button6);
}

void board9::on_Button4_clicked()
{
    empty( ui->Button4, ui->Button1);
    empty( ui->Button4, ui->Button7);
    empty(ui->Button4, ui->Button5);
}

void board9::on_Button5_clicked()
{
    empty( ui->Button5,ui->Button2);
    empty( ui->Button5, ui->Button4);
    empty( ui->Button5, ui->Button6);
    empty( ui->Button5, ui->Button8);
}

void board9::on_Button6_clicked()
{
    empty( ui->Button6, ui->Button3);
    empty( ui->Button6, ui->Button5);
    empty( ui->Button6, ui->Button9);
}

void board9::on_Button7_clicked()
{
    empty( ui->Button7, ui->Button4);
    empty( ui->Button7, ui->Button8);
}

void board9::on_Button8_clicked()
{
    empty( ui->Button8, ui->Button5);
    empty( ui->Button8, ui->Button7);
    empty( ui->Button8, ui->Button9);
}

void board9::on_Button9_clicked()
{
    empty( ui->Button9, ui->Button6);
    empty( ui->Button9, ui->Button8);

}
void board9::on_reset_clicked()
{
    ui->Button1->setText("1");
    ui->Button2->setText("5");
    ui->Button3->setText("8");
    ui->Button4->setText("6");
    ui->Button5->setText("7");
    ui->Button6->setText("2");
    ui->Button7->setText("3");
    ui->Button8->setText("4");
    ui->Button9->setText("");
}


