#include "logging.h"
#include "ui_logging.h"
#include "struct_data.h"
Logging::Logging(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Logging)
{
    ui->setupUi(this);
}

Logging::Logging(QTcpSocket *client, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Logging)
{
    ui->setupUi(this);
    m_socket = client;
}

Logging::~Logging()
{
    delete ui;
}


void Logging::on_pushButton_search_clicked()
{
    Log_Req req;
    int level = ui->comboBox_level->currentIndex();
    QString begin = ui->dateTimeEdit_begin->text();
    QString end = ui->dateTimeEdit_end->text();
    req.level = level;
    strcpy(req.timeBegin,begin.toLocal8Bit().data());//转成char*
    strcpy(req.timeEnd,end.toLocal8Bit().data());
    int len = m_socket->write((char *)&req,req.head.len);
    qDebug() << __FUNCTION__ << len;
}
