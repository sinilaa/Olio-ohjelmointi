#include <iostream>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{
    Animal objAnimal; // Kantaluokan olio
    objAnimal.callOut(); // Kutsutaan virtuaali metodia

    Dog objDog; // Aliluokan olio
    objDog.callOut(); // Kutsutaan ylikirjoitettua metodia

    return 0;
}
