#include "packagePostal.h"


PackagePostal::PackagePostal(int category, double weight, double distance, double price){
    this->category = category;
    this->weight = weight;
    this->distance = distance;
    this->price = 0;
}

double PackagePostal::CalculateShipping(){

    double priceTemp = 0;

    switch (this->category)
    {
    case 1:
        if (this->weight >= 9){
            priceTemp+=0.600*this->distance;
        } else {
            if (this->weight > 0 && this->weight <= 3){
            priceTemp+= 0.300*this->distance;
        } else {
            if (this->weight>=4 && this->weight <=8){
                priceTemp+= 0.450*this->distance;
            }
        }
        }
        break;
    case 2:
        if (this->weight >= 9){
            priceTemp+=0.0750*this->distance;
        } else {
            if (this->weight > 0 && this->weight <= 3){
            priceTemp+= 0.0280*this->distance;
        } else {
            if (this->weight>=4 && this->weight <=8){
                priceTemp+= 0.0530*this->distance;
            }
        }
        }

        break;
    case 3:
        priceTemp+= 0.0120*distance;
        break;
    }

    this->price == priceTemp;
    return priceTemp;
}