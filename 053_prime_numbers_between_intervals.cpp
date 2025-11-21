#include <iostream>
using namespace std;

bool isPrime(int n){

    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

void printPrimes(int start, int end){
    cout << "Prime Numbers Between " << start << " and " << end << " are:\n";
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

int main(){

    int a, b;

    cout << "Enter First Number: ";
    cin >> a;

    cout << "Enter Second Number: ";
    cin >> b;

    printPrimes(a, b);

    return 0;
}