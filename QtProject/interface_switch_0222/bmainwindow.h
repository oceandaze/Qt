#ifndef BMAINWINDOW_H
#define BMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class BMainWindow;
}

class BMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BMainWindow(QWidget *parent = 0);
    ~BMainWindow();

private:
    Ui::BMainWindow *ui;
signals:
    void bSignal();
private slots:
    void on_pushButton_clicked();
};

#endif // BMAINWINDOW_H
