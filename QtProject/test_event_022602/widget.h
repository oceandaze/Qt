#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <mylineedit.h>
#include <QMouseEvent> //引用鼠标类头文件

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
protected:
    void keyPressEvent(QKeyEvent *event);
    bool eventFilter(QObject *obj, QEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event) ;
    void mouseDoubleClickEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);
private:
    Ui::Widget *ui;
    MyLineEdit *m_lineEdit;
    QPoint offset;
};

#endif // WIDGET_H
