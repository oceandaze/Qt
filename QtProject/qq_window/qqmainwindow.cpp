#include "qqmainwindow.h"
#include "ui_qqmainwindow.h"
#include <QMovie>
#include <QDesktopServices>
#include <QUrl>

QQMainWindow::QQMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QQMainWindow)
{

    ui->setupUi(this);
    ui->label_6->hide();
    QMovie *movie = new QMovie("F:/Qt/QtProject/build-qq_window-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/1.gif");
    ui->label->setMovie(movie);
    movie->start();

}

QQMainWindow::~QQMainWindow()
{
    delete ui;
}

void QQMainWindow::on_pushButton_4_clicked()
{
     if(ui->label_6->isVisible())
     {
         ui->label_6->hide();
     }
     else
     {
         ui->label_6->show();
     }

}

void QQMainWindow::on_pushButton_6_clicked()
{
    this->close();
}

void QQMainWindow::on_pushButton_3_clicked()
{
    QUrl url("https://ssl.ptlogin2.qq.com/qq_signup?ptlang=2052&regkey=3BA958FB86122C1CDCA39A498025EEC60996DEEA434A6E70AA73167F332659F9&ADUIN=0&ADSESSION=0&ADTAG=CLIENT.QQ.5869_NewAccount_Btn.0&ADPUBNO=27197");
    QDesktopServices::openUrl(url);
}

void QQMainWindow::on_pushButton_2_clicked()
{
    QUrl url("https://accounts.qq.com/find?aquin=359957724");
    QDesktopServices::openUrl(url);

}

void QQMainWindow::on_pushButton_5_clicked()
{

}
