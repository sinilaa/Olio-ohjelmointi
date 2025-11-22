#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal
{
public:
    Dog();
    ~Dog(); // Destruktori
    void callOut() override; // Ylikirjoitus
};

#endif // DOG_H
