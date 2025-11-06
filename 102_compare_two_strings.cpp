#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    char str1[100], str2[100];

    cout << "Enter First String: ";
    cin.getline(str1, 100); 
    cout << "Enter Second String: ";
    cin.getline(str2, 100);
    int result = strcmp(str1, str2);

    if (result == 0) {
        cout << "The Strings are Equal." <<endl;
    } else if (result < 0) {
        cout << "The First String is Lexicographically Smaller than the second String." <<endl;
    } else {
        cout << "The First String is Lexicographically Greater than the second String." <<endl;
    }

    return 0;
}