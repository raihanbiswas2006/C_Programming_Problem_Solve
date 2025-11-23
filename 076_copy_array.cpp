#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Give Number of Elements: ";
    cin >> n;

    int source[100], dest[100];

    cout << "Give Elements of source Array:" <<endl;

    for (int i = 0; i < n; i++)
    {
        cin >> source[i];
    }

    for (int i = 0; i < n; i++)
    {
        dest[i] = source[i];
    }

    cout << "Elements Copied to Destination Array:" <<endl;

    for (int i = 0; i < n; i++)
    {
        cout << dest[i] << " ";
    }
    cout <<endl;

    return 0;
}