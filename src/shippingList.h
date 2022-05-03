#ifndef SHIPPINGLIST_H
#define SHIPPINGLIST_H

#include "package.h"
#include <vector>

class ShippingList {

    vector<Package *> shipList;

    public:
    ShippingList();
    // ~Planilla();

    void addShipping(Package *p1);
    double getShippingList();

};

#endif