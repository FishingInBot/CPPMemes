#include <iostream>
#include "Building.h"
using namespace std;

//Building's constructor extends CarbonFootprint. Takes squareFeet.
Building::Building(double squareFeet)
        :CarbonFootprint::CarbonFootprint(){
    this->squareFeet = squareFeet;
}

//CarbonFootprint == squareFeet * 134.
void Building::getCarbonFootprint() const {
    cout << "Building with " << squareFeet << " square feet: " << (squareFeet * 134) << endl;
}