#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    first=new MyThread;
    second=new NextThread;
    third=new ThirdThread;

    qDebug()<<"mywidget"<<QThread::currentThreadId();
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_clicked()
{
    MyThread my_thread;
    my_thread.start();
    my_thread.wait();
}

void MyWidget::on_pushButton_2_clicked()
{
    NextThread *nextthread=new NextThread(this);
    nextthread->start();
}

void MyWidget::on_pushButton_3_clicked()
{
    first->start();
    second->start();
    third->start();
}
