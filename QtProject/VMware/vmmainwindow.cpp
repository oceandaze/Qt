#include "vmmainwindow.h"
#include "ui_vmmainwindow.h"

VMMainWindow::VMMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VMMainWindow)
{
    ui->setupUi(this);
    form=new Form;
    ui->dockWidget_2->setFixedSize(212,1000);

}

VMMainWindow::~VMMainWindow()
{
    delete ui;
}

void VMMainWindow::on_pushButton_clicked()
{
    form->show();
}
