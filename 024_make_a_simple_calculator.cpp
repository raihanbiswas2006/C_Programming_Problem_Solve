#include<iostream>
using namespace std;

int main(){

    int a, b;
    char op;
    
    cout << "Example: 3 + 2" <<endl;
    cout << "Example: 3 - 2" <<endl;
    cout << "Example: 3 * 2" <<endl;
    cout << "Example: 3 / 2" <<endl;
    cout << "Enter two Numbers Followed by an Operator (+, -, *, /): ";
    cin >> a >> op >> b;
    
    switch (op)
    {
        case '+':
            cout << a + b <<endl;
            break;
        case '-':
            cout << a - b <<endl;
            break;
        case '*':
            cout << a * b <<endl;
            break;
        case '/':
            cout << a / b <<endl;
            break;
        default:
            cout << "Invalid Operator" <<endl;
    }

    return 0;
}