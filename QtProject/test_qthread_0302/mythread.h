#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>



class MyThread : public QThread
{

public:
    MyThread(QObject*parent=0);
protected:
    void run();


};

#endif // MYTHREAD_H
