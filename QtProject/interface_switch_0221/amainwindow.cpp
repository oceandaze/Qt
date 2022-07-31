#include "amainwindow.h"
#include "ui_amainwindow.h"
#include <QDebug>

AMainWindow::AMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AMainWindow)
{
    ui->setupUi(this);
    bform=new BForm;
    cform=new CForm;
    connect(this,SIGNAL(signalA()),this,SLOT(slotA()));
    connect(bform,SIGNAL(signalB()),this,SLOT(slotB()));
    connect(cform,SIGNAL(signalC()),this,SLOT(slotC()));
}

AMainWindow::~AMainWindow()
{
    delete ui;
    delete bform;
    delete cform;
}

void AMainWindow::on_pushButton_clicked()
{
    emit signalA();
}

void AMainWindow::slotA()
{
    qDebug()<<123;
    this->hide();
    bform->show();

}

void AMainWindow::slotB()
{
    bform->hide();
    cform->show();
}

void AMainWindow::slotC()
{
    cform->hide();
   this->show();
}
