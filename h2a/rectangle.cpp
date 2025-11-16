#include "rectangle.h"
#include <iostream>
using namespace std;

// Konstruktori, alustaa leveyden ja korkeuden nollaksi
Rectangle::Rectangle() : width(0), height(0) {}

// Destruktori, tarvittaessa tyhjentää resurssit
Rectangle::~Rectangle() {}

// Palauttaa pinta-alan
double Rectangle::getArea() const {
    return width * height;
}

// Palauttaa ympärysmitan
double Rectangle::getCircum() const {
    return 2 * (width + height);
}

// Asettaa leveyden
void Rectangle::setWidth(double w) {
    width = w;
}

// Asettaa korkeuden
void Rectangle::setHeight(double h) {
    height = h;
}
