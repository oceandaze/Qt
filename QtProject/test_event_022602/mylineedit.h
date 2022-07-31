#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H
#include <QEvent>
#include <QKeyEvent>
#include <QLineEdit>
#include <QWidget>

class MyLineEdit : public QLineEdit
{
public:
    MyLineEdit(QWidget *parent=nullptr);
protected:
    void keyPressEvent(QKeyEvent *event);
    bool event(QEvent *event);
};

#endif // MYLINEEDIT_H
