#include "car.h"
#include <iostream>

using namespace std;

Car::Car() : brand(""), model("") {
    wheels.resize(4);
}

Car::Car(string brand, string model)
    : brand(brand), model(model) {
    wheels.resize(4);
}

string Car::getModel() const {
    return model;
}

string Car::getBrand() const {
    return brand;
}

Engine Car::getEngine() const {
    return engine;
}

vector<Wheel> Car::getWheels() const {
    return wheels;
}

void Car::setModel(string model) {
    this->model = model;
}

void Car::setBrand(string brand) {
    this->brand = brand;
}

void Car::setEngine() {
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

void Car::setWheels() {
    for (size_t i = 0; i < wheels.size(); ++i) {
        wheels[i].setSize(17);
        wheels[i].setType("kesarengas");
    }
}

void Car::printDetails() const {
    cout << "--- Auton tiedot ---\n";
    cout << "Merkki: " << brand << "\n";
    cout << "Malli: " << model << "\n";

    cout << "\n--- Moottori ---\n";
    cout << "Hevosvoimat: " << engine.getHorsepower() << " hv\n";
    cout << "Tilavuus: " << engine.getDisplacement() << " L\n";

    cout << "\n--- Renkaat ---\n";
    if (!wheels.empty()) {
        cout << "Lukumäärä: " << wheels.size() << " kpl\n";
        cout << "Koko: " << wheels[0].getSize() << " tuumaa\n";
        cout << "Tyyppi: " << wheels[0].getType() << "\n";
    } else {
        cout << "Ei renkaita.\n";
    }
    cout << "---------------------\n";
}
