#ifndef REGISTERMAINWINDOW_H
#define REGISTERMAINWINDOW_H

#include <QMainWindow>
#include "successmainwindow.h"

namespace Ui {
class RegisterMainWindow;
}

class RegisterMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegisterMainWindow(QWidget *parent = 0);
    ~RegisterMainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::RegisterMainWindow *ui;
    SuccessMainWindow s;
};

#endif // REGISTERMAINWINDOW_H
