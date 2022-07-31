#include "emainwindow.h"
#include "ui_emainwindow.h"

EMainWindow::EMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EMainWindow)
{
    ui->setupUi(this);
}

EMainWindow::~EMainWindow()
{
    delete ui;
}

void EMainWindow::on_pushButton_clicked()
{
    emit eSignal();
}

void EMainWindow::on_pushButton_2_clicked()
{
    emit eSignal2(2);
}
