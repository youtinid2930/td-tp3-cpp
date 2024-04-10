#include "contact.h"
#include <iostream>
#include <cstring>

using namespace std;


Contact::Contact(char* n,int a) {
    Num_contact = a;
    Nom_contact = new char [strlen(n)+1];
    strcpy(Nom_contact,n);
    Age_contact = 18;
    Messages_contact = new char [19];
    strcpy(Messages_contact,"Pas de message ...");
}


Contact::~Contact() {
    delete [] Nom_contact;
    delete [] Messages_contact;
}


void Contact::setAge(int a) {
    if(a>=18 && a<=60) {
        Age_contact = a;
    }
    else {
        cout << "Age invalid pour "<<Nom_contact<<", par defaut il va etre 18 ans" << endl;
    }
}

void Contact::setMessage(char*m) {
    delete [] Messages_contact;
    Messages_contact = new char [strlen(m)+1];
    strcpy(Messages_contact,m);
}

void Contact::afficher() const{
    cout << "Numero : " <<Num_contact<< endl << "Nom : " <<Nom_contact<<endl<< "Age : " <<Age_contact<<endl<< "Message : " <<Messages_contact<< endl;
}
