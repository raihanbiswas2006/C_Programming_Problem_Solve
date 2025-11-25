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

    cout << "Boundary Elements of the Matrix:" <<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
                cout << A[i][j] << " ";
            else
                cout << "  ";
        }
        cout <<endl;
    }

    return 0;
}