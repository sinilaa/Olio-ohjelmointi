#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <iostream>
#include <QDebug>
using namespace  std;

class MyClass : public QObject {
    // Q_OBJECT-makro mahdollistaa MyClass-luokan käytön signaalien ja slottien kanssa
    Q_OBJECT

public:
    // Konstruktorissa voi asettaa parent-olion
    MyClass(QObject* parent = nullptr);

    // Metodi, joka “nostaa” mySignal-signaalin
    void raiseMySignal();

signals:
    // Signaali, joka voidaan kytkeä slotteihin
    void mySignal();

public slots:
    // Slot-metodi, johon signaalit voidaan yhdistää
    void mySlot();
};

#endif // MYCLASS_H
