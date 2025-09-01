#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int decimal, octal[32], i = 0, j;

    cout << "Give a Decimal Value: ";
    cin >> decimal;

    while (decimal != 0)
    {
        octal[i++] = decimal % 8;
        decimal /= 8;
    }

    cout << "Octal Value = ";

    for (j = i - 1; j >= 0; j--)
        cout << octal[j];
    cout <<endl;

    return 0;
}
