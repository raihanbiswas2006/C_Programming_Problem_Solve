#include <iostream>
using namespace std;

long long factorial(int n){
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(){

    int n;

    cout << "Give a non-negative integer: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." <<endl;
    }
    else
    {
        long long fact = factorial(n);
        cout << "Factorial of " << n << " is: " << fact <<endl;
    }

    return 0;
}