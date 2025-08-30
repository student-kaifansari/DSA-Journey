#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    for (int i = 0; i < s.length() - 1; ) {
        if (s[i] == s[i + 1]) {
            s.erase(i, 2);  // erase 2 characters starting at position i
            if (i > 0) i--; // move back to check new pair
        } else {
            i++;
        }
    }

    for (int i = 0; s[i] != '\0'; i++) {
        cout << s[i];
    }

    return 0;
}
