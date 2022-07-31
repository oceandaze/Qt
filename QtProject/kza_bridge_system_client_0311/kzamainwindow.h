#ifndef KZAMAINWINDOW_H
#define KZAMAINWINDOW_H

#include <QMainWindow>
#include "login.h"
#include "logmainwindow.h"
namespace Ui {
class KzaMainWindow;
}

class KzaMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit KzaMainWindow(QWidget *parent = 0);
    ~KzaMainWindow();
    void init();
private slots:
    void showMain();
private:
    Ui::KzaMainWindow *ui;
    Login *m_login;
    LogMainWindow *m_log;
};

#endif // KZAMAINWINDOW_H
