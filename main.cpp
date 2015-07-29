#include "demoembarcados.h"
#include <QApplication>
#include <QWidget>
#include <QLabel>


int main(int argc, char *argv[])
{
#ifdef ARM
    QApplication a(argc, argv , QApplication::GuiServer);
    demoembarcados w;
    w.setCursor(Qt::BlankCursor);
    w.setWindowState(w.windowState() ^ Qt::WindowFullScreen);
    w.show();
#endif

#ifdef DESKTOP
    QApplication a(argc, argv);
    demoembarcados w;
    //w.setCursor(Qt::BlankCursor);
    w.setWindowState(w.windowState());
    w.show();
#endif


//    demoembarcados w;
//    w.setCursor(Qt::BlankCursor);
//    w.setWindowState(w.windowState() ^ Qt::WindowFullScreen);
//    w.show();



    return a.exec();
}
