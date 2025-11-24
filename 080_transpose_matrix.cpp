#include <iostream>
using namespace std;

int main(){

    int rows, cols;

    cout << "Give Number of Rows: ";
    cin >> rows;
    cout << "Give Number of Columns: ";
    cin >> cols;

    int A[100][100], T[100][100];

    cout << "Give Elements of the Matrix:" <<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            T[j][i] = A[i][j];
        }
    }

    cout << "Transpose of the Matrix:" <<endl;

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << T[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}