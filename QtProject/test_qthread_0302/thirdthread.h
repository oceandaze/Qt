#ifndef THIRDTHREAD_H
#define THIRDTHREAD_H

#include <QThread>



class ThirdThread : public QThread
{

public:
    ThirdThread(QObject*parent=0);
protected:
    void run();


};

#endif // THIRDTHREAD_H
