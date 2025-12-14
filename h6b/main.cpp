#include <QCoreApplication>
#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Luodaan ExampleClass-olio
    ExampleClass obj;

    // Kutsutaan metodia, joka nostaa signaalin
    obj.startToWait();

    return a.exec();
}
