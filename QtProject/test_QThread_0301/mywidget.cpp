#include "mywidget.h"
#include "ui_mywidget.h"
#include <QThread>
#include <QDebug>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    myTimer=new QTimer(this);

    connect(myTimer,&QTimer::timeout,this,&MyWidget::dealTimeout);
    thread=new MyThread(this);
    connect(thread,&MyThread::isDone,this,&MyWidget::dealDone);

    connect(this,&MyWidget::destroyed,this,&MyWidget::stopThread);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::dealTimeout()
{
    static int i=0;
    i++;
    ui->lcdNumber->display(i);
}

void MyWidget::dealDone()
{
    qDebug()<<"it is over";
    myTimer->stop();
}

void MyWidget::stopThread()
{
    thread->quit();
    thread->wait();
}

void MyWidget::on_pushButton_clicked()
{
    if(myTimer->isActive()==false){
        myTimer->start(100);
    }

    thread->start();

    //myTimer->stop();
    //qDebug()<<"over";

}
