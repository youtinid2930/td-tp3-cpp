#ifndef CONTACT_H
#define CONTACT_H


class Contact {
protected:
    int Num_contact;
    char *Nom_contact;
    int Age_contact;
    char *Messages_contact;
public:
    static int compteur;
    Contact(char*n,int a);
    ~Contact();
    void setAge(int a);
    void setMessage(char *m);
    virtual void afficher() const;
};
#endif // CONTACT_H
