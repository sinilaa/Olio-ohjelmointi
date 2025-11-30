#ifndef WHEEL_H
#define WHEEL_H
#include <string>

using namespace std;

// Rengasta kuvaava luokka
class Wheel {
private:
    int size;
    string type;

public:
    Wheel(); // Oletusrengas
    Wheel(int size, string type); // Rengas jolle annetaan koko ja tyyppi

    int getSize() const; // Palauttaa renkaan koon
    string getType() const; // Palauttaa renkaan tyypin

    void setSize(int size); // Asettaa renkaan koon
    void setType(string type); // Asettaa renkaan tyypin
};

#endif // WHEEL_H
