#include <iostream>
#include "contact.h"
#include "contactsal.h"

using namespace std;

int main()
{
    Contact contact1("hmed bouchgra",60),contact2("moh alioua",50);
    ContactSal contact3("ija benli",45,46,5000),contact4("maju marja",93,74,3000);
    contact1.setAge(19);
    contact2.setAge(43);
    contact3.setAge(53);
    contact4.setAge(63);
    contact1.setMessage("hello, how are you!");
    contact2.setMessage("this is me !");
    contact3.setMessage("what do you think!");
    contact1.afficher();
    contact2.afficher();
    contact3.afficher();
    contact4.afficher();

    return 0;
}
