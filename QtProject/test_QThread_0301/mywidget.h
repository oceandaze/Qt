#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QTimer>
#include "mythread.h"

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();


    void dealTimeout();
    void dealDone();
    void stopThread();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MyWidget *ui;
    QTimer *myTimer;
    MyThread *thread;
};

#endif // MYWIDGET_H
