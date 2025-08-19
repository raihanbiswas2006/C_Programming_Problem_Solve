#include<iostream>
using namespace std;

int main(){

    int n, sum = 0;

    cout << "Give a Positive Number: ";
    cin >> n;

    if (n < 1) {
        cout << "Please Give a Positive Number." << endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum of First "<<n<<" Natural Numbers is: " << sum <<endl;

    return 0;
}