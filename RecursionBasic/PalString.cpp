#include <iostream>
#include <string>
using namespace std;

bool fn(string s, int i) {
    int n = s.length();
    
    // Base case: if we've checked half the string
    if (i >= n/2) {
        return true;
    }
    
    // If characters don't match, it's not a palindrome
    if (s[i] != s[n-i-1]) {
        return false;
    }
    
    // Recursively check the next pair of characters
    return fn(s, i+1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    if (fn(str, 0)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    
    return 0;
}
