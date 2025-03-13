#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) 
            return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (isPalindrome(str))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;
    return 0;
}
