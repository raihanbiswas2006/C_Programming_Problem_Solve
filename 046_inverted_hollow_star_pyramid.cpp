#include <iostream>
using namespace std;

int main(){

    int n, i, s, j, total;

    cout << "Give Number of Rows: ";
    cin >> n;

    for (i = n; i >= 1; i--)
    {

        for (s = 1; s <= n - i; s++)
        {
            cout << " ";
        }

        total = 2 * i - 1;

        for (j = 1; j <= total; j++)
        {
            if (i == n || j == 1 || j == total)
                cout << "*";
            else
                cout << " ";
        }

        cout <<endl;
    }

    return 0;
}