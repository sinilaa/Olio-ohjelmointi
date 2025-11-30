#include "chef.h"
#include <iostream>

// Konstruktori alustaa nimen ja tulostaa debugin
Chef::Chef(string name) : name(name) {
    cout << "Chef " << name << " konstruktori" << endl;
}

// Tulostaa salaatin tekemisen
void Chef::makeSalad() {
    cout << "Chef " << name << " makes salad" << endl;
}

// Tulostaa keiton tekemisen
void Chef::makeSoup() {
    cout << "Chef " << name << " makes soup" << endl;
}

// Destruktori tulostaa debugin
Chef::~Chef() {
    cout << "Chef " << name << " destruktori" << endl;
}
