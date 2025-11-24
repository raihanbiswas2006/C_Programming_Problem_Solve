#include <iostream>
using namespace std;

int main(){

    int rows, cols;

    cout << "Give Number of Rows: ";
    cin >> rows;
    cout << "Give Number of Columns: ";
    cin >> cols;

    int A[100][100], B[100][100];

    cout << "Give Elements of Matrix A:" <<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Give Elements of Matrix B:" <<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> B[i][j];
        }
    }

    bool equal = true;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (A[i][j] != B[i][j])
            {
                equal = false;
                break;
            }
        }
        if (!equal)
            break;
    }

    if (equal)
        cout << "Matrices are Equal" <<endl;
    else
        cout << "Matrices are NOT Equal" <<endl;

    return 0;
}