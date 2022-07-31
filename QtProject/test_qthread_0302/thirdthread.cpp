#include "thirdthread.h"

#include <QDebug>
extern int g_flag;
extern QString g_res;
ThirdThread::ThirdThread(QObject*parent):QThread(parent)
{
 qDebug()<<"third"<<QThread::currentThreadId();
}

void ThirdThread::run()
{
     qDebug()<<"third"<<QThread::currentThreadId();
    int i=0;
    while(i<10){
        if(g_flag==2){
            qDebug()<<"C";
            g_res +="C";
            g_flag=0;
            i++;

        }
    }
    qDebug()<<g_res;
}
