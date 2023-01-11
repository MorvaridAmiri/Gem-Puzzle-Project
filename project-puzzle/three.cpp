#include "three.h"
#include "ui_three.h"
#include "boardset.h"
#include <string.h>
#include <QFile>
#include "QStringList"
#include "QTextStream"

three::three(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::three)
{
    ui->setupUi(this);
}

three::~three()
{
    delete ui;
}

void three::on_back_clicked()
{
    this->close();
    boardset *FreshMain = new boardset();
    FreshMain->show();
}

void three::on_save_clicked()
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
        vojod=QFile::exists("3.txt");
        if(vojod==true)
            QFile::remove("3.txt");


        QFile xfile("3.txt");
        xfile.open(QIODevice::Append);
        QTextStream in(&xfile);
        in << move << endl<< time << endl;
        xfile.close();
        this->close();
        boardset *Newmain= new boardset();
        Newmain->show();

    }
}
