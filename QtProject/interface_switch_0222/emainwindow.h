#ifndef EMAINWINDOW_H
#define EMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class EMainWindow;
}

class EMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EMainWindow(QWidget *parent = 0);
    ~EMainWindow();

private:
    Ui::EMainWindow *ui;
signals:
    void eSignal();
    void eSignal2();
    void eSignal2(int);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // EMAINWINDOW_H
