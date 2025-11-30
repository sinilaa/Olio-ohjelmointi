#include "car.h"
#include "engine.h"
#include "wheel.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printCarDetails(const Car& car) {
    Engine engine = car.getEngine();
    vector<Wheel> wheels = car.getWheels();

    cout << "Auto : " << car.getModel() << " " << car.getBrand() << endl;

    cout << "Moottori: " << engine.getHorsepower() << " hp, " << engine.getDisplacement() << " L" << endl;

    if (wheels.size() == 4) {
        for (int i = 0; i < 4; ++i) {
            cout << "Rengas " << i + 1 << ":" << wheels[i].getSize() << " tuumaa, " << wheels[i].getType() << endl;
        }
    }
}

int main() {
    Car myCar("Toyota", "Corolla");

    myCar.setEngine();

    myCar.setWheels();

    printCarDetails(myCar);

    cout << "\nPress <RETURN> to close this window..." << endl;
    cin.get();

        return 0;
}
