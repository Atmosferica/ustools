#include "mainwindow.h"
#include <QApplication>
#include <qdebug.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    qDebug() << "Ciao sono il thread della GUI:" << a.thread()->currentThreadId();

    return a.exec();
}
