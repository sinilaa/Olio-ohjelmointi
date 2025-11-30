#ifndef WHEEL_H
#define WHEEL_H
#include <string>

using namespace std;

class Wheel {
private:
    int size;
    string type;

public:
    Wheel();
    Wheel(int size, string type);

    int getSize() const;
    string getType() const;

    void setSize(int size);
    void setType(string type);
};

#endif // WHEEL_H
