#include "five.h"
#include "ui_five.h"
#include "boardset.h"
#include <string.h>
#include <QFile>
#include "QStringList"
#include "QTextStream"

five::five(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::five)
{
    ui->setupUi(this);
}

five::~five()
{
    delete ui;
}

void five::on_back_clicked()
{
    this->close();
    boardset *FreshMain = new boardset();
    FreshMain->show();
}

void five::on_save_clicked()
{
    QString move = ui->move->text();
    QString time = ui->time->text();

    //check lines:
    if(move == nullptr || time == nullptr )
    {
        ui->invalid_label->setText("Please Fill All Of The Items");
    }
    else
    {
        bool vojod;
        vojod=QFile::exists("5.txt");
        if(vojod==true)
            QFile::remove("5.txt");


        QFile xfile("5.txt");
        xfile.open(QIODevice::Append);
        QTextStream in(&xfile);
        in << move << endl<< time << endl;
        xfile.close();
        this->close();
        boardset *Newmain= new boardset();
        Newmain->show();

    }
}
