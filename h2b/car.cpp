#include "car.h"
#include <iostream>

using namespace std;

// Konstruktori alustaa jäsenmuuttujat
Car::Car(string b, string m, int y) {
    brand = b;
    model = m;
    yearModel = y;
}

// Tulostaa auton tiedot
void Car::printData() {
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Vuosimalli: " << yearModel << endl;
}
