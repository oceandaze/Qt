#include "movetothreadmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MoveToThreadMainWindow w;
    w.show();

    return a.exec();
}
