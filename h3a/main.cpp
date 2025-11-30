#include <iostream>
#include "chef.h"
#include "italianchef.h"

int main() {
    // Luo Chef-olion pinossa
    Chef objChef("Gordon Ramsay");
    objChef.makeSalad();
    objChef.makeSoup();

    // Luo ItalianChef-olion pinossa
    ItalianChef objItalianChef("Anthony Bourdain");
    objItalianChef.makeSalad(); // Perii funktion Chef-luokasta
    objItalianChef.makeSoup(); // Perii funktion Chef-luokasta
    objItalianChef.makePasta();

    // Tulostaa ItalianChef-olion nimen
    cout << "name of the italian chef is " << objItalianChef.getName() << endl;

    return 0;
}
