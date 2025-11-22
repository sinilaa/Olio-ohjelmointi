#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

// ItalianChef perii Chef-luokan
class ItalianChef : public Chef {
public:
    ItalianChef(string name); // konstruktori
    ~ItalianChef(); // destruktori

    string getName(); // palauttaa kokin nimen
    void makePasta(); // tulostaa pastan tekemisens
};

#endif // ITALIANCHEF_H
