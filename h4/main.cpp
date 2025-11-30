#include "car.h"
#include "engine.h"
#include "wheel.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Tulostaa auton tiedot
void printCarDetails(const Car& car) {
    Engine engine = car.getEngine();
    vector<Wheel> wheels = car.getWheels();

    // Auton merkki ja malli
    cout << "Auto : " << car.getModel() << " " << car.getBrand() << endl;

    // Moottorin tiedot
    cout << "Moottori: " << engine.getHorsepower() << " hp, " << engine.getDisplacement() << " L" << endl;

    // Jos renkaiden määrä on 4, tulostetaan tiedot jokaisesta renkaasta
    if (wheels.size() == 4) {
        for (int i = 0; i < 4; ++i) {
            cout << "Rengas " << i + 1 << ":" << wheels[i].getSize() << " tuumaa, " << wheels[i].getType() << endl;
        }
    }
}

int main() {
    Car myCar("Toyota", "Corolla"); // Luodaan Car-olio

    myCar.setEngine(); // Lisätään moottori autoon
    myCar.setWheels(); // Lisätään neljä rengasta autoon

    printCarDetails(myCar); // Tulostetaan auton tiedot

    return 0;
}
