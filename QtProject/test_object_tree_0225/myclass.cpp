#include "myclass.h"
#include <QDebug>

MyClass::MyClass(QWidget  *parent)
    :QPushButton(parent)
{

}

MyClass::~MyClass()
{
    qDebug()<<"delete MyClass";

}
