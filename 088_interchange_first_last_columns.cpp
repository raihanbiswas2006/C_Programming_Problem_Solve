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

    for (int i = 0; i < rows; i++)
    {
        int temp = A[i][0];
        A[i][0] = A[i][cols - 1];
        A[i][cols - 1] = temp;
    }

    cout << "Matrix After interchanging First and Last Elements across Rows:" <<endl;

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