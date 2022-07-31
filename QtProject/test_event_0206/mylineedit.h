#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H

#include <QKeyEvent>
#include <QLineEdit>
#include <QMainWindow>
#include <QEvent>
#include <QWidget>


class MyLineEdit:public QLineEdit
{
public:
    MyLineEdit(QWidget *parent=0);
protected:
    void keyPressEvent(QKeyEvent * event);
    bool event(QEvent *event);
};

#endif // MYLINEEDIT_H
