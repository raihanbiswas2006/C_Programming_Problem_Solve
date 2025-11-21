#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main(){

    int num1, num2;

    cout << "Give two Positive integers: ";
    cin >> num1 >> num2;

    if (num1 <= 0 || num2 <= 0)
    {
        cout << "Please Give Positive integers only." << endl;
    }
    else
    {
        int result = gcd(num1, num2);
        cout << "G.C.D of " << num1 << " and " << num2 << " is: " << result << endl;
    }

    return 0;
}