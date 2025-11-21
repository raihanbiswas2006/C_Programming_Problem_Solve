#include <iostream>
using namespace std;

bool isPrime(int n){

    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main(){

    int num;

    cout << "Give a Number: ";
    cin >> num;

    bool found = false;

    for (int i = 2; i <= num / 2; i++)
    {
        int j = num - i;
        if (isPrime(i) && isPrime(j))
        {
            cout << num << " can be expressed as the sum of " << i << " and " << j <<endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << num << " cannot be expressed as the sum of two prime numbers." <<endl;

    return 0;
}