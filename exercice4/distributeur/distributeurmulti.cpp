#include "distributeurmulti.h"
#include <iostream>


using namespace std;

DistributeurMulti::DistributeurMulti():Distributeur(),type(1),typeSelectionner(0){}

DistributeurMulti::DistributeurMulti(int n):Distributeur(),type(n) {}


void DistributeurMulti::selection(int t) {
    if ((t >= 0) &&(t <= type)) {
        typeSelectionner = t;
    }
    else {
        cout << "Erreur de selection "<<endl;
    }
}

void DistributeurMulti::delivreBoisson() {
    if(typeSelectionner == 0) {
        cout << "Selectionner une boisson " << endl;
    }
    else {
        Distributeur::delivreBoisson();
    }
}
