#include "kzamainwindow.h"
#include "ui_kzamainwindow.h"
#include <QDebug>
KZAMainWindow::KZAMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KZAMainWindow)
{
    ui->setupUi(this);
    m_socket = new QTcpSocket(this);
    m_socket->connectToHost("127.0.0.1",9527);
    if (m_socket->waitForConnected()) {
        qDebug() << "连接成功";
        connect(m_socket,SIGNAL(readyRead()),this,SLOT(myRead()));
    } else {
        qDebug() << "连接失败:" << m_socket->errorString();
    }
    init();
}

KZAMainWindow::~KZAMainWindow()
{
    delete ui;
}

void KZAMainWindow::init()
{
    m_login = new Login(this);
    m_login->show();
    connect(m_login,SIGNAL(loginSuccess()),this,SLOT(showMain()));
    //m_log = new Logging(this);
    m_log = new Logging(m_socket,this);//第二种 构造
    ui->tabWidget->addTab(m_log,"日志查询");
}

void KZAMainWindow::showMain()
{
    this->show();
    m_login->hide();
}

void KZAMainWindow::myRead()
{
    QByteArray buffer = m_socket->readAll();
    qDebug() << buffer;
    int type = *(int *)buffer.data();
    if (type == 100) {
        Head * h = (Head*)buffer.data();
        qDebug() << h->type << h->len;
    }
}


void KZAMainWindow::on_pushButton_3_clicked()
{
    Head head;
    head.type = 100;
    head.len = sizeof(Head);
    Head head1 {100,sizeof(Head)};
    int len = m_socket->write((char *)&head,head.len);
    qDebug() << __FUNCTION__ << len ;
}

void KZAMainWindow::on_pushButton_2_clicked()
{
    char buffer[] = {"mayibase is very good."};
    qint64 len = m_socket->write(buffer,sizeof(buffer));
    qDebug() << __FUNCTION__ << len;
}
