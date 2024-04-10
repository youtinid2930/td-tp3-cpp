#include "cercle.h"
#include <cmath>
#include <iostream>

using namespace std;

Cercle::Cercle() : Point(), rayon(0.0) {}

Cercle::Cercle(double r) : Point(), rayon(r) {}

Cercle::Cercle(Point p, double r) : Point(p), rayon(r) {}

Cercle::Cercle(const Cercle &c) : Point(c), rayon(c.rayon) {}

double Cercle::getRayon() const{ return rayon; }

void Cercle::setRayon(double r) { rayon = r; }

void Cercle::setCenter(Point p) { setX(p.getX()); setY(p.getY()); }

double Cercle::surface() const { return M_PI * rayon * rayon; }

double Cercle::perimetre() const { return 2 * M_PI * rayon; }

bool Cercle::estInterieur(Point p) {
    double distance = sqrt((p.getX() - getX()) * (p.getX() - getX()) + (p.getY() - getY()) * (p.getY() - getY()));
    return distance <= rayon;
}

void Cercle::afficher() {
    cout << "Cercle de centre ";
    Point::afficher();
    cout << " et de rayon " << rayon;
}
