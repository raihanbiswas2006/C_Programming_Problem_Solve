#include<iostream>
using namespace std;

int main(){

    int n, i, j;

    cin >> n;

    for (i = 2; i <= n; i++)
    {
        bool prime = true;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
        {
            cout << i << " "<<endl;
        }
    }

    return 0;
}
