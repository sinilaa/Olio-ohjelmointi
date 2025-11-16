#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    // Luodaan vektori joka sisältää Car-olioita
    vector<Car> carList;

    // Lisätään kolme autoa listaan konstruktorilla
    carList.emplace_back("Ford", "Focus", 2017);
    carList.emplace_back("Mini", "Cooper", 2020);
    carList.emplace_back("Volkswagen", "Beetle", 2007);

    // Tulostetaan toisen auton tiedot
    cout << "Toisen auton tiedot:\n\n";
    carList[1].printData();

    cout << endl;

    // Tulostetaan kaikkien autojen tiedot
    cout << "Kaikkien autojen tiedot:\n\n";
    for (int x = 0; x <= 2; x++) {
        cout << "Auto " << x + 1 << ":" << endl;
        carList[x].printData();
        cout << endl;
    }

    return 0;
}
