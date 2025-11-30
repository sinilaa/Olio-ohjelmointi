#include "car.h"
#include <iostream>

using namespace std;

// Oletusauto tyhjä merkki ja malli, lisätään 4 rengasta
Car::Car() : brand(""), model("") {
    wheels.resize(4);
}

// Auto jolle annetaan merkki ja malli, lisätään 4 rengasta
Car::Car(string brand, string model)
    : brand(brand), model(model) {
    wheels.resize(4);
}

// Palauttaa auton mallin
string Car::getModel() const {
    return model;
}

// Palauttaa auton merkin
string Car::getBrand() const {
    return brand;
}

// Palauttaa auton moottorin
Engine Car::getEngine() const {
    return engine;
}

// Palauttaa renkaat vektorina
vector<Wheel> Car::getWheels() const {
    return wheels;
}

// Asettaa auton mallin
void Car::setModel(string model) {
    this->model = model;
}

// Asettaa auton merkin
void Car::setBrand(string brand) {
    this->brand = brand;
}

// Luo oletusmoottori autoon
void Car::setEngine() {
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

// Luo 4 kesärengasta autoon
void Car::setWheels() {
    for (size_t i = 0; i < wheels.size(); ++i) {
        wheels[i].setSize(17);
        wheels[i].setType("kesarengas");
    }
}

// Tulostaa auton kaikki tiedot
void Car::printDetails() const {
    // Haetaan komponenttien tiedot
    Engine engine = this->getEngine();
    vector<Wheel> wheels = this->getWheels();

    // Tulostetaan auto
    cout << "Auto : " << model << " " << brand << endl;

    // Tulostetaan moottori
    cout << "Moottori: " << engine.getHorsepower() << " hp, " << engine.getDisplacement() << " L" << endl;

    // Tulostetaan renkaat
    if (wheels.size() == 4) {
        for (int i = 0; i < 4; ++i) {
            cout << "Rengas " << i + 1 << ":" << wheels[i].getSize() << " tuumaa, " << wheels[i].getType() << endl;
        }
    }
}
