#ifndef PACKAGEFEDEX_H
#define PACKAGEFEDEX_H

#include "package.h"

class PackageFedex : public Package {

    int typeShipping;

    public:
        PackageFedex(double weight, double distance, double price);
        virtual double CalculateShipping();
};

#endif