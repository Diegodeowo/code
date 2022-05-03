#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

using namespace std;

class Package {

    protected:
        double weight;
        double distance;
        double price;

    public:
        virtual ~Package();
        virtual double CalculateShipping() = 0;
};

#endif