#include "Complex.h"

using namespace std;


int main ()
{
    Complex a (1, 2);
    Complex b (3, 4);
    Complex c;
    Complex d (1, 2);
    bool value;

    cout<<a.toString()<<endl;
    cout<<b.toString()<<endl;


    // We have overloaded + so we can add two complex numbers
    c = a + b;
    cout << c.toString() << endl;
    
    ++c;
    cout << c.toString() << endl;

    value = a == b;
    cout << value << endl;

    value = a != b;
    cout << value << endl;

    value = a == d;
    cout << value << endl;

    value = a != d;
    cout << value << endl;
}
