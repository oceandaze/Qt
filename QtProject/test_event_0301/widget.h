#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <mylineedit.h>
#include <QTimer>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    bool eventFilter(QObject *watched, QEvent *event);


protected:
    void keyPressEvent(QKeyEvent *event);

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event) ;
    void mouseDoubleClickEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);
private:
    Ui::Widget *ui;
    MyLineEdit *m_lineEdit;
    QPoint offset;
    QTimer *myTimer;
public slots:
    void myprint();
};

#endif // WIDGET_H
