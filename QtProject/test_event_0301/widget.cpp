#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_lineEdit=new MyLineEdit(this);
    m_lineEdit->move(100,100);
    m_lineEdit->installEventFilter(this);
   // m_lineEdit->setText("hello everyone");
    myTimer=new QTimer(this);
    connect(myTimer,&QTimer::timeout,this,&Widget::myprint);
    myTimer->start(2000);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    qDebug()<<tr("Widget键盘按下事件");

    if (event->key()==Qt::Key_F1)
    {
        setWindowState(Qt::WindowFullScreen);
    }

}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==m_lineEdit){
        if(event->type()==QEvent::KeyPress)
            qDebug()<<tr("Widget的事件过滤器");
    }
    return QWidget::eventFilter(watched,event);

}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){       // 如果是鼠标左键按下
          QCursor cursor;
          cursor.setShape(Qt::ClosedHandCursor);
          QApplication::setOverrideCursor(cursor); // 使鼠标指针暂时改变形状
          offset = event->globalPos() - pos();    // 获取指针位置和窗口位置的差值
      }
      else if(event->button() == Qt::RightButton){ // 如果是鼠标右键按下
          QCursor cursor(QPixmap("F:/Qt/QtProject/test_event_022602/Network.ico"));
          QApplication::setOverrideCursor(cursor);// 使用自定义的图片作为鼠标指针
      }

}

void Widget::mouseMoveEvent(QMouseEvent *event) // 鼠标移动事件
{
    if(event->buttons() & Qt::LeftButton){      // 这里必须使用buttons()
    QPoint temp;
    temp = event->globalPos() - offset;
    move(temp);// 使用鼠标指针当前的位置减去差值，就得到了窗口应该移动的位置
    }
}

void Widget::mouseReleaseEvent(QMouseEvent *event) // 鼠标释放事件
{
    QApplication::restoreOverrideCursor();         // 恢复鼠标指针形状
}

void Widget::mouseDoubleClickEvent(QMouseEvent *event) // 鼠标双击事件
{
    if(event->button() == Qt::LeftButton){             // 如果是鼠标左键按下
        if(windowState() == Qt::WindowFullScreen)      // 如果现在不是全屏
           setWindowState(Qt::WindowNoState);      // 将窗口设置为全屏

    }
}

void Widget::wheelEvent(QWheelEvent *event)  // 滚轮事件
{
    if(event->delta() > 0){                     // 当滚轮远离使用者时
        ui->textEdit->zoomIn();              // 进行放大
    }else{                                                // 当滚轮向使用者方向旋转时
        ui->textEdit->zoomOut();            // 进行缩小
    }
}

void Widget::myprint()
{

    static int i=0;
    if(i==100)
    {
       i=0;
    }
    i+=2;
    qDebug()<<i;
}
