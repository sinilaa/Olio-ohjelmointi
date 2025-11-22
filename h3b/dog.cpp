#include "dog.h"
#include <iostream>

using namespace std;

// Konstruktori
Dog::Dog() {

}

// Ylikirjoitettu metodi tulostaa tekstin
void Dog::callOut() {
    cout << "Koira haukkuu!" << endl;
}

// Virtuaalinen destruktori
Dog::~Dog() {

}
