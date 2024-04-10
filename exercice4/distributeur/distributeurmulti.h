#ifndef DISTRIBUTEURMULTI_H
#define DISTRIBUTEURMULTI_H
#include "distributeur.h"


class DistributeurMulti : public Distributeur {
    int type;
    int typeSelectionner;
public:
    DistributeurMulti();
    DistributeurMulti(int n);
    void selection(int t);
    void delivreBoisson();
};


#endif // DISTRIBUTEURMULTI_H
