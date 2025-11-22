#include "italianchef.h"
#include <iostream>

// Konstruktori välittää nimen Chef-luokalle ja tulostaa debugin
ItalianChef::ItalianChef(string name) : Chef(name) {
    cout << "Italian Chef " << name << " konstruktori" << endl;
}

// Tulostaa pastan tekemisen
void ItalianChef::makePasta() {
    cout << "Italian Chef " << name << " makes pasta" << endl;
}

// Palauttaa kokin nimen
string ItalianChef::getName() {
    return name;
}

// Destruktori tulostaa debugin
ItalianChef::~ItalianChef() {
    cout << "Italian Chef " << name << " destruktori" << endl;
}
