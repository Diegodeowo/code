#ifndef PACKAGEPOSTAL_H
#define PACKAGEPOSTAL_H

#include "package.h"

class PackagePostal: public Package {
    int category;

    public: 
        PackagePostal(int category, double weight, double distance, double price);
        virtual double CalculateShipping();
};

#endif