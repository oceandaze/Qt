#include "vmmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VMMainWindow w;
    w.show();

    return a.exec();
}
