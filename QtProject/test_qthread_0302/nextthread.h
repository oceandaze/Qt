#ifndef NEXTTHREAD_H
#define NEXTTHREAD_H

#include <QThread>



class NextThread : public QThread
{

public:
    NextThread(QObject*parent=0);
    protected:
    void run();


};

#endif // NEXTTHREAD_H
