#include "exampleclass.h"
#include <QDebug>
#include <QThread>

ExampleClass::ExampleClass(QObject *parent)
    : QObject{parent}
{
    // Tulostetaan konstruktorin alussa
    qDebug() << "Start";

    // Yhdistetään readyToSay-signaali slottiin sayHelloSlot
    connect(this, &ExampleClass::readyToSay, this, &ExampleClass::sayHelloSlot);

    // Tulostetaan konstruktorin lopussa
    qDebug() << "End";
}

// Julkinen metodi, joka odottaa 1 sekunnin ja sitten nostaa signaalin
void ExampleClass::startToWait()
{
    QThread::msleep(1000);
    emit readyToSay();
}

// Slot-metodi, joka reagoi signaaliin ja tulostaa viestin konsoliin
void ExampleClass::sayHelloSlot()
{
    qDebug() << "Terve";
}
