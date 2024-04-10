#ifndef PARALLELEPIPEDE_H
#define PARALLELEPIPEDE_H

#include "rectangle.h"

class Parallelepipede : public Rectangle {
private:
    double hauteur;

public:
    Parallelepipede();
    Parallelepipede(double x, double y, double largeur, double longueur, double hauteur);
    Parallelepipede(const Point &p, double largeur, double longueur, double hauteur);
    Parallelepipede(const Rectangle &r, double hauteur);
    Parallelepipede(const Parallelepipede &);
    ~Parallelepipede();

    double getHauteur() const;
    void setHauteur(double hauteur);
    double volume() const;
    double aireTotale() const;
    void afficher();
};

#endif // PARALLELEPIPEDE_H

