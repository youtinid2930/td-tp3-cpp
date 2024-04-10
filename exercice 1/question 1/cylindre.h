#ifndef CYLINDRE_H
#define CYLINDRE_H

#include "cercle.h"

class Cylindre : public Cercle {
private:
    double hauteur;

public:
    Cylindre();
    Cylindre(double r, double h);
    Cylindre(Point p, double r, double h);
    Cylindre(const Cylindre &);
    double getHauteur() const;
    void setHauteur(double h);
    double surface() const;
    double volume() const;
    void afficher();
};

#endif // CYLINDRE_H

