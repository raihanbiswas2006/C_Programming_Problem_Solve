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

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maximum)
            maximum = arr[i];

        if (arr[i] < minimum)
            minimum = arr[i];
    }

    cout << "Maximum Element = " << maximum <<endl;
    cout << "Minimum Element = " << minimum <<endl;

    return 0;
}