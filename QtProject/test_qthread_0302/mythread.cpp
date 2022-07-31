#include "mythread.h"
#include <QDebug>
#include <QString>

int g_flag = 0;
QString g_res="";
MyThread::MyThread(QObject*parent):QThread(parent)
{
    qDebug()<<"first"<<QThread::currentThreadId();
}

void MyThread::run()
{
    qDebug()<<"first"<<QThread::currentThreadId();

    int i=0;
    while(i<10){
        if(g_flag==0){
            qDebug()<<"A";
            g_res+="A";
            g_flag=1;
            i++;
        }
    }
}
