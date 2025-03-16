#include <iostream>
#include <sstream>
using namespace std;

string findLongestWord(string s) {
    stringstream ss(s);
    string word, longestWord;
    int maxLength = 0;

    while (ss >> word) {
        if (word.length() > maxLength) {
            maxLength = word.length();
            longestWord = word;
        }
    }
    return longestWord;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "Longest word: " << findLongestWord(str) << endl;
    return 0;
}
