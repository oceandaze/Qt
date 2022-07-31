#include "propertymainwindow.h"
#include "ui_propertymainwindow.h"
#include <QDebug>

PropertyMainWindow::PropertyMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PropertyMainWindow)
{
    ui->setupUi(this);
    my=new MyClass(this);
    connect(my,SIGNAL(userNameChanged(QString)),this,SLOT(userChanged(QString)));
    my->setUserName("yafei");
    //qDebug()<<"userName:"<<my->getUserName();
    my->setProperty("userName","linux");
    //qDebug()<<"userName:"<<my->property("userName").toString();

    myNext=new NextClass(this);
    connect(myNext,SIGNAL(userNameChanged(QString)),this,SLOT(userChanged(QString)));

    myNext->setUserName("hello");
     //qDebug()<<"userName:"<<myNext->getUserName();

}

PropertyMainWindow::~PropertyMainWindow()
{
    delete ui;
}

void PropertyMainWindow::userChanged(QString str)
{
    qDebug()<<"userName:"<<str;
}
