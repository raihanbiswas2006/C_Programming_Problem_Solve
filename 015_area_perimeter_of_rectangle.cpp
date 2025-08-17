#include<iostream>
using namespace std;

int main(){

    float length, width, area, perimeter;

    cout << "Give Length: ";
    cin >> length;
    cout << "Give Width: ";
    cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "Area of the Rectangle: " << area <<endl;
    cout << "Perimeter of the Rectangle: " << perimeter <<endl;

    return 0;
}