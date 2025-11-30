#include "engine.h"
#include <iostream>

// Oletusmoottori teho 0 ja iskutilavuus 0.0
Engine::Engine() : horsepower(0), displacement(0.0) {

}

// Moottori jolle annetaan teho ja iskutilavuus
Engine::Engine(int horsepower, double displacement)
    : horsepower(horsepower), displacement(displacement) {
}

// Palauttaa moottorin tehon
int Engine::getHorsepower() const {
    return horsepower;
}

// Palauttaa moottorin iskutilavuuden
double Engine::getDisplacement() const {
    return displacement;
}

// Asettaa moottorin tehon
void Engine::setHorsepower(int horsepower) {
    this->horsepower = horsepower;
}

// Asettaa moottorin iskutilavuuden
void Engine::setDisplacement(double displacement) {
    this->displacement = displacement;
}
