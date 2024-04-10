#ifndef CERCLE_H
#define CERCLE_H

#include "point.h"

class Cercle : public Point {
private:
    double rayon;

public:
    Cercle();
    Cercle(double r);
    Cercle(Point p, double r);
    Cercle(const Cercle &);
    double getRayon() const;
    void setRayon(double r);
    void setCenter(Point p);
    double surface() const;
    double perimetre() const;
    bool estInterieur(Point p);
    void afficher();
};

#endif // CERCLE_H
