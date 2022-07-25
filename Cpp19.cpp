C++ Program to Calculate Power of a Number

#include <iostream>
using namespace std;

int main() 
{
    int exponent;
    float base, result = 1;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;

    cout << base << "^" << exponent << " = ";

    while (exponent != 0) {
        result *= base;
        --exponent;
    }

    cout << result;
    
    return 0;
}

OUTPUT :


Enter base and exponent respectively:  3.4
5
3.4^5 = 454.354
