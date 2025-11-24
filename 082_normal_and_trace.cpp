#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;

    cout << "Give Size of Square Matrix (n x n): ";
    cin >> n;

    int A[100][100];

    cout << "Give Elements of the Matrix:" <<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    int trace = 0;
    double normal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                trace += A[i][j];
            }

            normal += A[i][j] * A[i][j];
        }
    }

    normal = sqrt(normal);

    cout << "Trace of the Matrix = " << trace <<endl;
    cout << "Normal of the Matrix = " << normal <<endl;

    return 0;
}