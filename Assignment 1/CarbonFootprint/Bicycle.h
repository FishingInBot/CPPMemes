#ifndef C__ASSIGN1_BICYCLE_H
#define C__ASSIGN1_BICYCLE_H

#include "CarbonFootprint.h"

class Bicycle : public CarbonFootprint {
private:
public:
    void getCarbonFootprint() const override;
    Bicycle();
    ~Bicycle() override = default;
};

#endif //C__ASSIGN1_BICYCLE_H
