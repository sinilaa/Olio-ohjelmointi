#include "student.h"

// Palauttaa opiskelijanumeron
int Student::getStudentNumber() const
{
    return studentNumber;
}

// Asettaa opiskelijanumeron
void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

// Palauttaa keskiarvon
double Student::getAverage() const
{
    return average;
}

// Asettaa keskiarvon
void Student::setAverage(double newAverage)
{
    average = newAverage;
}

// Palauttaa nimen
string Student::getName() const
{
    return name;
}

// Asettaa nimen
void Student::setName(const string &newName)
{
    name = newName;
}
