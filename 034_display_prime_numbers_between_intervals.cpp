#include <iostream>
using namespace std;

int main(){

    int low, high;

    cout << "Give two Numbers: ";
    cin >> low >> high;

    cout << "Prime Numbers Between " << low << " and " << high << " are: ";

    for (int num = low; num <= high; num++)
    {
        bool isPrime = true;

        if (num <= 1)
        {
            continue;
        }

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " ";
    }

    return 0;
}