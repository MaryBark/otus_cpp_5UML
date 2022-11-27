#include "DocView.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DocView w;
    w.show();
    return a.exec();
}
