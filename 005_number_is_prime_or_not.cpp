#include <iostream>
using namespace std;

int main() {

    int num, i;
    cout << "Enter Positive Number: ";
    cin >> num;

    if (num <= 1) {
        cout << "Not prime."<<endl;
        return 0;
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            cout << "Not prime."<<endl;
            return 0;
        }
    }

    cout << "Prime number."<<endl;

    return 0;
}