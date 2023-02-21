#include "Bicycle.h"
#include "iostream"
using namespace std;

//Bicycle's constructor that uses CarbonFootprint's constructor.
Bicycle::Bicycle() : CarbonFootprint(){
}

//CarbonFootprint always == 0.
void Bicycle::getCarbonFootprint() const {
     cout << "Bicycle: 0\n";
}