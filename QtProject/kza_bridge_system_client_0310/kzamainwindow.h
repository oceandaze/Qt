#ifndef KZAMAINWINDOW_H
#define KZAMAINWINDOW_H

#include <QMainWindow>
#include "login.h"
#include "logging.h"
#include <QTcpSocket>
#include "struct_data.h"
namespace Ui {
class KZAMainWindow;
}
class KZAMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit KZAMainWindow(QWidget *parent = 0);
    ~KZAMainWindow();
    void init();//负责初始化
private slots:
    void showMain();
    void myRead();//收包槽函数

    void on_pushButton_3_clicked();


    void on_pushButton_2_clicked();

private:
    Ui::KZAMainWindow *ui;
    Login *m_login;
    Logging *m_log;
    QTcpSocket *m_socket;
};

#endif // KZAMAINWINDOW_H
