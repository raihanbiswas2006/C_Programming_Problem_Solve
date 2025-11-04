#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Give a Natural Number: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please Give a Positive integer." <<endl;
        return 0;
    }

    cout << "The Factors of " << n << " are: ";

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    cout <<endl;

    return 0;
}