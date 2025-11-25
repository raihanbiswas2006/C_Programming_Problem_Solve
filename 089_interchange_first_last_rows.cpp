#include <iostream>
using namespace std;

int main(){

    int rows, cols;

    cout << "Give Number of Rows: ";
    cin >> rows;
    cout << "Give Number of Columns: ";
    cin >> cols;

    int A[100][100];

    cout << "Give Matrix Elements:" <<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int j = 0; j < cols; j++)
    {
        int temp = A[0][j];
        A[0][j] = A[rows - 1][j];
        A[rows - 1][j] = temp;
    }

    cout << "Matrix after interchanging First and Last Rows:" <<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << A[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}