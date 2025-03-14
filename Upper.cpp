#include <iostream>
using namespace std;

void toUpperCase(string &s) {
    for (char &ch : s) {
        if (ch >= 'a' && ch <= 'z') 
            ch -= 32;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    toUpperCase(str);
    cout << "Uppercase string: " << str << endl;
    return 0;
}
