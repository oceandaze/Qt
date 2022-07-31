#include "qrcode.h"
#include "ui_qrcode.h"
#include <QDesktopServices>
#include <QUrl>
#include <QPushButton>
QRCode::QRCode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QRCode)
{
    ui->setupUi(this);
    ui->label_3->hide();
    ui->pushButton_6->hide();
    ui->label_4->hide();
    ui->radioButton->hide();
    ui->radioButton_2->hide();
}

QRCode::~QRCode()
{
    delete ui;
}

void QRCode::on_pushButton_3_clicked()
{
    QUrl url("https://filehelper.weixin.qq.com/?from=windows&type=recommend");
    QDesktopServices::openUrl(url);
}

void QRCode::on_pushButton_5_clicked()
{
    ui->label->hide();
    ui->label_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_5->hide();
    ui->label_3->show();
    ui->pushButton_6->show();
    ui->label_4->show();
    ui->radioButton->show();
    ui->radioButton_2->show();
}

void QRCode::on_pushButton_6_clicked()
{
    ui->label->show();
    ui->label_2->show();
    ui->pushButton_5->show();
    ui->pushButton_3->show();
     ui->label_3->hide();
    ui->pushButton_6->hide();
    ui->label_4->hide();
    ui->radioButton->hide();
    ui->radioButton_2->hide();

}

void QRCode::on_pushButton_4_clicked()
{
    this->close();
}
