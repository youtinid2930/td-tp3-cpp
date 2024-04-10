#include "point.h"
#include <iostream>

using namespace std;

Point::Point() : x(0.0), y(0.0) {}

Point::Point(double x, double y) : x(x), y(y) {}

Point::Point(const Point &p) : x(p.x), y(p.y) {}

Point::~Point() {}

double Point::getX() const { return x; }

double Point::getY() const { return y; }

void Point::setX(double x) { this->x = x; }

void Point::setY(double y) { this->y = y; }

void Point::deplacer(double dx, double dy) { x += dx; y += dy; }

void Point::afficher() { cout << "(" << x << ", " << y << ")"; }
