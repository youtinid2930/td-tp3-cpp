#include "rectangle.h"
#include <cmath>
#include <iostream>

Rectangle::Rectangle() : Point(), largeur(0.0), longueur(0.0) {}

Rectangle::Rectangle(double x, double y, double largeur, double longueur) : Point(x, y), largeur(largeur), longueur(longueur) {}

Rectangle::Rectangle(const Point &p, double largeur, double longueur) : Point(p), largeur(largeur), longueur(longueur) {}

Rectangle::Rectangle(const Rectangle &r) : Point(r), largeur(r.largeur), longueur(r.longueur) {}

Rectangle::~Rectangle() {}

double Rectangle::getLargeur() const { return largeur; }

double Rectangle::getLongueur() const { return longueur; }

void Rectangle::setLargeur(double largeur) { this->largeur = largeur; }

void Rectangle::setLongueur(double longueur) { this->longueur = longueur; }

double Rectangle::surface() const { return largeur * longueur; }

double Rectangle::perimetre() const { return 2 * (largeur + longueur); }

void Rectangle::afficher() {
    std::cout << "Rectangle de coin superieur gauche ";
    Point::afficher();
    std::cout << ", largeur " << largeur << ", longueur " << longueur;
}

