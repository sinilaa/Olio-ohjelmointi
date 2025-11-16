#include "car.h"
#include <iostream>
using namespace std;

// Asettaa auton merkin
void Car::setBrand(string b) {
    brand = b;
}

// Asettaa auton mallin
void Car::setModel(string m) {
    model = m;
}

// Asettaa auton valmistusvuoden
void Car::setYearModel(int y) {
    yearModel = y;
}

// Tulostaa auton tiedot
void Car::printData() {
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Vuosiluku: " << yearModel << endl;
}
