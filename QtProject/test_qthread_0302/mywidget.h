#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <mythread.h>
#include <nextthread.h>
#include <thirdthread.h>
namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MyWidget *ui;
    MyThread *first;
    NextThread *second;
    ThirdThread *third;
};

#endif // MYWIDGET_H
