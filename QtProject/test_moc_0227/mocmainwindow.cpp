#include "mocmainwindow.h"
#include "ui_mocmainwindow.h"

MOCMainWindow::MOCMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MOCMainWindow)
{
    ui->setupUi(this);
}

MOCMainWindow::~MOCMainWindow()
{
    delete ui;
}
