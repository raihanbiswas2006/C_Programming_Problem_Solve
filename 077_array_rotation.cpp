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

    int first = arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = first;

    cout << "Array after left Rotation: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout <<endl;

    return 0;
}