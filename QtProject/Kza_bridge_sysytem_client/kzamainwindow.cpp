#include "kzamainwindow.h"
#include "ui_kzamainwindow.h"
#include <QDebug>

KzaMainWindow::KzaMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KzaMainWindow)
{
    ui->setupUi(this);
    m_socket=new QTcpSocket(this);
    m_socket->connectToHost("127.0.0.1",9527);
    if(m_socket->waitForConnected()){
        qDebug()<<"连接成功";
        init();
        connect(m_socket,SIGNAL(readyRead()),this,SLOT(myRead()));

    }else{
        qDebug()<<"连接失败"<<m_socket->errorString();
    }

}

KzaMainWindow::~KzaMainWindow()
{
    delete ui;
}

void KzaMainWindow::init()
{
    m_login=new Login(this);
    m_login->show();
    connect(m_login,SIGNAL(loginSuccess(QString)),this,SLOT(showMain(QString)));
    //m_logining=new LoginMainWindow(this);
    m_logining=new LoginMainWindow(m_socket,this);
    ui->tabWidget->addTab(m_logining,"日志查询");
    connect(this,SIGNAL(loggingResSignal(LogRes*)),m_logining,SLOT(showResData(LogRes*)));

}

void KzaMainWindow::showMain(QString name)
{
    this->show();
    m_socket->write(name.toUtf8());
    qDebug()<<"fasongchenggong";
    m_login->hide();
}

void KzaMainWindow::myRead()
{
    QByteArray buffer= m_socket->readAll();
    qDebug()<<buffer;
    int type=*(int*)buffer.data();
    if(type==100){
        Head*h1=(Head*)buffer.data();
        qDebug()<<h1->type<<h1->len;
    }
    else if(type==LOG_RES)
    {
        LogRes *res=(LogRes*)buffer.data();
        int size=(res->head.len-sizeof(LogRes))/sizeof(LogInfo);
        for(int i=0;i<size;++i)
        {
            qDebug()<<res->loginfo[i].id<<QString::fromLocal8Bit(res->loginfo[i].desc)
                   <<QString::fromLocal8Bit(res->loginfo[i].userName);
        }

        //将响应发送给日志查询界面进行显示
        emit loggingResSignal(res);
    }
}

void KzaMainWindow::on_pushButton_clicked()
{
    char buffer[]={"mayibase is very good."};
    qint64 len=m_socket->write(buffer,sizeof(buffer));
    qDebug()<<__FUNCTION__<<len;
}

void KzaMainWindow::on_pushButton_2_clicked()
{
    Head h;
    h.type=100;
    h.len=sizeof(Head);
    Head head  {100,sizeof(Head)};
    qint64 len=m_socket->write((char*)&h,h.len);
    qDebug()<<__FUNCTION__<<len;
}

void KzaMainWindow::heartCheck()
{
    m_socket->write()
}
