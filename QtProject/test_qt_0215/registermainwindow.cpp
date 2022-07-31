#include "registermainwindow.h"
#include "ui_registermainwindow.h"

RegisterMainWindow::RegisterMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegisterMainWindow)
{
    ui->setupUi(this);
}

RegisterMainWindow::~RegisterMainWindow()
{
    delete ui;
}

void RegisterMainWindow::on_pushButton_clicked()
{
    this->close();
}

void RegisterMainWindow::on_pushButton_2_clicked()
{
    //ui->lineEdit->setText(QApplication::translate("HelloDialog", "Hello world!  \344\275\240\345\245\275Qt\357\274\201", Q_NULLPTR));
    s.show();

}
