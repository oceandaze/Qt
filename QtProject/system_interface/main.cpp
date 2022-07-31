#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("系统属性");
    w.setFixedSize(455,520);
    w.setWindowFlags(Qt::Dialog);
    w.show();

    return a.exec();
}
