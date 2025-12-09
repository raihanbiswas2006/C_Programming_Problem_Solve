#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char str[500];
    char delimiter;

    cout << "Give a string: ";
    cin.ignore();
    cin.getline(str, 500);
    cout << "Give delimiter character: ";
    cin >> delimiter;
    cout << "Substrings:" << endl;

    int i = 0;

    while (str[i] != '\0')
    {
        while (str[i] != delimiter && str[i] != '\0')
        {
            cout << str[i];
            i++;
        }
        cout << endl;

        if (str[i] == delimiter)
            i++;
    }

    return 0;
}