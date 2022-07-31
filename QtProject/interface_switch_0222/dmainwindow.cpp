#include "dmainwindow.h"
#include "ui_dmainwindow.h"

DMainWindow::DMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DMainWindow)
{
    ui->setupUi(this);
}

DMainWindow::~DMainWindow()
{
    delete ui;
}

void DMainWindow::on_pushButton_clicked()
{
    emit dSignal();
}
