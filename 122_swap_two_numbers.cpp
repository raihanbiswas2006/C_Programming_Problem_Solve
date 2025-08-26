#include <iostream>
using namespace std;

int main(){

    int a, b;

    cout << "Give Two Numbers (a and b): ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swapping: " <<endl;
    cout << "a = " << a << ", b = " << b <<endl;

    return 0;
}
