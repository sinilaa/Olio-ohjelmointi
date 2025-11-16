#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;

// Luokka auton tietojen tallentamiseen
class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    // Tulostaa auton tiedot
    void printData();
    // Asettaa auton tiedot
    void setBrand(string);
    void setModel(string);
    void setYearModel(int);
};

#endif // CAR_H
