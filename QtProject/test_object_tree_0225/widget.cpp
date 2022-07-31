#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //MyClass *my=new MyClass;
    //my->show();
   // my->setParent(this);
    MyClass *my=new MyClass(this);

    my->setText(tr("button"));
}

Widget::~Widget()
{
    delete ui;
    qDebug()<<"delete widget";
}
