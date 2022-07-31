#ifndef SUCCESSMAINWINDOW_H
#define SUCCESSMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class SuccessMainWindow;
}

class SuccessMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SuccessMainWindow(QWidget *parent = 0);
    ~SuccessMainWindow();

private:
    Ui::SuccessMainWindow *ui;
};

#endif // SUCCESSMAINWINDOW_H
