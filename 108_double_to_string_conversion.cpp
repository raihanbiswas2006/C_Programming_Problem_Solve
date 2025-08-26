#include <iostream>
#include <string>
using namespace std;

int main(){

    double num;

    cout << "Give a Double Number: ";
    cin >> num;

    string str = to_string(num);
    cout << "String Value: " << str <<endl;

    return 0;
}