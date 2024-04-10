#ifndef DISTRIBUTEUR_H
#define DISTRIBUTEUR_H


class Distributeur {
protected:
    int sommeArgent;
public:
    Distributeur();
    void ajoutePiece(float x);
    virtual void delivreBoisson();
};
#endif // DISTRIBUTEUR_H
