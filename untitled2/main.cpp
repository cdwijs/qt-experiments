#include "mainwindow.h"
#include <QApplication>
#include "toplevel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    TopLevel myToplevel;

    return a.exec();
}
