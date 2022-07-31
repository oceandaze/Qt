#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    this->setWindowTitle("Qt5.1窗体应用");
//    this->setMaximumSize(600,600);
//    this->setMinimumSize(300,300);
    //this->setFixedSize(300,300);
//    this->move(100,100);
//    this->setStyleSheet("background:blue");

    this->setWindowTitle("移动无边框窗体");
    //this->setWindowFlags(Qt::FramelessWindowHint);
    //关闭按钮失效
    //this->setWindowFlags(Qt::WindowMinMaxButtonsHint);
    //去掉最大化、最小化按钮，保留关闭按钮
//    this->setWindowFlags(Qt::WindowCloseButtonHint);
//    this->setWindowIcon(QIcon(":/new/prefix1/ico"));
//    btClose=new QPushButton(this);
//    btClose->setText("关闭");
//    connect(btClose,SIGNAL(clicked()),this,SLOT(close()));



    button =new QPushButton(this);
    button->setGeometry(QRect(50,50,100,25));
    button->setText("按钮");
    connect(button,SIGNAL(clicked()),this,SLOT(showMainwindow2()));




    button =new QPushButton("按钮A",this);
    button->setGeometry(QRect(100,100,100,25));
    connect(button,SIGNAL(released()),this,SLOT(txtButton()));
    label = new QLabel("我是QLabel",this );
    label->move(100,100);
    label->setGeometry(QRect(200,200,200,30));
    label->setStyleSheet("font-size:20px;color:red;fron-weight:bold;font-style:italic");

    lineEdit =new QLineEdit(this);
    lineEdit->setGeometry(QRect(170,170,200,25));
    lineEdit->setStyleSheet("border:lpx;border-style:solid:color:red;border-color:blue red;");
    lineEdit->setMaxLength(12);
    lineEdit->setEchoMode(QLineEdit::Password);

    //实例 QTextEdit 控件
    textEdit = new QTextEdit(this);
    //控件位置大小
    textEdit->setGeometry(QRect(50,150,100,100));
    //内容
    textEdit->setText("我是第一行<br/>我是第二行");


    plainTextEdit=new QPlainTextEdit(this);

    plainTextEdit->setGeometry(QRect(220,50,100,100));
    plainTextEdit->setPlainText("第一行");

    comboBox =new QComboBox(this);
    comboBox->setGeometry(QRect(50,150,120,25));
    QStringList str;
    str<<"数学"<<"语文"<<"地理";
    comboBox->addItems(str);

//    //实例 QFontComboBox
//    fontComboBox = new QFontComboBox(this);
//    //实例 QPushButton
//    button = new QPushButton(this);
//    //实例 QLabel
//    label = new QLabel(this);
//    label->setGeometry(QRect(50,150,300,25));
//    //按钮名
//    button->setText("按钮");
//    //位置
//    button->move(180,50);
//    //事件
//    connect(button,SIGNAL(released()),this,SLOT(txtButton2()));
//    //QFontComboBox 控件位置
//    fontComboBox->setGeometry(QRect(50,50,120,25));

    radioM=new QRadioButton(this);
    radioW=new QRadioButton(this);
    label2=new QLabel(this);

    radioM->setGeometry(QRect(50,250,50,50));
    radioW->setGeometry(QRect(100,250,50,50));
    label2->setGeometry(QRect(50,300,100,25));
    radioM->setText("男");
    radioW->setText("女");
    radioM->setChecked(true);
    label->setText("男");
    connect(radioM,SIGNAL(clicked()),this,SLOT(radioChange()));
    connect(radioW,SIGNAL(clicked()),this,SLOT(radioChange()));
    checkBox01 = new QCheckBox(this);
    checkBox02 = new QCheckBox(this);
    checkBox03 = new QCheckBox(this);
    label3 = new QLabel(this);
    checkBox01->setGeometry(QRect(250,150,50,50));
    checkBox02->setGeometry(QRect(300,150,50,50));
    checkBox03->setGeometry(QRect(350,150,50,50));
    label3->setGeometry(QRect(250,150,200,30));
    checkBox01->setText("数学");
    checkBox02->setText("语文");
    checkBox03->setText("地理");
    connect(checkBox01, SIGNAL(clicked(bool)), this, SLOT(checkChange()));
    connect(checkBox02, SIGNAL(clicked(bool)), this, SLOT(checkChange()));
    connect(checkBox03, SIGNAL(clicked(bool)), this, SLOT(checkChange()));
}
QString str;
void MainWindow::checkChange()
{
     if(sender() == checkBox01)
     {
     //判断是否被选中
     if(checkBox01->checkState() == Qt::Checked)
     {
     str += "数学";
     }else
     {
     str = str.replace(QString("数学"),QString(""));
     }
     }else if(sender() == checkBox02)
     {
     if(checkBox02->checkState() == Qt::Checked)
     {
     str += "语文";
     }else
     {
     str = str.replace(QString("语文"),QString(""));
     }
     }else if(sender() == checkBox03)
     {
     if(checkBox03->checkState() == Qt::Checked)
     {
     str += "地理";
     }else
     {
     str = str.replace(QString("地理"),QString(""));
     }
     }
     //绑定值
     label3->setText(str);
}
void MainWindow::radioChange()
{
     if(sender() == radioM)
     {
     label->setText("男");
     }else if(sender() == radioW)
     {
     label->setText("女");
     }
}
void MainWindow::txtButton2()
{
 label->setText("选择字体："+fontComboBox->currentText());
}

void MainWindow::txtButton()
{
    if(button->text()=="按钮A")
    {
        button->setText("按钮B");
    }
    else
    {
        button->setText("按钮A");
    }
}
void MainWindow::showMainwindow2()
{
    //w2.setFixedSize(250,250);
    w2.show();
}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    last=event->globalPos();
}
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    int dx=event->globalX()-last.x();
    int dy=event->globalY()-last.y();
    last=event->globalPos();
    move(x()+dx,y()+dy);
}
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    int dx=event->globalX()-last.x();
    int dy=event->globalY()-last.y();
    move(x()+dx,y()+dy);
}

MainWindow::~MainWindow()
{
    delete ui;
}
