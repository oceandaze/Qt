#include "kzamainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KzaMainWindow w;
    //w.show();

    return a.exec();
}
