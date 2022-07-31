#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    //获取用户信息，放到结构体中发送给服务器，进行验证
    QString name=ui->lineEdit_userName->text();

    emit loginSuccess(name);

}
