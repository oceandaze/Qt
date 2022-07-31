#ifndef AMAINWINDOW_H
#define AMAINWINDOW_H

#include <QMainWindow>
#include <bmainwindow.h>
#include <cmainwindow.h>
#include <dmainwindow.h>
#include <emainwindow.h>

namespace Ui {
class AMainWindow;
}

class AMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AMainWindow(QWidget *parent = 0);
    ~AMainWindow();

private:
    Ui::AMainWindow *ui;
    BMainWindow *bWindow;
    CMainWindow *cWindow;

    DMainWindow *dWindow;

    EMainWindow *eWindow;

signals:
    void aSignal();
private slots:
    void aSlot();
    void cSlot();
    void bSlot();
    void dSlot();
    void eSlot();
       void eSlot2();
    void on_pushButton_clicked();
};

#endif // AMAINWINDOW_H
