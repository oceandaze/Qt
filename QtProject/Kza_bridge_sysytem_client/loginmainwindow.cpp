#include "loginmainwindow.h"
#include "ui_loginmainwindow.h"
#include "struct_data.h"

LoginMainWindow::LoginMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginMainWindow)
{
    ui->setupUi(this);

    m_model=new QStandardItemModel(5,7,this);
    ui->tableView->setModel(m_model);
    QStringList lables;
    lables<<"id"<<"级别"<<"描述"<<"函数名"<<"行号"<<"时间"<<"用户名";
    m_model->setHorizontalHeaderLabels(lables);
}

LoginMainWindow::LoginMainWindow(QTcpSocket *client, QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::LoginMainWindow)
{
    ui->setupUi(this);
    m_socket=client;

    m_model=new QStandardItemModel(5,7,this);
    ui->tableView->setModel(m_model);
    QStringList lables;
    lables<<"id"<<"级别"<<"描述"<<"函数名"<<"行号"<<"时间"<<"用户名";
    m_model->setHorizontalHeaderLabels(lables);
}

LoginMainWindow::~LoginMainWindow()
{
    delete ui;
}



void LoginMainWindow::on_pushButton_search_clicked()
{
    LogReq req;
    int level=ui->comboBox_level->currentIndex();
    QString begin=ui->dateTimeEdit_begin->text();
    QString end=ui->dateTimeEdit_end->text();
    req.level=level;
    strcpy(req.timeBegin,begin.toLocal8Bit().data());
    strcpy(req.timeEnd,end.toLocal8Bit().data());
    int len =m_socket->write((char*)&req,req.head.len);
    qDebug()<<__FUNCTION__<<len;


}

void LoginMainWindow::showResData(LogRes *res)
{
    int rows=(res->head.len-sizeof(LogRes))/sizeof(LogInfo);
    //m_model->clear();
    m_model->setColumnCount(rows);
    for(int i=0;i<rows;++i)
    {
        m_model->setItem(i,0,new QStandardItem(QString::number(res->loginfo[i].id)));
        m_model->setItem(i,1,new QStandardItem(QString::number(res->loginfo[i].level)));
        m_model->setItem(i,2,new QStandardItem(QString::fromLocal8Bit(res->loginfo[i].desc)));
        m_model->setItem(i,3,new QStandardItem(res->loginfo[i].func));
        m_model->setItem(i,4,new QStandardItem(QString::number(res->loginfo[i].lineNum)));
        m_model->setItem(i,5,new QStandardItem(res->loginfo[i].logTime));
        m_model->setItem(i,6,new QStandardItem(res->loginfo[i].userName));

    }

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}
