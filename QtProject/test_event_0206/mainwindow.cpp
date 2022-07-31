#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_LineEdit=new MyLineEdit(this);

    m_LineEdit->move(100,100);
    //m_LineEdit->show();
    m_LineEdit->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    qDebug()<<tr("MainWidget键盘按下事件");
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if(obj==m_LineEdit){
        if(event->type()==QEvent::KeyPress){
            qDebug()<<tr("MainWindow的事件过滤器");
        }
        return QWidget::eventFilter(obj,event);
    }
}
