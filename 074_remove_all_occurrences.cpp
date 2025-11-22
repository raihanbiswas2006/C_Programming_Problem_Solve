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

    int target;

    cout << "Give Element to Remove: ";
    cin >> target;

    int newArr[100];
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != target)
        {
            newArr[index++] = arr[i];
        }
    }

    cout << "Array after Removing all Occurrences of " << target << ": ";

    for (int i = 0; i < index; i++)
    {
        cout << newArr[i] << " ";
    }

    cout <<endl;

    return 0;
}