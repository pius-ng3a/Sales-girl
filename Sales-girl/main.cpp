/* 
 * File:   main.cpp
 * Author: n4sjr
 *
 * Created on January 5, 2015, 11:42 AM
 */

#include <cstdlib>
#include <iostream>
#include "SalesLady.h"
using namespace std;

int main(int argc, char** argv) {
    
    SalesLady sl;//creating the object of the class
    sl.getSalesFromUser();
    sl.printAnnualSales();//this function only prints when running in debug mode. how can this be fixed?
    return 0;
}

