//
// Created by murry on 10/4/22.
//

#ifndef C__ASSIGN1_CARBONFOOTPRINT_H
#define C__ASSIGN1_CARBONFOOTPRINT_H

class CarbonFootprint{
public:
    virtual void getCarbonFootprint() const = 0;
    CarbonFootprint();
    virtual ~CarbonFootprint() = default;
};

#endif //C__ASSIGN1_CARBONFOOTPRINT_H
