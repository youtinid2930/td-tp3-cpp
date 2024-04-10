#include "distributeur.h"
#include <iostream>

using namespace std;


Distributeur::Distributeur() {
    sommeArgent = 0;
}


void Distributeur::ajoutePiece(float x) {
    if (x > 0) {
        sommeArgent = sommeArgent+x;
    }
}


void Distributeur::delivreBoisson() {
    if (sommeArgent < 5){
        cout << "Pas assez" << endl;
    }
    else if (sommeArgent == 5) {
        cout << "Voila" << endl;
    }
    else {
        cout << "Voila , le montant d'argent qui est rendu est "<<sommeArgent-5 <<"DH"<< endl;
    }
}
