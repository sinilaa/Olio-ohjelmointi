#ifndef ENGINE_H
#define ENGINE_H

// Moottoria kuvaava luokka
class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine(); // Oletusmoottori
    Engine(int horsepower, double displacement); // Moottori jolle annetaan teho ja tilavuus

    int getHorsepower() const; // Palauttaa tehon
    double getDisplacement() const; // Palauttaa iskutilavuuden

    void setHorsepower(int horsepower); // Asettaa tehon
    void setDisplacement(double displacement); // Asettaa iskutilavuuden
};

#endif // ENGINE_H
