#include "dmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dmanager w;
    w.show();

    return a.exec();
}
