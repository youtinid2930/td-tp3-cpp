#include "parallelepipede.h"
#include <iostream>

Parallelepipede::Parallelepipede() : Rectangle(), hauteur(0.0) {}

Parallelepipede::Parallelepipede(double x, double y, double largeur, double longueur, double hauteur) : Rectangle(x, y, largeur, longueur), hauteur(hauteur) {}

Parallelepipede::Parallelepipede(const Point &p, double largeur, double longueur, double hauteur) : Rectangle(p, largeur, longueur), hauteur(hauteur) {}

Parallelepipede::Parallelepipede(const Rectangle &r, double hauteur) : Rectangle(r), hauteur(hauteur) {}

Parallelepipede::Parallelepipede(const Parallelepipede &p) : Rectangle(p), hauteur(p.hauteur) {}

Parallelepipede::~Parallelepipede() {}

double Parallelepipede::getHauteur() const { return hauteur; }

void Parallelepipede::setHauteur(double hauteur) { this->hauteur = hauteur; }

double Parallelepipede::volume() const { return Rectangle::surface() * hauteur; }

double Parallelepipede::aireTotale() const { return 2 * (Rectangle::surface() + getLargeur() * hauteur + getLongueur() * hauteur); }

void Parallelepipede::afficher(){
    std::cout << "Parallelepipede de coin superieur gauche ";
    Point::afficher();
    std::cout << ", largeur " << getLargeur() << ", longueur " << getLongueur() << ", hauteur " << hauteur;
}

