#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>


namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = 0);
    ~MainWindow2();

private:
    Ui::MainWindow2 *ui;
public slots:
    void slotB(QString);

};

#endif // MAINWINDOW2_H
