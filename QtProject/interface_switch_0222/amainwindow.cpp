#include "amainwindow.h"
#include "ui_amainwindow.h"

AMainWindow::AMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AMainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(300,300);
    bWindow =new BMainWindow(this);
    bWindow->setFixedSize(300,300);
    cWindow =new CMainWindow(this);
    cWindow->setFixedSize(300,300);
    dWindow =new DMainWindow(this);
    dWindow->setFixedSize(300,300);
    eWindow =new EMainWindow(this);
    eWindow->setFixedSize(300,300);
    bWindow->setWindowTitle("B窗口");
    cWindow->setWindowTitle("C窗口");
    dWindow->setWindowTitle("D窗口");
    eWindow->setWindowTitle("E窗口");

    connect(this,SIGNAL(aSignal()),this,SLOT(aSlot()));
    connect(cWindow,SIGNAL(cSignal()),this,SLOT(cSlot()));
    connect(bWindow,SIGNAL(bSignal()),this,SLOT(bSlot()));
    connect(dWindow,SIGNAL(dSignal()),this,SLOT(dSlot()));
     connect(eWindow,SIGNAL(eSignal()),this,SLOT(eSlot()));
     //connect(eWindow,SIGNAL(eSignal2()),this,SLOT(eSlot2()));
     //connect(eWindow,&EMainWindow::eSignal2,this,&AMainWindow::eSlot2);
     //connect(eWindow,QOverload<int>::of(&EMainWindow::eSignal2),this,QOverload<>::of(&AMainWindow::eSlot2));
     connect(eWindow,QOverload<int>::of(&EMainWindow::eSignal2),this,[=]{
         this->show();
         bWindow->show();
         cWindow->show();
         dWindow->show();
});

}

AMainWindow::~AMainWindow()
{
    delete ui;
}

void AMainWindow::aSlot()
{
    this->hide();
    cWindow->show();
}

void AMainWindow::cSlot()
{
    cWindow->hide();
    bWindow->show();
}

void AMainWindow::bSlot()
{
    bWindow->hide();
    dWindow->show();
}

void AMainWindow::dSlot()
{
    dWindow->hide();
    eWindow->move(700,400);
    eWindow->show();
}

void AMainWindow::eSlot()
{
    eWindow->hide();
    this->show();
}

void AMainWindow::eSlot2()
{
    this->move(100,100);
    bWindow->move(100,400);
    cWindow->move(400,100);
    dWindow->move(400,400);
    this->show();
    bWindow->show();
    cWindow->show();
    dWindow->show();

}

void AMainWindow::on_pushButton_clicked()
{
    emit aSignal();
}
