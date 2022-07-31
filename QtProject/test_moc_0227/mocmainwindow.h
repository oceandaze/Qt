#ifndef MOCMAINWINDOW_H
#define MOCMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MOCMainWindow;
}

class MOCMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MOCMainWindow(QWidget *parent = 0);
    ~MOCMainWindow();

private:
    Ui::MOCMainWindow *ui;
signals:
    void mySignal();
    void nextSignal();
};

#endif // MOCMAINWINDOW_H
