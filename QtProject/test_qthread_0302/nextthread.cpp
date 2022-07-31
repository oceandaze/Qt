#include "nextthread.h"
#include <QDebug>
extern int g_flag;
extern QString g_res;
NextThread::NextThread(QObject*parent) :QThread(parent)
{
 qDebug()<<"second"<<QThread::currentThreadId();
}

void NextThread::run()
{
    qDebug()<<"second"<<QThread::currentThreadId();
    int i=0;
    while(i<10){
        if(g_flag==1){
            qDebug()<<"B";
            g_res+="B";
            g_flag=2;
            i++;
        }
    }
//    for(int i=0;i<5;++i){
//        qDebug()<<"next:"<<i;
//    }
}
