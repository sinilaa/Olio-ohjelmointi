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
    Car();
    Car(string brand, string model);

    string getModel() const;
    string getBrand() const;
    Engine getEngine() const;
    vector<Wheel> getWheels() const;

    void setModel(string model);
    void setBrand(string brand);

    void setEngine();
    void setWheels();
    void printDetails() const;
};

#endif // CAR_H
