#include "shippingList.h"

ShippingList::ShippingList() {

}

void ShippingList::addShipping(Package *p1) {
    this->shipList.push_back(p1);
}

double ShippingList::getShippingList() {
    double totalShippingList = 0;

    for (Package* p1 : this->shipList)
    {
        totalShippingList += p1->CalculateShipping();
    }

    return totalShippingList;
}