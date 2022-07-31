#include "connectmainwindow.h"
#include "ui_connectmainwindow.h"
#include <QDebug>

ConnectMainWindow::ConnectMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ConnectMainWindow)
{
    ui->setupUi(this);
    form=new Form() ;
    //c_form=new C_Form();
    connect(this,SIGNAL(mySignal()),this,SLOT(mySlot()));
    connect(form,SIGNAL(mySignal2()),this,SLOT(mySlot2()));
    //connect(c_form,SIGNAL(mySignal3()),this,SLOT(mySlot3()));
}

ConnectMainWindow::~ConnectMainWindow()
{
    delete ui;
}

void ConnectMainWindow::mySlot()
{
    //Qt: qDebug()<<123;
    form->show();
    this->hide();
}
void ConnectMainWindow::mySlot2()
{
    //Qt: qDebug()<<123;
    this->show();
    form->hide();
}


void ConnectMainWindow::on_pushButton_clicked()
{
    emit mySignal();
}
