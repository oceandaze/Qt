#include "propertymainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PropertyMainWindow w;
    w.show();

    return a.exec();
}
