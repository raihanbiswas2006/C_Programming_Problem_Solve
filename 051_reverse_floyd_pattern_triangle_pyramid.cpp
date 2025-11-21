#include <iostream>
using namespace std;

int main(){

    int n, total, num;

    cout << "Give Number of Rows: ";
    cin >> n;

    total = n * (n + 1) / 2;

    num = total;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }

    return 0;
}