#include <iostream>
using namespace std;

int main(){

    int f, c;

    cout << "Give Temperature in Fahrenheit: ";
    cin >> f;

    c = (f - 32) * 5.0 / 9.0;

    cout << "Celsius = " << c;

    return 0;
}