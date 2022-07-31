#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <QDebug>

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    this->setWindowTitle("B窗口");
    this->setFixedSize(300,300);
    this->show();
    this->move(100,100);
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::slotB(QString str)
{

    ui->label->setText(str);
    qDebug()<<456;
    qDebug()<<sender()->objectName();
}


