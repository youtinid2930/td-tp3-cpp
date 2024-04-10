#include "cylindre.h"
#include <cmath>
#include <iostream>

using namespace std;

Cylindre::Cylindre() : Cercle(), hauteur(0.0) {}

Cylindre::Cylindre(double r, double h) : Cercle(r), hauteur(h) {}

Cylindre::Cylindre(Point p, double r, double h) : Cercle(p, r), hauteur(h) {}

Cylindre::Cylindre(const Cylindre &c) : Cercle(c), hauteur(c.getHauteur()) {}

double Cylindre::getHauteur() const{ return hauteur; }

void Cylindre::setHauteur(double h) { hauteur = h; }

double Cylindre::surface() const {
    return 2 * M_PI * getRayon() * (getRayon() + hauteur);
}

double Cylindre::volume() const {
    return M_PI * getRayon() * getRayon() * hauteur;
}

void Cylindre::afficher() {
    cout << "Cylindre de centre ";
    Point::afficher();
    cout << ", de rayon " << getRayon() << " et de hauteur " << hauteur;
}
