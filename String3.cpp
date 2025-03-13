#include <iostream>
using namespace std;

void reverseString(string &s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
