#include "twopower.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TwoPower w;
    w.show();

    return a.exec();
}
