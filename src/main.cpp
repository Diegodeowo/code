/*
 ***********************************************
 * 
 * College: Universidad de Costa Rica
 * 
 * Student: Juan Diego Soto Castro - C07722
 * 
 * E-Mail: juan.sotocastro@ucr.ac.cr
 * 
 * Github: Diegodeowo
 * 
 ***********************************************
*/

#include <iostream>
#include <vector>
#include "package.h"
#include "packageFedex.h"
#include "packagePostal.h"
#include "shippingList.h"

int main(){

  ShippingList *list = new ShippingList();

  PackageFedex* p1 = new PackageFedex(11,501,0); // (double: weight, distance, price)
  list->addShipping(p1);


  PackagePostal* p2 = new PackagePostal(2,2,300,0); //(int category, double : weight, distance, price)
  list->addShipping(p2);


  double fullShippingList = list->getShippingList();
  std::cout << "Total amount of the shipping list: " << fullShippingList << std::endl;

  return 0;
}