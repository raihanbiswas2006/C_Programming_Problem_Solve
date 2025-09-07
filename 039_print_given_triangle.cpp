#include <iostream>
using namespace std;

int main(){

    int rows;

    cout << "Give the Number of ROWs for the Triangle: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "# ";
        }
        cout << endl;
    }

    return 0;
}