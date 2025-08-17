#include <iostream>
using namespace std;

int main() {

    char c;
    
    cout << "Enter Character: ";
    cin >> c;

    cout << "You entered the character '" << c << "'."<<endl;
    cout << "The ASCII value of '" << c << "' is: " << int(c) <<endl;

    return 0;
}