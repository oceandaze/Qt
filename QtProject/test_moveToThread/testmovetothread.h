#ifndef TESTMOVETOTHREAD_H
#define TESTMOVETOTHREAD_H

#include <QObject>
#include <QThread>

class TestMoveToThread : public QObject
{
    Q_OBJECT
public:
    explicit TestMoveToThread(QObject *parent = nullptr);

signals:
    void signalA();
    void signalB();
    void signalC();
public slots:
    void firstSlot();
    void secondSlot();
    void thirdSlot();

    void working();
signals:
    void curNumber(int num);
private:
    static int sm_flag;
};

#endif // TESTMOVETOTHREAD_H
