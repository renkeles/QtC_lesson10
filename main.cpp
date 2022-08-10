#include "mainwindow.h"
#include <QApplication>
#include "unittest.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTest::qExec(new unittest(), argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
