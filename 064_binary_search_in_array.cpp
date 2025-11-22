#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){

    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

int main(){

    int n;

    cout << "Give Number of Elements: ";
    cin >> n;

    int arr[100];

    cout << "Give Sorted array Elements:" <<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Give Element to Search: ";
    cin >> target;

    int result = binarySearch(arr, n, target);

    if (result != -1)
        cout << "Element found at index " << result <<endl; //index start from 0
    else
        cout << "Element not found in the array" <<endl;

    return 0;
}