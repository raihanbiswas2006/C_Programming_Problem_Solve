#include <iostream>
using namespace std;

long long power(long long base, long long exp){
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

int main(){

    long long base, exp;

    cout << "Give Base: ";
    cin >> base;
    cout << "Give Exponent: ";
    cin >> exp;

    long long result = power(base, exp);

    cout << base << "^" << exp << " = " << result <<endl;

    return 0;
}