#include <iostream>
#include <cstring>
using namespace std;

int main(){

    int val;

    cout << "Give boolean value (0 for false, 1 for true): ";
    cin >> val;

    bool b = (val == 1);

    char strTrue[] = "true";
    char strFalse[] = "false";

    if (b)
        cout << "String form = " << strTrue << endl;
    else
        cout << "String form = " << strFalse << endl;

    return 0;
}