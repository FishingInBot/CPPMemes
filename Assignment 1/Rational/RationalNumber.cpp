#include "RationalNumber.h"

using namespace std;

//RationalNumber constructor uses numer for the numerator and denom for the denominator. If the denominator == 0, it uses 1.
RationalNumber::RationalNumber(int numer, int denom) {
    this->numer = numer;
    if(denom!=0) {
        this->denom = denom;
    } else{
        this->denom = 1;
    }
}

//overloading + operator. Does not account for reducable fractions.
RationalNumber RationalNumber::operator+ (RationalNumber & RN1){
    if(this->denom == RN1.denom){
        return RationalNumber(this->numer + RN1.numer, RN1.denom);
    }else {
        return RationalNumber((this->numer * RN1.denom) + (RN1.numer * this->denom), (this->denom * RN1.denom));
    }
}

//overloading - operator. Does not account for reducable fractions.
RationalNumber RationalNumber::operator- (RationalNumber &RN1) {
    if(this->denom == RN1.denom){
        return RationalNumber(this->numer - RN1.numer, RN1.denom);
    }else {
        return RationalNumber((this->numer * RN1.denom)-(RN1.numer * this->denom),(this->denom * RN1.denom));}
}

//overloading * operator. Does not account for reducable fractions.
RationalNumber RationalNumber::operator* (RationalNumber &RN1) {
    return RationalNumber((this->numer * RN1.numer), (this->denom * RN1.denom));
}

//overloading / operator. Does not account for reducable fractions.
RationalNumber RationalNumber::operator/ (RationalNumber &RN1) {
    RationalNumber temp = RationalNumber(RN1.denom, RN1.numer);
    return (*this * temp);
}

//overloading == operator. Does not account for reducable fractions.
bool RationalNumber::operator==(RationalNumber &RN1) const {
    return(this->numer == RN1.numer && this->denom == RN1.denom);
}

//overloading != operator. Does not account for reducable fractions.
bool RationalNumber::operator!=(RationalNumber &RN1) const {
    return !(this->numer == RN1.numer && this->denom == RN1.denom);
}

//RationalNumber's toString()
string RationalNumber::toString() const {
    return (to_string(this->numer) + "/"  +  to_string(this->denom));
}