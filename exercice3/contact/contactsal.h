#ifndef CONTACTSAL_H
#define CONTACTSAL_H
#include "contact.h"
#include <ostream>


class ContactSal : public Contact {
    int matricule;
    float salaire;
    bool bonContact;
public:
    ContactSal(char*n,int a,int m,float s);
    void setbonContact();
    int calculSalaire();
    void afficher() const;
    friend std::ostream& operator<<(std::ostream&,const ContactSal&);
};
#endif // CONTACTSAL_H
