#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    form =new MainWindow2(this);
    //connect(this,SIGNAL(signalA(QString)),form,SLOT(slotB(QString)),Qt::UniqueConnection);
    connect(this,QOverload<QString>::of(&MainWindow::signalA),
            form,QOverload<QString>::of(&MainWindow2::slotB));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString str=ui->lineEdit->text();

    emit signalA(str);
    qDebug()<<123;
    connect(this,QOverload<QString>::of(&MainWindow::signalA),
            form,QOverload<QString>::of(&MainWindow2::slotB),Qt::UniqueConnection);
}



void MainWindow::on_pushButton_2_clicked()
{

}
