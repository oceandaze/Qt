#ifndef QQMAINWINDOW_H
#define QQMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class QQMainWindow;
}

class QQMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QQMainWindow(QWidget *parent = 0);
    ~QQMainWindow();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::QQMainWindow *ui;
};

#endif // QQMAINWINDOW_H
