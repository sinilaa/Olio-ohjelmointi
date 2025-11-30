#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine();
    Engine(int horsepower, double displacement);

    int getHorsepower() const;
    double getDisplacement() const;

    void setHorsepower(int horsepower);
    void setDisplacement(double displacement);
};

#endif // ENGINE_H
