#include<iostream>
using namespace std;

int main(){

    float real_num1, imaginary_num1, real_num2, imaginary_num2;
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real_num1 >> imaginary_num1;
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real_num2 >> imaginary_num2;
    cout << "The sum of the two complex numbers is: " << real_num1 + real_num2 << " + " << imaginary_num1 + imaginary_num2 << "i";

    return 0;
}