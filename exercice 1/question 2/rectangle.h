#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point.h"

class Rectangle : public Point {
private:
    double largeur;
    double longueur;

public:
    Rectangle();
    Rectangle(double x, double y, double largeur, double longueur);
    Rectangle(const Point &p, double largeur, double longueur);
    Rectangle(const Rectangle &);
    ~Rectangle();

    double getLargeur() const;
    double getLongueur() const;
    void setLargeur(double largeur);
    void setLongueur(double longueur);
    double surface() const;
    double perimetre() const;
    void afficher();
};

#endif // RECTANGLE_H

