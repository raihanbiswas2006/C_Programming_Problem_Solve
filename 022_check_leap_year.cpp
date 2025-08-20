#include<iostream>
using namespace std;

int main() {

    int Lyear;

    cout << "Give Any Year: ";
    cin >> Lyear;

    if ((Lyear % 4 == 0 && Lyear % 100 != 0) || (Lyear % 400 == 0)){
        cout << Lyear << " is a Leap Year." <<endl;
    } else {
        cout << Lyear << " is not a Leap Year." <<endl;
    }

    return 0;
}