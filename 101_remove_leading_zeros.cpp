#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[500];

    cout << "Give a Number: ";
    cin.ignore();
    cin.getline(str, 500);

    int i = 0;

    while (str[i] == '0')
    {
        i++;
    }

    if (str[i] == '\0')
    {
        cout << "0" <<endl;
        return 0;
    }

    cout << (str + i) <<endl;

    return 0;
}