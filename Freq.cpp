#include <iostream>
#include <unordered_map>
using namespace std;

void countFrequency(string s) {
    unordered_map<char, int> freq;
    for (char ch : s)
        freq[ch]++;
    for (auto it : freq)
        cout << it.first << " -> " << it.second << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    countFrequency(str);
    return 0;
}
