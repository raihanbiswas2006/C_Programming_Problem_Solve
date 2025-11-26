#include <iostream>
using namespace std;

int main(){

    char str[200];
    int length = 0;

    cout << "Give a String: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    cout << "Length of the String = " << length <<endl;

    return 0;
}