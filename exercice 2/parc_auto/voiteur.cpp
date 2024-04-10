#include "voiteur.h"
#include <iostream>

using namespace std;

int Voiteur::nbreVoiteur = 0;

Voiteur::Voiteur(char* matricule,char* marque,int anneemodile,float pht,int nbplace): Vehicule(matricule,marque,anneemodile,pht){
    nbrePlace = nbplace;
    nbreVoiteur++;
}

Voiteur::Voiteur(const Voiteur &v): Vehicule(v),nbrePlace(v.nbrePlace) {
    nbreVoiteur++;
}


void Voiteur::afficher() {
    cout << "les informaiton de voiteur :"<<endl<< "Matricule : "<<Matricule<<endl<<"Marque: "<<Marque<<endl<<"Annee de modile : "<<AnneeModile<<endl;
    cout << "Prix HT : "<<PrixHT<<endl<<"Nombre de place : "<<nbrePlace<<endl;
}

int Voiteur::getNombreVoiteur() {return nbreVoiteur;}

