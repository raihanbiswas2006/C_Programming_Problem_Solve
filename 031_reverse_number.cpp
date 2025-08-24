#include <iostream>
using namespace std;

int main(){

    int num, digit, rev = 0;

    cout << "Give Number: ";
    cin >> num;

    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    cout << "Reversed Number = " << rev;

    return 0;
}