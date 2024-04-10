#include "vehicule.h"
#include <iostream>
#include <cstring>


using namespace std;


Vehicule::Vehicule(char* matricule,char* marque,int anneemodele,float pht) {
    Matricule = new char [strlen(matricule)+1];
    strcpy(Matricule,matricule);
    Marque = new char [strlen(marque)+1];
    strcpy(Marque,marque);
    AnneeModile = anneemodele;;
    PrixHT = pht;
}

Vehicule::Vehicule(const Vehicule &p) {
    this->Matricule = new char [strlen(p.Matricule)+1];
    strcpy(this->Matricule,p.Matricule);
    this->Marque = new char [strlen(p.Marque)+1];
    strcpy(this->Marque,p.Marque);
    this->AnneeModile = p.AnneeModile;
    this->PrixHT = p.PrixHT;
}

Vehicule::~Vehicule() {
    delete [] Matricule;
    delete [] Marque;
}

void Vehicule::afficher() {
    cout<< "vehicule de matricule "<<Matricule<<" de marque "<<Marque<<" dont l'annee de modele est "<<AnneeModile<<" avec un prix HT est "<<PrixHT<<endl;
}

void Vehicule::setPrixHT(float p) {
    PrixHT = p;
}

float Vehicule::getPrixTTC() {
    return PrixHT*1.2;
}
