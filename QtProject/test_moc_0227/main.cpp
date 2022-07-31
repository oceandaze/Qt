#include "mocmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MOCMainWindow w;
    w.show();

    return a.exec();
}
