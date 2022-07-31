#include "testmainwindow.h"
#include <QApplication>
#include "registermainwindow.h"
#include <iostream>
#include <QDebug>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    for(int i=0;i<argc;++i){
       cout<<argv[i]<<endl;
       //qDebug()<<argv[i];
    }
    qDebug();
    TestMainWindow w;
    w.show();

    return a.exec();
}
