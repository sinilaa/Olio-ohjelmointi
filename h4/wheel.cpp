#include "Wheel.h"
#include <iostream> // Vaikka ei käytetä metodeissa, on usein mukana

using namespace std;

Wheel::Wheel() : size(0), type("") {

}

Wheel::Wheel(int size, string type)
    : size(size), type(type) {
}

int Wheel::getSize() const {
    return size;
}

string Wheel::getType() const {
    return type;
}

void Wheel::setSize(int size) {
    this->size = size;
}

void Wheel::setType(string type) {
    this->type = type;
}
