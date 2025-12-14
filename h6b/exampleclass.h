#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <QObject>
#include <QThread>
#include <QCoreApplication>

class ExampleClass : public QObject
{
    Q_OBJECT
public:
    explicit ExampleClass(QObject *parent = nullptr);
    // Julkinen metodi
    void startToWait();

signals:
    // Signaali, joka ilmoittaa, että on valmiina sanomaan
    void readyToSay();
public slots:
    // Slot-metodi, johon signaali voidaan yhdistää
    void sayHelloSlot();
};

#endif // EXAMPLECLASS_H
