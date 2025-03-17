#include <iostream>
#include <sstream>
using namespace std;

int countWords(string s) {
    stringstream ss(s);
    string word;
    int count = 0;
    
    while (ss >> word) 
        count++;
    
    return count;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "Total number of words: " << countWords(str) << endl;
    return 0;
}
