#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Give Number of Rows: ";
    cin >> rows;
    cout << "Give Number of Columns: ";
    cin >> cols;

    int arr[100][100];

    cout << "Give Elements of 2D Array:" <<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols - 1; j++)
        {
            for (int k = 0; k < cols - j - 1; k++)
            {

                if (arr[i][k] > arr[i][k + 1])
                {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }

    cout << "2D Array after sorting each Row:" <<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}