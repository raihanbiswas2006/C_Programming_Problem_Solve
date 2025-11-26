#include <iostream>
#include <cstring>
using namespace std;

int main(){

    int choice;

    cout << "1. Reverse Array\n2. Reverse String\nGive your Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int n;
        cout << "Give Number of Elements: ";
        cin >> n;

        int arr[100];

        cout << "Give Array Elements:" <<endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int left = 0, right = n - 1;

        while (left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }

        cout << "Reversed Array: ";

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout <<endl;
    }
    else if (choice == 2)
    {
        char str[200];

        cout << "Give a String: ";
        cin >> str;

        int left = 0;
        int right = strlen(str) - 1;

        while (left < right)
        {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;

            left++;
            right--;
        }

        cout << "Reversed String = " << str <<endl;
    }
    else
    {
        cout << "Invalid Choice!" <<endl;
    }

    return 0;
}