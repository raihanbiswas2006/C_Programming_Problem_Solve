#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    double principal, rate, time, compoundInterest, amount;

    cout << "Give Principal Amount: ";
    cin >> principal;

    cout << "Give Rate of Interest: ";
    cin >> rate;

    cout << "Give Time in Years: ";
    cin >> time;

    cout << "Give Number of Times Interest is Compounded per Year: ";
    cin >> n;

    rate = rate / 100;
    amount = principal * pow(1 + rate / n, n * time);
    compoundInterest = amount - principal;

    cout << "Compound Interest = " << compoundInterest <<endl;
    cout << "Total Amount = " << amount <<endl;

    return 0;
}