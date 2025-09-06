#include <iostream>
using namespace std;

int power(int base, int exp) 
{
    if (exp == 0)
    {
       return 1;
    }
    else
    {
        return base * power(base, exp - 1);
    }
}

int main() 
{
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    return 0;
}
