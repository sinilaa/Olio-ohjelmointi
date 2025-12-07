#include <iostream>
#include "classb.h"
#include "classa1.h"
#include "classa2.h"

using namespace std;

int main()
{
    // -------------------------
    // Tavalliset muuttujat
    // -------------------------

    int a = 5;
    int b = 6;

    // Tulostetaan muuttujan a arvo ja osoite
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    // -------------------------
    // Osoitin (pointer)
    // -------------------------

    // Osoitinmuuttuja saa muuttujan a:n osoitteen
    int *pointerA = &a;

    // Tulostetaan muistipaikan osoite ja sisältö
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    // Pointer voidaan myöhemmin asettaa osoittamaan toiseen muuttujaan
    pointerA = &b;

    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    // -------------------------
    // Referenssi (alias)
    // -------------------------

    // Referenssi viittaa muuttujaan a
    int &refA = a;

    // Tulostetaan muistipaikan osoite ja sisältö
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    // Referenssin arvo voidaan muuttaa, mutta se pysyy viittaamassa samaan muuttujaan
    refA = b;

    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    // -------------------------
    // Luokka ClassB
    // -------------------------

    ClassB objB;
    // Asetetaan info B-olioon
    objB.setInfo("Olion B asettama info");

    // -------------------------
    // Luokan ClassA1
    // -------------------------

    // ObjA1 saa kopion objB:stä
    ClassA1 objA1(objB);
    // Muutetaan objA1:n infoa
    objA1.setBinfo("Olion objA1 asettama info");

    // Tulostetaan molempien info
    cout<<"objB: "<<objB.getInfo()<<endl; // alkuperäinen objB pysyy samana
    cout<<"objA1: "<<objA1.getBinfo()<<endl; // objA1:n info muuttui

    // -------------------------
    // Luokan ClassA2
    // -------------------------

    // Viittaus objB:hen
    ClassB &refB=objB;
    // ObjA2 käyttää samaa objB:ta
    ClassA2 objA2(refB);
    // Muuttaa suoraan objB:n infoa
    objA2.setBinfo("Olion Agr asettama info");

    // Tulostetaan molemmat, objB:n info muuttui
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2: "<<objA2.getBinfo()<<endl;

    cout<<endl;

    return 0;
}
