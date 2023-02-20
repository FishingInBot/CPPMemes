
#include "Complex.h"


Complex::Complex (int r, int i)
{
    real = r;
    imag = i;
}

Complex Complex::operator +(Complex & c1)
{
    Complex temp(this->real + c1.real, this->imag + c1.imag);
    return temp;
}

Complex Complex::operator ++()
{
    return Complex(this->real++, this->imag++);;
}

string  Complex::toString(){
	return (to_string(this->real) + " + "  +  to_string(this->imag) + 'i');
}

bool Complex::operator ==(Complex & c1)
{
	return (this->real == c1.real && this->imag == c1.imag);
}

bool Complex::operator !=(Complex & c1)
{
	return (this->real != c1.real || this->imag != c1.imag);
}
