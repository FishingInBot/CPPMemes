
#ifndef COMPLEX_H
#define	COMPLEX_H

#include <iostream>
using namespace std;

class Complex {

private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0);
    Complex operator + (Complex & c1);   
    Complex operator ++();
    string toString();
};

#endif	/* COMPLEX_H */

