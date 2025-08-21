#include<iostream>
using namespace std;

int main(){

    int n, i;

    cout << "Give the terms of the Fibonacci series: ";
    cin >> n;
    cout <<endl;
    int a = 0, b = 1, c;

    c = a + b;

    cout << "Fibonacci Series: " <<endl ;
    for (i = 1; i <= n; i++)
    {
        cout <<a<< " " <<endl;
        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}