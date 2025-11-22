#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Give Number of Elements: ";
    cin >> n;

    int arr[100];
    cout << "Give Array Elements:" <<endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    double average = (double)sum / n;

    cout << "Average of Array Elements = " << average <<endl;

    return 0;
}
