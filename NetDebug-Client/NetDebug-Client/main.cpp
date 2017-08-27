#include "NetDebugClientWnd.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NetDebugClientWnd w;
    w.show();
    return a.exec();
}
