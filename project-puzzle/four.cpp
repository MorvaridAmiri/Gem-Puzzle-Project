#include "four.h"
#include "ui_four.h"
#include "boardset.h"
#include <string.h>
#include <QFile>
#include "QStringList"
#include "QTextStream"

four::four(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::four)
{
    ui->setupUi(this);
}

four::~four()
{
    delete ui;
}

void four::on_back_clicked()
{
    this->close();
    boardset *FreshMain = new boardset();
    FreshMain->show();
}

void four::on_save_clicked()
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
        vojod=QFile::exists("4.txt");
        if(vojod==true)
            QFile::remove("4.txt");


        QFile xfile("4.txt");
        xfile.open(QIODevice::Append);
        QTextStream in(&xfile);
        in << move << endl<< time << endl;
        xfile.close();
        this->close();
        boardset *Newmain= new boardset();
        Newmain->show();

    }
}
