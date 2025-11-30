#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char str1[200], str2[200];

    cout << "Give First String: ";
    cin.ignore();
    cin.getline(str1, 200);

    cout << "Give Second String: ";
    cin.getline(str2, 200);

    int i = 0, result = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            result = str1[i] - str2[i];
            break;
        }
        i++;
    }

    if (result == 0)
    {
        result = strlen(str1) - strlen(str2);
    }

    if (result == 0)
    {
        cout << "Strings are Equal" <<endl;
    }
    else if (result < 0)
    {
        cout << "First string is Lexicographically Smaller" <<endl;
    }
    else
    {
        cout << "Second string is Lexicographically Smaller" <<endl;
    }

    return 0;
}