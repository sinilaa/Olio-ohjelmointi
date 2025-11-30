#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"
#include <string>
#include <vector>

using namespace std;

class Car {
private:
    Engine engine;
    vector<Wheel> wheels;
    string model;
    string brand;

public:
    Car(); // Oletusauto
    Car(string brand, string model); // Auto jolle annetaan merkki ja malli

    string getModel() const; // Palauttaa mallin
    string getBrand() const; // Palauttaa merkin
    Engine getEngine() const; // Palauttaa moottorin
    vector<Wheel> getWheels() const; // Palauttaa renkaat

    void setModel(string model); // Asettaa mallin
    void setBrand(string brand); // Asettaa merkin

    void setEngine(); // Luo oletusmoottorin autoon
    void setWheels(); // Luo oletusrenkaat autoon

    void printDetails() const; // Tulostaa auton tiedot
};

#endif // CAR_H
