#include <iostream>
using namespace std;

int main(){

    int a[2][2];

    cout << "Enter elements of 2x2 matrix:" <<endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }

    int determinant = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);

    cout << "Determinant of the matrix = " << determinant <<endl;

    return 0;
}