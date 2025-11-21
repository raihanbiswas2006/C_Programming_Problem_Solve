#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double a, b, c;

    cout << "Give Coefficients a, b and c: ";
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "This is not a quadratic equation." <<endl;
        return 0;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." <<endl;
        cout << "Root 1 = " << root1 <<endl;
        cout << "Root 2 = " << root2 <<endl;
    }
    else if (discriminant == 0)
    {
        double root = -b / (2 * a);
        cout << "Roots are real and equal." <<endl;
        cout << "Root = " << root <<endl;
    }
    else
    {
        cout << "Roots are complex and cannot be represented as real numbers." <<endl;
    }

    return 0;
}