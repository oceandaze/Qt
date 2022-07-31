#include "kzamainwindow.h"
#include "ui_kzamainwindow.h"

KzaMainWindow::KzaMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KzaMainWindow)
{
    ui->setupUi(this);
    init();
}

KzaMainWindow::~KzaMainWindow()
{
    delete ui;
}

void KzaMainWindow::init()
{
   m_login=new Login(this);
   m_login->show();
   connect(m_login,&Login::loginSuccess,this,&KzaMainWindow::showMain);
   m_log=new LogMainWindow(this);
   ui->tabWidget->addTab(m_log,"日志查询");

}

void KzaMainWindow:: showMain()
{
    m_login->hide();
    this->show();
}
