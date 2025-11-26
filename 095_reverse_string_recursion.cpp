#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char str[], int index){

    if (str[index] == '\0')
        return;

    reverseString(str, index + 1);

    cout << str[index];
}

int main(){

    char str[200];

    cout << "Give a String: ";
    cin >> str;
    cout << "Reversed String: ";
    reverseString(str, 0);

    cout <<endl;

    return 0;
}