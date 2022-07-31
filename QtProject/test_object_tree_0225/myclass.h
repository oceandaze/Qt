#ifndef MYCLASS_H
#define MYCLASS_H

#include <QPushButton>
#include <QWidget>



class MyClass : public QPushButton
{
public:
    explicit MyClass( QWidget  *parent = 0);
    ~ MyClass();
};

#endif // MYCLASS_H
