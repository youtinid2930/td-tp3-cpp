#include <iostream>
#include "voiteur.h"

using namespace std;

int main()
{
    Vehicule vh1("hd-67d-dh","ronda",2011,50.0);
    Vehicule vh2(vh1);
    Voiteur v1("1234-A-50","Marqx",15000,2007,4);
    Voiteur v2(v1);
    vh1.afficher();
    v2.afficher();
    vh1.setPrixHT(73.43);
    vh1.afficher();
    cout << "le prix TTC est : " <<vh2.getPrixTTC()<<endl;

    cout << "le nombre de voiteur creer est : "<< Voiteur::getNombreVoiteur() << endl;
    return 0;
}
