#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n){
    if (n == 1)
        return 1;
    else
        return n + sumOfNaturalNumbers(n - 1);
}

int main(){

    int n;

    cout << "Give a Positive integer: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please Give a Positive integer." <<endl;
    }
    else
    {
        int sum = sumOfNaturalNumbers(n);
        cout << "The sum of first " << n << " natural numbers is: " << sum <<endl;
    }

    return 0;
}