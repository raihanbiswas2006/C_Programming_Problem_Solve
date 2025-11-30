#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char mainStr[500], insertStr[200], result[700];
    int pos;

    cout << "Give the main string: ";
    cin.ignore();
    cin.getline(mainStr, 500);

    cout << "Give the string to insert: ";
    cin.getline(insertStr, 200);

    cout << "Give the position to insert at: ";
    cin >> pos;

    int len1 = strlen(mainStr);
    int len2 = strlen(insertStr);

    if (pos < 0 || pos > len1)
    {
        cout << "Invalid position!" <<endl;
        return 0;
    }

    int i = 0, k = 0;

    while (i < pos)
    {
        result[k++] = mainStr[i++];
    }

    for (int j = 0; j < len2; j++)
    {
        result[k++] = insertStr[j];
    }

    while (mainStr[i] != '\0')
    {
        result[k++] = mainStr[i++];
    }

    result[k] = '\0';

    cout << "Resultant string: " << result <<endl;

    return 0;
}