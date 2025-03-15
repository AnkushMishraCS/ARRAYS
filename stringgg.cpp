#include <iostream>
#include <unordered_map>
using namespace std;

char firstNonRepeatingChar(string s) {
    unordered_map<char, int> freq;
    for (char ch : s)
        freq[ch]++;
    for (char ch : s) {
        if (freq[ch] == 1)
            return ch;
    }
    return '_';
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    char result = firstNonRepeatingChar(str);
    if (result != '_')
        cout << "First non-repeating character: " << result << endl;
    else
        cout << "No non-repeating character found." << endl;
    return 0;
}
