#include "successmainwindow.h"
#include "ui_successmainwindow.h"

SuccessMainWindow::SuccessMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SuccessMainWindow)
{
    ui->setupUi(this);
}

SuccessMainWindow::~SuccessMainWindow()
{
    delete ui;
}
