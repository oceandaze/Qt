#include "mylineedit.h"
#include <QDebug>

MyLineEdit::MyLineEdit(QWidget *parent):QLineEdit(parent)
{

}

void MyLineEdit::keyPressEvent(QKeyEvent *event)
{
    qDebug()<<tr("MyLineEdit键盘按下事件");
    QLineEdit::keyPressEvent(event);
     //qDebug()<<event->text();
    event->ignore();
    qDebug()<<this->text();
}

 bool  MyLineEdit::event(QEvent *event)
 {
     if(event->type()==QEvent::KeyPress)
     {
         qDebug()<<tr("MyLineEdit的event函数");

     }
     return QLineEdit::event(event);
 }
