#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Give Number of Rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout <<endl;
    }

    return 0;
}