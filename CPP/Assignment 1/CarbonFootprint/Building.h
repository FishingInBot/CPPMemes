#ifndef C__ASSIGN1_BUILDING_H
#define C__ASSIGN1_BUILDING_H

#include "CarbonFootprint.h"

class Building : public CarbonFootprint {
private:
    double squareFeet;
public:
    void getCarbonFootprint() const override;
    explicit Building(double squareFeet);
    ~Building() = default;
};

#endif //C__ASSIGN1_BUILDING_H
