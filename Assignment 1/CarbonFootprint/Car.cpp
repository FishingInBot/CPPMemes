#include <iostream>
#include "Car.h"
using namespace std;

//Car constructor extends CarbonFootprint. Takes gallons used.
Car::Car(double gallonsUsed) : CarbonFootprint(){
    this->gallonsUsed = gallonsUsed;
}

//CarbonFootprint is gallonsUsed * 20.
void Car::getCarbonFootprint() const {
    cout << "Car that used " << gallonsUsed << " gallons of gas: " << (gallonsUsed * 20) << endl;
}