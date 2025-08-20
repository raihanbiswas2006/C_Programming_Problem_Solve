#include<iostream>
using namespace std;

int main(){

    int n, i, factorial = 1;

    cout << "Give a Positive Number: ";
    cin >> n;

    if (n < 0){
        cout << "Factorial is not a Positive Number." <<endl;
        return 1;
    }

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "Factorial of "<<n<<" is: " << factorial <<endl;

    return 0;
}