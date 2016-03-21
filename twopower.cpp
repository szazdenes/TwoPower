#include "twopower.h"
#include "ui_twopower.h"

TwoPower::TwoPower(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TwoPower)
{
    ui->setupUi(this);
}

TwoPower::~TwoPower()
{
    delete ui;
}

void TwoPower::on_pushButton_clicked()
{
    int n,k;
    n = 0;
    k = 0;

    while(n >= 0 && k >= 0){
        while (n*log10(2)-k >= log10(2016)){
            if(n*log10(2)-k >= log10(2016) && n*log10(2)-k < log10(2017)){
                writeToList(QString::number(n) + "\t" + QString::number(k));
                writeToList("Ready.");
                QApplication::processEvents();
                return;
            }
            else
                k++;
        }
        writeToList(QString::number(n));
        n++;
        QApplication::processEvents();
    }
}

void TwoPower::writeToList(QString str)
{
    if(ui->listWidget->count()>100)
        ui->listWidget->takeItem(0);
    ui->listWidget->addItem(str);
    ui->listWidget->scrollToBottom();
}
