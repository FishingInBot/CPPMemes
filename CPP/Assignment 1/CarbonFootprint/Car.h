//
// Created by murry on 10/4/22.
//

#ifndef C__ASSIGN1_CAR_H
#define C__ASSIGN1_CAR_H

#include "CarbonFootprint.h"

class Car : public CarbonFootprint {
private:
    double gallonsUsed;
public:
    void getCarbonFootprint() const override;
    explicit Car(double gallonsUsed);
    ~Car() = default;
};

#endif //C__ASSIGN1_CAR_H