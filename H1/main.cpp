#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

// Funktio laskee ja tulostaa kokonaislukujen summan
void calcSum (int a, int b) {
    cout << "Lukujen summa on: " << a + b << endl;
}

// Funktio laskee kokonaislukujen osamäärän ja tulostaa sen kahden desimaalin tarkkuudella
void calcDiv (int a, int b) {
    if (b != 0) {
        cout << fixed << setprecision(2);
        cout << "Lukujen osamaara on: " << static_cast<double>(a) / b << endl;
    } else {
        // Jos jakaja on 0 tulostetaan virheilmoitus
        cout << "Ei voida jakaa nollalla!" << endl;
    }
}

// Funktio palauttaa kokonaislukujen summan
int retSum (int a, int b) {
    return a + b;
}

// Funktio palauttaa kokonaislukujen osamäärän liukulukuna
float retDiv (int a, int b) {
    if (b != 0) {
        return static_cast<float>(a) / b;
    } else {
        // Jos jakaja on 0 heitetään virheilmoitus
        throw runtime_error("Jakaja ei saa olla nolla! ");
    }
}

int main()
{
    // Kokonaisluku muuttujat
    int a;
    int b;

    // Liukuluku muuttuja
    float result;

    // Kysytään käyttäjältä kokonaisluvut
    cout << "Anna eka luku: ";
    cin >> a;

    cout << "Anna toka luku: ";
    cin >> b;

    // Kutsutaan tulostavia funktioita calcSum ja calcDiv
    calcSum(a, b);
    calcDiv(a, b);

    // Kutsutaan palauttavaa funktiota retSum ja tulostetaan sen palauttama arvo
    cout << a << " + " << b << " = " << retSum(a, b) << endl;

    // Kutsutaan palauttavaa funktiota retDiv ja tulostetaan sen palauttama arvo
    try {
        result = retDiv(a, b);
        cout << a << " / " <<  b << " = " << fixed << setprecision(2) << result << endl;
    } catch (runtime_error& e) {
        // Jos jakaja on nolla tulostuu virheilmoitus
        cout<< "Error: " << e.what() << endl;
    }

    return 0;
}

