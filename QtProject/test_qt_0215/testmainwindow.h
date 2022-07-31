#ifndef TESTMAINWINDOW_H
#define TESTMAINWINDOW_H

#include <QMainWindow>
#include "registermainwindow.h"
namespace Ui {
class TestMainWindow;
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

private:
    Ui::TestMainWindow *ui;
    RegisterMainWindow r;
};

#endif // TESTMAINWINDOW_H
