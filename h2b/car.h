#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car {
private:
    // Auton tiedot
    string brand;
    string model;
    int yearModel;

public:
    // Konstruktori asettaa kaikki arvot
    Car(string, string, int);

    // Tulostaa auton tiedot
    void printData();
};

#endif // CAR_H
