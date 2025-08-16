#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Give First Number: ";
    cin >> a;
    cout << "Give Second Number: ";
    cin >> b;

    cout << "Before swapping:"<<endl;
    cout << "First Number = " << a << ", Second Number = " << b <<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:"<<endl;
    cout << "First Number = " << a << ", Second Number = " << b <<endl;

    return 0;
}