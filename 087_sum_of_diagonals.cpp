#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Give Size of Square Matrix (n x n): ";
    cin >> n;

    int A[100][100];

    cout << "Give Matrix Elements:" <<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++)
    {
        primarySum += A[i][i];
        secondarySum += A[i][n - i - 1];
    }

    cout << "Sum of Primary Diagonal = " << primarySum <<endl;
    cout << "Sum of Secondary Diagonal = " << secondarySum <<endl;

    return 0;
}