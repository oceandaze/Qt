#ifndef PROPERTYMAINWINDOW_H
#define PROPERTYMAINWINDOW_H

#include <QMainWindow>
#include <myclass.h>
#include <nextclass.h>

namespace Ui {
class PropertyMainWindow;
}

class PropertyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PropertyMainWindow(QWidget *parent = 0);
    ~PropertyMainWindow();

private:
    Ui::PropertyMainWindow *ui;
    MyClass *my;
    NextClass *myNext;

 private slots:
     void userChanged(QString);
};

#endif // PROPERTYMAINWINDOW_H
