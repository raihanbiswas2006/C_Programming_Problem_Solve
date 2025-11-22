#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Give Number of Elements: ";
    cin >> n;

    int arr[100];

    cout << "Give Sorted Array Elements:" <<endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 0 || n == 1)
    {
        cout << "Array after Removing Duplicates: ";

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout <<endl;
        return 0;
    }

    int j = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j++] = arr[i];
        }
    }

    arr[j++] = arr[n - 1];

    cout << "Array after Removing Duplicates: ";

    for (int i = 0; i < j; i++)
    {
        cout << arr[i] << " ";
    }

    cout <<endl;

    return 0;
}