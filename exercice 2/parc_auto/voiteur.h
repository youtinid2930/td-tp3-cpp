#ifndef VOITEUR_H
#define VOITEUR_H
#include "vehicule.h"


class Voiteur:public Vehicule {
    int nbrePlace;
    static int nbreVoiteur;
public:
    Voiteur(char*,char*,int,float,int);
    Voiteur(const Voiteur &v);
    void afficher();
    static int getNombreVoiteur();
};
#endif // VOITEUR_H
