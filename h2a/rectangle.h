#ifndef RECTANGLE_H
#define RECTANGLE_H

// Luokka suorakulmion tietojen hallintaan
class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(); // konstruktori alustaa leveyden ja korkeuden nollaksi
    ~Rectangle(); // destruktorai tyhjentää tarvittaessa resurssit

    // Palauttaa pinta-alan ja ympärysmitan
    double getArea() const;
    double getCircum() const;
    // Asetaa leveyden ja korkeuden
    void setWidth(double);
    void setHeight(double);
};

#endif // RECTANGLE_H
