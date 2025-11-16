#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>

int main()
{
    // ===== Car-olio =====
    Car newCar;
    // Asetetaan auton tiedot
    newCar.setBrand("Ford");
    newCar.setModel("Focus");
    newCar.setYearModel(2017);
    // Tulostetaan auton tiedot
    newCar.printData();

    cout << endl;

    // ===== Rectangle-olio =====
    Rectangle* objectRectangle = new Rectangle();
    // Asetetaan suorakulmion mitat
    objectRectangle ->setWidth(3.4);
    objectRectangle ->setHeight(2.2);

    // Tulostetaan suorakulmion mitat
    cout << "Suorakulmion pinta-ala: " << objectRectangle ->getArea() << endl;
    cout << "Suorakulmion ympärysmitta: " << objectRectangle ->getCircum() << endl;

    // Vapautetaan kokomuisti
    delete objectRectangle;

    cout << endl;

    // ===== Student-olio =====
    unique_ptr<Student> objectStudent = make_unique<Student>();
    // Asetetaan opiskelijan tiedot
    objectStudent ->setName("Sini");
    objectStudent ->setStudentNumber(106);
    objectStudent ->setAverage(4.89);

    // Tulostetaan opiskelijan tiedot
    cout << "Opiskelijan tiedot: " << endl;
    cout << "Nimi: " << objectStudent ->getName() << endl;
    cout << "Opiskelijanumero: " << objectStudent ->getStudentNumber() << endl;
    cout << "Keskiarvo: " << objectStudent ->getAverage() << endl;

    return 0;
}
