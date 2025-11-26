#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char s[200];

    cout << "Give a String: ";
    cin >> s;

    int left = 0;
    int right = strlen(s) - 1;

    bool isPalindrome = true;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome){
        cout << "The String is a Palindrome" <<endl;}
    else{
        cout << "The String is NOT a Palindrome" <<endl;}

    return 0;
}