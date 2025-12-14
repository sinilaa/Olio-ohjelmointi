#include <iostream>
#include "myclass.h"

using namespace std;

int main()
{
    // Luodaan MyClass-luokan olio
    MyClass objMyClass;

    // Nostetaan olion signaali mySignal kutsumalla metodia
    objMyClass.raiseMySignal();
    return 0;
}
