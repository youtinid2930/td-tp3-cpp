#ifndef VEHICULE_H
#define VEHICULE_H

class Vehicule {
protected:
    char *Matricule;
    char *Marque;
    int AnneeModile;
    float PrixHT;
public:
    Vehicule(char*,char*,int,float);
    Vehicule(const Vehicule &v);
    ~Vehicule();
    virtual void afficher();
    void setPrixHT(float p); // modifier prixHT
    float getPrixTTC(); // returne PrixHT*1.2
};
#endif // VEHICULE_H
