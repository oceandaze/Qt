#ifndef CONNECTMAINWINDOW_H
#define CONNECTMAINWINDOW_H

#include <QMainWindow>
#include <form.h>
#include <ui_form.h>
#include <c_form.h>
namespace Ui {
class ConnectMainWindow;
}

class ConnectMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ConnectMainWindow(QWidget *parent = 0);
    ~ConnectMainWindow();

private:
    Ui::ConnectMainWindow *ui;
    Form * form;
    C_Form *c_form;
signals:
    void mySignal();

private slots:
    void mySlot();
    void mySlot2();
    void mySlot3();
    void on_pushButton_clicked();

};

#endif // CONNECTMAINWINDOW_H
