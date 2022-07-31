#include "testmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestMainWindow w;
    w.setWindowTitle("微信");
    w.setFixedSize(288,350);
    w.setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::WindowCloseButtonHint);
    w.show();//调用窗口

    return a.exec();//启动了事件循环，并对事件做对应的分发处理
    // return 0;
}
