#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int octal, digit, decimal = 0, i = 0;
    cout << "Give an octal Value: ";
    cin >> octal;

    while (octal != 0)
    {
        digit = octal % 10;
        decimal += digit * pow(8, i);
        ++i;
        octal /= 10;
    }

    cout << "Decimal Value = " << decimal <<endl;
    return 0;
}
