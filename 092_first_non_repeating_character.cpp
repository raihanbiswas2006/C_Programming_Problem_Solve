#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char str[200];
    int freq[256] = {0};

    cout << "Give a String: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    char result = '\0';

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (freq[(unsigned char)str[i]] == 1)
        {
            result = str[i];
            break;
        }
    }

    if (result != '\0')
        cout << "Non-Repeating Character: " << result <<endl;
    else
        cout << "No Non-Repeating Character Found." <<endl;

    return 0;
}