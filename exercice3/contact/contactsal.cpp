#include "contactsal.h"
#include <iostream>


using namespace std;


ContactSal::ContactSal(char* n, int a, int m, float s):Contact(n,a) {
    matricule = m;
    salaire = s;
    bonContact = false;
}


void ContactSal::setbonContact(){
    bonContact = true;
}

int ContactSal::calculSalaire() {
    if(bonContact) {
        return salaire+salaire*0.1;
    }
    else {
        return salaire;
    }
}


void ContactSal::afficher() const{
    Contact::afficher();
    cout << "Matricule : "<<matricule<<endl<<"Salaire :"<<salaire<<endl<<"Est un bon contact : ";
    if(bonContact) {
        cout << "oui"<<endl;
    }
    else {
        cout << "non" <<endl;
    }
}


ostream& operator<<(ostream& os, const ContactSal &contact) {
    contact.afficher();
    return os;
}

