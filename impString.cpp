#include <iostream>
#include <unordered_map>
using namespace std;

char mostFrequentChar(string s) {
    unordered_map<char, int> freq;
    char maxChar = s[0];
    int maxCount = 0;

    for (char ch : s) {
        freq[ch]++;
        if (freq[ch] > maxCount) {
            maxCount = freq[ch];
            maxChar = ch;
        }
    }
    return maxChar;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Most frequent character: " << mostFrequentChar(str) << endl;
    return 0;
}
