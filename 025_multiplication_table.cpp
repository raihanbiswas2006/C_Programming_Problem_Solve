#include<iostream>
using namespace std;

int main(){

    int n, i;

    cout << "Give Number For Multiplication Table: ";
    cin >> n;
    cout << "Multiplication Table of " <<n<< " is:" <<endl;

    for (i = 1; i <= 10; i++)
    {
        cout << n << " * " <<i<< " = " << n * i <<endl;
    }

    return 0;
}