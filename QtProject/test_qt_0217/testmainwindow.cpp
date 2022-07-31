#include "testmainwindow.h"
#include "ui_testmainwindow.h"
#include <QDesktopServices>
#include <QUrl>

TestMainWindow::TestMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestMainWindow)//构造：委托构造
{
    ui->setupUi(this);//对UI控件进行初始化[既UI界面里的那些指针]
    ui->label_3->hide();
    ui->label_4->hide();
    ui->radioButton->hide();
    ui->radioButton_2->hide();
    ui->pushButton_6->hide();
}

TestMainWindow::~TestMainWindow()
{
    delete ui;
}

void TestMainWindow::on_pushButton_clicked()
{

}

void TestMainWindow::on_pushButton_2_clicked()
{
   this->hide();
   qr.setWindowTitle("微信");
   qr.setFixedSize(288,350);
   qr.setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::WindowCloseButtonHint);
   qr.show();

}

void TestMainWindow::on_pushButton_3_clicked()
{
    QUrl url("https://filehelper.weixin.qq.com/?from=windows&type=recommend");
    QDesktopServices::openUrl(url);
}

void TestMainWindow::on_pushButton_4_clicked()
{
    this->close();
}

void TestMainWindow::on_pushButton_5_clicked()
{
    ui->label->hide();
    ui->label_2->hide();
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->label_3->show();
    ui->label_4->show();
    ui->radioButton->show();
    ui->radioButton_2->show();
    ui->pushButton_6->show();
}

void TestMainWindow::on_pushButton_6_clicked()
{
    ui->label->show();
    ui->label_2->show();
    ui->pushButton->show();
    ui->pushButton_2->show();
    ui->pushButton_3->show();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->radioButton->hide();
    ui->radioButton_2->hide();
    ui->pushButton_6->hide();
}
