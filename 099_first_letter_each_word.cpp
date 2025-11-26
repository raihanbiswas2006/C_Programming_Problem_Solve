#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char str[500];

    cout << "Give a Sentence: ";
    cin.ignore();
    cin.getline(str, 500);

    bool newWord = true;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && newWord == true)
        {
            cout << str[i] << " ";
            newWord = false;
        }
        if (str[i] == ' ')
        {
            newWord = true;
        }
    }

    cout <<endl;

    return 0;
}