#ifndef KZAMAINWINDOW_H
#define KZAMAINWINDOW_H

#include <QMainWindow>
#include "login.h"
#include "loginmainwindow.h"
#include <QTcpSocket>
#include "struct_data.h"
#include <QTimer>
namespace Ui {
class KzaMainWindow;
}


class KzaMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit KzaMainWindow(QWidget *parent = 0);
    ~KzaMainWindow();
    void init();//界面初始化
private slots:
    void showMain(QString name);//显示主界面
    void myRead();//收包槽函数
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void heartCheck();//心跳槽函数
signals:
    void loggingResSignal(LogRes* res);
private:
    Ui::KzaMainWindow *ui;
    Login *m_login;
    LoginMainWindow *m_logining;
    QTcpSocket *m_socket;
    QTimer *m_timer;

};

#endif // KZAMAINWINDOW_H
