#include<iostream>
using namespace std;

int main(){

    char chrt;

    cout << "Give a Character: ";
    cin >> chrt;

    if (chrt == 'a' || chrt == 'e' || chrt == 'i' || chrt == 'o' || chrt == 'u' ||
        chrt == 'A' || chrt == 'E' || chrt == 'I' || chrt == 'O' || chrt == 'U')
    {
        cout << "Vowel" <<endl;
    }
    else if ((chrt >= 'a' && chrt <= 'z') || (chrt >= 'A' && chrt <= 'Z'))
    {
        cout << "Consonant" <<endl;
    }
    else
    {
        cout << "Not a Character." <<endl;
    }

    return 0;
}