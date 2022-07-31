#ifndef LOGINMAINWINDOW_H
#define LOGINMAINWINDOW_H

#include "struct_data.h"

#include <QMainWindow>
#include <QTcpSocket>
#include <QStandardItemModel>

namespace Ui {
class LoginMainWindow;
}

class LoginMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginMainWindow(QWidget *parent = 0);
    explicit LoginMainWindow(QTcpSocket *client, QWidget *parent = 0);
    ~LoginMainWindow();

private slots:


    void on_pushButton_search_clicked();
    void showResData(LogRes *res);

private:
    Ui::LoginMainWindow *ui;
    QTcpSocket *m_socket;
    QStandardItemModel *m_model;
};

#endif // LOGINMAINWINDOW_H
