#include "movetothreadmainwindow.h"
#include "ui_movetothreadmainwindow.h"
#include <QDebug>
MoveToThreadMainWindow::MoveToThreadMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MoveToThreadMainWindow)
{
    ui->setupUi(this);
    m_thread1=new QThread;
    m_thread2=new QThread;
    m_thread3=new QThread;
    m_test1=new TestMoveToThread;
    m_test2=new TestMoveToThread;
    m_test3=new TestMoveToThread;
    m_test1->moveToThread(m_thread1);
    m_test2->moveToThread(m_thread2);
    m_test3->moveToThread(m_thread3);
    connect(m_thread1,SIGNAL(started()),m_test1,SLOT(firstSlot()),Qt::QueuedConnection);
    connect(m_thread2,SIGNAL(started()),m_test2,SLOT(secondSlot()),Qt::QueuedConnection);
    connect(m_thread3,SIGNAL(started()),m_test3,SLOT(thirdSlot()),Qt::QueuedConnection);
    qDebug()<<QThread::idealThreadCount();
       qDebug()<<"MoveToThreadMainWindow"<<QThread::currentThreadId();

       QThread*sub=new QThread;
       TestMoveToThread *work=new TestMoveToThread;
       work->moveToThread(sub);

       sub->start();
       connect (ui->startBtn,&QPushButton::clicked,work,&TestMoveToThread::working);
       connect(work,&TestMoveToThread::curNumber,this,[=](int num)
       {
          ui ->label->setNum(num);
       });


}

MoveToThreadMainWindow::~MoveToThreadMainWindow()
{
    delete ui;
    delete m_test1;
    delete m_test2;
    delete m_test3;
    m_thread1->deleteLater();
    m_thread2->deleteLater();
    m_thread3->deleteLater();

    qDebug()<<"析构";
}

void MoveToThreadMainWindow::on_pushButton_clicked()
{
    m_thread1->start();
    m_thread2->start();
    m_thread3->start();
}
