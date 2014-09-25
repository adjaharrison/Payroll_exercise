#include "payroll.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Payroll w;
    w.show();

    return a.exec();
}
