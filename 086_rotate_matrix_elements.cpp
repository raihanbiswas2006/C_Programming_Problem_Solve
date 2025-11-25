#include <iostream>
using namespace std;

int main(){

    int rows, cols;

    cout << "Give Number of Rows: ";
    cin >> rows;
    cout << "Give Number of Columns: ";
    cin >> cols;

    int A[100][100];

    cout << "Give Matrix Rlements:" <<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }

    if (rows < 2 || cols < 2)
    {
        cout << "Rotation not Possible for Small Matrix." <<endl;
        return 0;
    }

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    int temp = A[top][left];

    for (int i = top; i < bottom; i++)
        A[i][left] = A[i + 1][left];

    for (int i = left; i < right; i++)
        A[bottom][i] = A[bottom][i + 1];

    for (int i = bottom; i > top; i--)
        A[i][right] = A[i - 1][right];

    for (int i = right; i > left + 1; i--)
        A[top][i] = A[top][i - 1];

    A[top][left + 1] = temp;

    cout << "Matrix After Clockwise Rotation:" <<endl;
    
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