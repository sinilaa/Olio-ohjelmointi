#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:
    Animal();
    virtual ~Animal(); // Virtuaalinen destruktori
    virtual void callOut(); // Virtuaalinen metodi
};

#endif // ANIMAL_H
