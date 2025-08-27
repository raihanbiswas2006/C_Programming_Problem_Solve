#include <iostream>
using namespace std;

int main(){

    int dividend, divisor, quotient, remainder;

    cout << "Give Dividend: ";
    cin >> dividend;
    cout << "Give Divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient <<endl;
    cout << "Remainder = " << remainder <<endl;

    return 0;
}