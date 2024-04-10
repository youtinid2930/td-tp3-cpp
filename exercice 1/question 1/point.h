#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;

public:
    Point();
    Point(double x, double y);
    Point(const Point &);
    ~Point();

    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
    void deplacer(double dx, double dy);
    void afficher();
};

#endif // POINT_H
