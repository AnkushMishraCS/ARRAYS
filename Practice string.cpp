#include <iostream>
using namespace std;

string removeVowels(string s) {
    string result = "";
    for (char ch : s) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result += ch;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "String after removing vowels: " << removeVowels(str) << endl;
    return 0;
}
