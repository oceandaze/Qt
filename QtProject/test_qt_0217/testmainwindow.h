#ifndef TESTMAINWINDOW_H
#define TESTMAINWINDOW_H

#include <QMainWindow>
#include "qrcode.h"
#include "ui_qrcode.h"
namespace Ui {
class TestMainWindow;//做UI界面绘制
}

class TestMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestMainWindow(QWidget *parent = 0);
    ~TestMainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::TestMainWindow *ui;
    QRCode qr;
};

#endif // TESTMAINWINDOW_H
