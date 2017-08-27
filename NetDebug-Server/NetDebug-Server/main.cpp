#include "NetDebugServerWnd.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NetDebugServerWnd w;
    w.show();
    return a.exec();
}
