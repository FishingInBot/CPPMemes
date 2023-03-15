#ifndef C__ASSIGN1_RATIONALNUMBER_H
#define C__ASSIGN1_RATIONALNUMBER_H

#include <iostream>

class RationalNumber {
private:
    int numer, denom;

public:
    explicit RationalNumber(int numer = 0, int denom = 0);
    RationalNumber operator + (RationalNumber & RN1);
    RationalNumber operator - (RationalNumber & RN1);
    RationalNumber operator * (RationalNumber & RN1);
    RationalNumber operator / (RationalNumber & RN1);

    bool operator == (RationalNumber & RN1) const;
    bool operator != (RationalNumber & RN1) const;

    std::string toString() const;

    ~RationalNumber() = default;
};

#endif //C__ASSIGN1_RATIONALNUMBER_H
