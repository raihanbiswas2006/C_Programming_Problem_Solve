#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Give Number of Terms: ";
    cin >> n;

    long long first = 0, second = 1, next;
    long long sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            next = first;
        else if (i == 2)
            next = second;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }

        if (i % 2 == 0)
            sum += next;
    }

    cout << "Sum of Fibonacci Numbers at Even Indexes = " << sum <<endl;

    return 0;
}