#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

// Luokka opiskelijan tietojen hallintaan
class Student {
private:
    string name;
    int studentNumber;
    double average;

public:
    // Palauttaa ja asettaa nimen
    string getName() const;
    void setName(const string &newName);
    // Palauttaa ja asettaa opiskelijanumeron
    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);
    // Palauttaa ja asettaa keskiarvon
    double getAverage() const;
    void setAverage(double newAverage);
};

#endif // STUDENT_H
