#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char str[500];
    int index;

    cout << "Give a String: ";
    cin.ignore();
    cin.getline(str, 500);
    cout << "Give Index: ";
    cin >> index;

    int len = strlen(str);

    if (index < 0 || index >= len)
    {
        cout << "Invalid index." <<endl;
    }
    else
    {
        unsigned int codePoint = str[index];
        cout << "Character at Index " << index << " = " << str[index] <<endl;
        cout << "Unicode Code Point = " << codePoint <<endl;
    }

    return 0;
}