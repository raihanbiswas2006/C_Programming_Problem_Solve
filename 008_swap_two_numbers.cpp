#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Give First Number: ";
    cin >> a;
    cout << "Give Second Number: ";
    cin >> b;

    cout << "Before swapping:"<<endl;
    cout << "First Number = " << a << ", Second Number = " << b <<endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping:"<<endl;
    cout << "First Number = " << a << ", Second Number = " << b <<endl;

    return 0;
}