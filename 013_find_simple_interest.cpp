#include <iostream>
using namespace std;

int main(){

    float principal, rate, time, simpleInterest;

    cout << "Give Principal Amount: ";
    cin >> principal;
    cout << "Give Rate of Interest: ";
    cin >> rate;
    cout << "Give Time in Years: ";
    cin >> time;

    simpleInterest = (principal * rate * time) / 100;

    cout << "Simple Interest is: " << simpleInterest << endl;

    return 0;

}