#ifndef VMMAINWINDOW_H
#define VMMAINWINDOW_H

#include <QMainWindow>
#include <form.h>

namespace Ui {
class VMMainWindow;
}

class VMMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit VMMainWindow(QWidget *parent = 0);
    ~VMMainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::VMMainWindow *ui;
    Form *form;
};

#endif // VMMAINWINDOW_H
