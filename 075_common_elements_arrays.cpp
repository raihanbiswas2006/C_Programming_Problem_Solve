#include <iostream>
using namespace std;

int main(){

    int n1, n2;

    cout << "Give size of First Array: ";
    cin >> n1;

    int arr1[100];

    cout << "Give Elements of First Array:" <<endl;

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Give size of Second Array: ";
    cin >> n2;

    int arr2[100];

    cout << "Give Elements of Second Array:" <<endl;

    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << "Common Elements: ";

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    cout <<endl;

    return 0;
}