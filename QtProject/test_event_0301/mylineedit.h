#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H
#include <QKeyEvent>
#include <QLineEdit>
#include <QWidget>

class MyLineEdit : public QLineEdit
{
public:
    MyLineEdit(QWidget *parent =0);
    bool event(QEvent *event);
protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // MYLINEEDIT_H
