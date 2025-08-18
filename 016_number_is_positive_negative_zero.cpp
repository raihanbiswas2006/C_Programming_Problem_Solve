#include<iostream>
using namespace std;
int main(){

    int num;
    
    cout << "Give a Number: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive" <<endl;
    } else if (num < 0) {
        cout << "Negative" <<endl;
    } else {
        cout << "Zero" <<endl;
    }

    return 0;
}