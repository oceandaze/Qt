#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent=0);

protected:
    void run();
signals:
    void isDone();

};

#endif // MYTHREAD_H
