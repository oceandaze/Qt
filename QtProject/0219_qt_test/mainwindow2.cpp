#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <QDateTime>



MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    //this->setWindowFlags(Qt::FramelessWindowHint);
    //设置背景透明
    //this->setAttribute(Qt::WA_TranslucentBackground, true);
    //窗体添加样式，样式为 CSS 样式表
    // background-image:url 添加图片
    // background-repeat:no-repeat 不平铺
    //this->setStyleSheet("background-image: url(:/new/prefix4/touming);backgroundrepeat:no-repeat;");

    //实例 QComboBox
    comboBox = new QComboBox(this);
    //控件显示位置大小
    comboBox->setGeometry(QRect(50,50,120,25));
    //定义字符串列表
    QStringList str;
    str << "数学" << "语文" << "地理";
    //将字符串列表绑定 QComboBox 控件
    comboBox->addItems(str);


    //实例 QFontComboBox
    fontComboBox = new QFontComboBox(this);
    //实例 QPushButton
    button = new QPushButton(this);
    //实例 QLabel
    label = new QLabel(this);
    label->setGeometry(QRect(50,150,300,25));
    //按钮名
    button->setText("按钮");
    //位置
    button->move(350,50);
    //事件
    connect(button,SIGNAL(released()),this,SLOT(txtButton()));
    //QFontComboBox 控件位置
    fontComboBox->setGeometry(QRect(200,50,120,25));
    //实例 QSpinBox
    spinBox = new QSpinBox(this);
    //位置
    spinBox->setGeometry(QRect(50,150,100,25));
    //值范围
    spinBox->setRange(0,200);
    //初始值
    spinBox->setValue(10);
    //后缀
    spinBox->setSuffix("元");
    //前缀
    spinBox->setPrefix("$");

    timeEdit = new QTimeEdit(this);
    //位置
    timeEdit->setGeometry(QRect(50,250,120,25));
    //获取系统时间
    QDateTime sysTime = QDateTime::currentDateTime();
    //获取时分秒以“：”号拆分赋予 list 数组
    QStringList list = sysTime.toString("hh:mm:ss").split(':');
    //将时分秒绑定控件
    timeEdit->setTime(QTime(list[0].toInt(),list[1].toInt(),list[2].toInt()));

    dateEdit =new QDateEdit(this);
    dateEdit->setGeometry(QRect(70,70, 120,25));
    sysTime=QDateTime::currentDateTime();
    list=sysTime.toString("yyyy-MM-dd").split('-');
    dateEdit->setDate(QDate(list[0].toInt(),list[1].toInt(),list[2].toInt()));

    scrollBar =new QScrollBar(this);
    spinBox2=new QSpinBox(this);
    scrollBar->setOrientation(Qt::Horizontal);
    scrollBar->setGeometry(QRect(50,95,180,20));
    spinBox2->setGeometry(QRect(50,115,100,25));
    scrollBar->setPageStep(10);
    connect(scrollBar,SIGNAL(valueChanged(int)),spinBox2,SLOT(setValue(int))) ;
    connect(spinBox2,SIGNAL(valueChanged(int)),scrollBar,SLOT(setValue(int)));
    scrollBar->setValue(50);



}

void MainWindow2::txtButton()
{
 label->setText("选择字体："+fontComboBox->currentText());
}
MainWindow2::~MainWindow2()
{
    delete ui;
}
