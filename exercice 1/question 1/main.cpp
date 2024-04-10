#include "Cylindre.h"
#include <iostream>


using namespace std;

int main() {

    Point p1;
    Point p2(3, 4);
    Point p3(p2);
    p1.afficher(); cout << endl;
    p2.afficher(); cout << endl;
    p3.afficher(); cout << endl;


    Cercle c1;
    Cercle c2(5);
    Cercle c3(p2, 3);
    Cercle c4(c3);
    c1.afficher(); cout << ", Rayon: " << c1.getRayon() << endl;
    c2.afficher(); cout << ", Rayon: " << c2.getRayon() << endl;
    c3.afficher(); cout << ", Rayon: " << c3.getRayon() << endl;
    c4.afficher(); cout << ", Rayon: " << c4.getRayon() << endl;
    cout << "Surface de c3: " << c3.surface() << endl;
    cout << "Périmètre de c3: " << c3.perimetre() << endl;
    cout << "Est (3,4) à l'intérieur de c3: " << boolalpha << c3.estInterieur(Point(3, 4)) << endl;


    Cylindre cyl1;
    Cylindre cyl2(4, 6);
    Cylindre cyl3(p2, 2, 5);
    Cylindre cyl4(cyl3);
    cyl1.afficher(); cout << ", Rayon: " << cyl1.getRayon() << ", Hauteur: " << cyl1.getHauteur() << endl;
    cyl2.afficher(); cout << ", Rayon: " << cyl2.getRayon() << ", Hauteur: " << cyl2.getHauteur() << endl;
    cyl3.afficher(); cout << ", Rayon: " << cyl3.getRayon() << ", Hauteur: " << cyl3.getHauteur() << endl;
    cyl4.afficher(); cout << ", Rayon: " << cyl4.getRayon() << ", Hauteur: " << cyl4.getHauteur() << endl;
    cout << "Surface de cyl3: " << cyl3.surface() << endl;
    cout << "Volume de cyl3: " << cyl3.volume() << endl;

    return 0;
}
