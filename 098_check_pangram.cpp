#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char str[500];
    bool present[26] = {false};

    cout << "Give a String: ";
    cin.ignore();
    cin.getline(str, 500);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z')
        {
            present[ch - 'a'] = true;
        }
    }

    bool isPangram = true;

    for (int i = 0; i < 26; i++)
    {
        if (!present[i])
        {
            isPangram = false;
            break;
        }
    }

    if (isPangram)
        cout << "The String is a Pangram" <<endl;
    else
        cout << "The String is NOT a Pangram" <<endl;

    return 0;
}