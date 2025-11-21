#include <iostream>
using namespace std;

int main(){

    int n, i, j, s, value;

    cout << "Give Number of Rows: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {

        for (s = 0; s < n - i - 1; s++)
            cout << " ";

        value = 1;

        for (j = 0; j <= i; j++)
        {
            cout << value << " ";
            value = value * (i - j) / (j + 1);
        }

        cout <<endl;
    }

    return 0;
}