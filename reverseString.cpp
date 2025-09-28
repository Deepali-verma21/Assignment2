#include <iostream>
using namespace std;

string reverseString(string s) {
    if (s.empty() || s.size() == 1) {
        return s;
    }
    return reverseString(s.substr(1)) + s[0];
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Reversed string: " << reverseString(s) << endl;
    return 0;
}
