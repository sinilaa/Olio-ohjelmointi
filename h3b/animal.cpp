#include "animal.h"
#include <iostream>

using namespace std;

// Konstruktori
Animal::Animal() {

}

// Virtuaalinen metodi tulostaa tekstin
void Animal::callOut() {
    cout << "Eläin ääntelee." << endl;
}

// Virtuaalinen destruktori
Animal::~Animal() {

}
