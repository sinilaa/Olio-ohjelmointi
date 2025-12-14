#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent) {
    // Vanha syntaksi (ei suositella nykyään)
    // connect(this, SIGNAL(mySignal()), this, SLOT(mySlot()));

    // Uusi syntaksi: yhdistetään signaali mySignal slottiin mySlot
    connect(this, &MyClass::mySignal, this, &MyClass::mySlot);
}

void MyClass::raiseMySignal()
{
    // Nostetaan signaali mySignal
    emit mySignal();
}

void MyClass::mySlot()
{
    // Slot-metodi tulostaa viestin konsoliin
    qDebug()<<"mySlot:ia kutsuttiin";
}
