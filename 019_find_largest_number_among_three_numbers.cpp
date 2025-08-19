#include<iostream>
using namespace std;

int main(){

    int a, b, c;

    cout << "Give Three Numbers: " <<endl;
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "Largest Number is: " << a <<endl;
    } else if (b >= a && b >= c) {
        cout << "Largest Number is: " << b <<endl;
    } else {
        cout << "Largest Number is: " << c <<endl;
    }

    return 0;
}