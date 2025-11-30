#include "Wheel.h"
#include <iostream>

using namespace std;

// Oletusrengas koko 0 ja tyhjä tyyppi
Wheel::Wheel() : size(0), type("") {

}

// Määritellään rengas annetulla koolla ja tyypillä
Wheel::Wheel(int size, string type)
    : size(size), type(type) {
}

// Palauttaa renkaan koon
int Wheel::getSize() const {
    return size;
}

// Palauttaa renkaan tyypin
string Wheel::getType() const {
    return type;
}

// Asettaa renkaan koon
void Wheel::setSize(int size) {
    this->size = size;
}

// Asettaa renkaan tyypin
void Wheel::setType(string type) {
    this->type = type;
}
