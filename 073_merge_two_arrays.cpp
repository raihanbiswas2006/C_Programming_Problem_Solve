#include <iostream>
using namespace std;

int main(){

    int n1, n2;

    cout << "Give Size of First Array: ";
    cin >> n1;

    int arr1[100];

    cout << "Give Elements of First Array:" <<endl;

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Give Size of Second Array: ";
    cin >> n2;

    int arr2[100];

    cout << "Give Elements of Second Array:" <<endl;

    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int merged[200];
    int index = 0;

    for (int i = 0; i < n1; i++)
    {
        merged[index++] = arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        merged[index++] = arr2[i];
    }

    cout << "Merged Array: ";

    for (int i = 0; i < index; i++)
    {
        cout << merged[i] << " ";
    }

    cout <<endl;

    return 0;
}