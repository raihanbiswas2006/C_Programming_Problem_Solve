#include <iostream>
#include <string>

using namespace std;

int main(){

    string hex;
    int decimal = 0;

    cout << "Give a Hexadecimal Number (without 0x): ";
    cin >> hex;

    int length = hex.length();

    for (int i = 0; i < length; i++)
    {
        char digit = hex[i];
        int value = 0;

        if (digit >= '0' && digit <= '9')
        {
            value = digit - '0';
        }
        else if (digit >= 'A' && digit <= 'F')
        {
            value = digit - 'A' + 10;
        }
        else if (digit >= 'a' && digit <= 'f')
        {
            value = digit - 'a' + 10;
        }
        else
        {
            cout << "Invalid Hexadecimal Digit: " << digit <<endl;
            return 1;
        }

        decimal = decimal * 16 + value;
    }

    cout << "Decimal Equivalent: " << decimal <<endl;

    return 0;
}