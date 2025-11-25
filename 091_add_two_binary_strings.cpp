#include <iostream>
#include <algorithm>
using namespace std;

string addBinary(string a, string b){

    string result = "";
    int carry = 0;

    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';
        if (j >= 0)
            sum += b[j--] - '0';

        result += (sum % 2) + '0';
        carry = sum / 2;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main(){

    string s1, s2;

    cout << "Give First Binary String: ";
    cin >> s1;
    cout << "Give Second Binary String: ";
    cin >> s2;

    string ans = addBinary(s1, s2);

    cout << "Sum of the two Binary Strings = " << ans <<endl;

    return 0;
}