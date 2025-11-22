#ifndef CHEF_H
#define CHEF_H

#include <string>
using namespace std;

class Chef {
protected:
    string name; // kokin nimi

public:
    Chef(string name); // konstruktori
    ~Chef(); // destruktori

    void makeSalad(); // tulostaa salaatin tekemisen
    void makeSoup(); // tulostaa keiton tekemisen
};

#endif // CHEF_H
