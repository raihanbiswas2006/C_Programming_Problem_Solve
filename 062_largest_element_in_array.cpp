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

    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest Element = " << largest <<endl;

    return 0;
}