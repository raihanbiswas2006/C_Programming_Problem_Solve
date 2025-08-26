#include <iostream>
#include <string>
using namespace std;

int main(){

    float num;

    cout << "Give a Float Number: ";
    cin >> num;

    string str = to_string(num);
    cout << "String Value: " << str <<endl;

    return 0;
}