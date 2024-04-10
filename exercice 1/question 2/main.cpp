#include "Parallelepipede.h"
#include <iostream>

int main() {


    Point p1(1, 2);
    Point p2(p1);
    p1.afficher(); std::cout << std::endl;
    p2.afficher(); std::cout << std::endl;
    std::cout << std::endl;



    Rectangle r1(0, 0, 5, 4);
    Rectangle r2(Point(1, 1), 3, 2);
    Rectangle r3(r1);
    r1.afficher(); std::cout << ", Surface: " << r1.surface() << ", Perimetre: " << r1.perimetre() << std::endl;
    r2.afficher(); std::cout << ", Surface: " << r2.surface() << ", Perimetre: " << r2.perimetre() << std::endl;
    r3.afficher(); std::cout << ", Surface: " << r3.surface() << ", Perimetre: " << r3.perimetre() << std::endl;
    std::cout << std::endl;



    Parallelepipede parr1(0, 0, 3, 4, 5);
    Parallelepipede parr2(r2, 6);
    Parallelepipede parr3(parr1);
    parr1.afficher(); std::cout << ", Volume: " << parr1.volume() << std::endl;
    parr2.afficher(); std::cout << ", Volume: " << parr2.volume() << std::endl;
    parr3.afficher(); std::cout << ", Volume: " << parr3.volume()<< std::endl;

    return 0;
}
