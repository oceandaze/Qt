#ifndef AMAINWINDOW_H
#define AMAINWINDOW_H

#include <QMainWindow>
#include <bform.h>
#include <cform.h>

namespace Ui {
class AMainWindow;
}

class AMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AMainWindow(QWidget *parent = 0);
    ~AMainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AMainWindow *ui;
    BForm *bform;
    CForm *cform;
signals:
    void signalA();
private slots:
    void slotA();
private slots:
    void slotB();
private slots:
    void slotC();
};

#endif // AMAINWINDOW_H
