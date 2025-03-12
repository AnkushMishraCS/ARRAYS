#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;
    
    cout << "Enter first string: ";
    getline(cin, str1);
    
    cout << "Enter second string: ";
    getline(cin, str2);
    
    string concatenated = str1 + " " + str2;
    cout << "Concatenated String: " << concatenated << endl;
    
    cout << "Length of first string: " << str1.length() << endl;
    cout << "Length of second string: " << str2.length() << endl;
    
    cout << "First character of first string: " << str1[0] << endl;
    cout << "Last character of second string: " << str2[str2.length() - 1] << endl;
    
    reverse(str1.begin(), str1.end());
    cout << "Reversed first string: " << str1 << endl;
    
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    cout << "Uppercase second string: " << str2 << endl;

    return 0;
}
