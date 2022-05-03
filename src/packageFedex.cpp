#include "packageFedex.h"

using namespace std;

PackageFedex::PackageFedex(double weight, double distance, double price){
    this->weight = weight;
    this->distance = distance;
    this->price = 0;
};

double PackageFedex::CalculateShipping(){

    int basePrice = 35.00;

    if (distance > 500){
        basePrice+=15.00;
    } 

    if (weight > 10){
        basePrice+=10;
    }
    
    this->price == basePrice;

    return basePrice;
};