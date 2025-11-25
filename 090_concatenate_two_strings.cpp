#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char str1[100], str2[100];

    cout << "Give First String: ";
    cin >> str1;
    cout << "Give Second String: ";
    cin >> str2;

    strcat(str1, str2);

    cout << "Concatenated String: " << str1 <<endl;

    return 0;
}