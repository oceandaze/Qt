#include "testmovetothread.h"
#include <QDebug>


QString g_res="";
TestMoveToThread::TestMoveToThread(QObject *parent) : QObject(parent)
{
    qDebug()<<"构造函数"<<QThread::currentThreadId();
}

void TestMoveToThread::firstSlot()
{
     qDebug()<<"firstSlot"<<QThread::currentThreadId();
    int i=0;
    while(i<10){
        if(sm_flag==0){
            qDebug()<<"A";
            g_res+="A";
            sm_flag=1;
            i++;
        }
    }
}

void TestMoveToThread::secondSlot()
{
       qDebug()<<"secondSlot"<<QThread::currentThreadId();
    int i=0;
    while(i<10){
        if(sm_flag==1){
            qDebug()<<"B";
              g_res+="B";
            sm_flag=2;
            i++;
        }
    }

}

void TestMoveToThread::thirdSlot()
{
       qDebug()<<"thirdSlot"<<QThread::currentThreadId();
    int i=0;
    while(i<10){
        if(sm_flag==2){
            qDebug()<<"C";
              g_res+="C";
            sm_flag=0;
            i++;
        }
    }
    qDebug()<<g_res;

}
int TestMoveToThread:: sm_flag=0;


void TestMoveToThread::working()
{
    qDebug()<<"当前线程对象的地址："<<QThread::currentThread();

    int num=0;
    while(num<100000){
        emit curNumber(num++);
        QThread::usleep(1);
    }
    qDebug()<<"run()执行完毕，子线程退出。。。";
}
