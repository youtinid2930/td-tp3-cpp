#include <iostream>
#include "distributeur.h"
#include "distributeurmulti.h"

using namespace std;

int main()
{
    // test de class Distributeur
    cout << "test de class Distributeur"<<endl;
    Distributeur dis1;
    for(int i=0;i<5;i++) {
        dis1.ajoutePiece(1);
    }
    dis1.delivreBoisson();
    // test de class DistributeurMulti
    cout << "test de class DistributeurMulti" << endl;
    DistributeurMulti dism1(3);
    for (int i = 0;i<7;i++) {
        dism1.ajoutePiece(1);
    }
    dism1.selection(2);
    dism1.delivreBoisson();
    return 0;
}
