#include "bmainwindow.h"
#include "ui_bmainwindow.h"

BMainWindow::BMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BMainWindow)
{
    ui->setupUi(this);
}

BMainWindow::~BMainWindow()
{
    delete ui;
}

void BMainWindow::on_pushButton_clicked()
{
    emit bSignal();
}
