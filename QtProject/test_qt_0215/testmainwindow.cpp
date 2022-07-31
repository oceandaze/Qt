#include "testmainwindow.h"
#include "ui_testmainwindow.h"
#include "registermainwindow.h"


TestMainWindow::TestMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestMainWindow)
{
    ui->setupUi(this);

}

TestMainWindow::~TestMainWindow()
{
    delete ui;
}

void TestMainWindow::on_pushButton_clicked()
{
    RegisterMainWindow rr;
    rr.show();
}



void TestMainWindow::on_pushButton_2_clicked()
{
    r.show();
}
