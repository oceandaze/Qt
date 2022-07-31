#ifndef MOVETOTHREADMAINWINDOW_H
#define MOVETOTHREADMAINWINDOW_H

#include <QMainWindow>
#include<QThread>
#include "testmovetothread.h"
namespace Ui {
class MoveToThreadMainWindow;
}

class MoveToThreadMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MoveToThreadMainWindow(QWidget *parent = 0);
    ~MoveToThreadMainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MoveToThreadMainWindow *ui;
    QThread *m_thread1;
     QThread *m_thread2;
      QThread *m_thread3;
    TestMoveToThread *m_test1;
    TestMoveToThread *m_test2;
    TestMoveToThread *m_test3;
};

#endif // MOVETOTHREADMAINWINDOW_H
