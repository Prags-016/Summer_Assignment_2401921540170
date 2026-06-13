#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i = 0, j = 0;

        if (s.length() != t.length()) {
            return false;
        }

        for (i = 0; i < s.length() - 1; i++) {
            for (j = i + 1; j < s.length(); j++) {

                if (s[i] == s[j]) {
                    if (t[i] != t[j]) {
                        return false;
                    }
                }

                if (t[i] == t[j]) {
                    if (s[i] != s[j]) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};

int main() {
    Solution obj;

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (obj.isIsomorphic(s, t)) {
        cout << "Strings are Isomorphic" << endl;
    } else {
        cout << "Strings are Not Isomorphic" << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i = 0, j = 0;

        if (s.length() != t.length()) {
            return false;
        }

        for (i = 0; i < s.length() - 1; i++) {
            for (j = i + 1; j < s.length(); j++) {

                if (s[i] == s[j]) {
                    if (t[i] != t[j]) {
                        return false;
                    }
                }

                if (t[i] == t[j]) {
                    if (s[i] != s[j]) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};

int main() {
    Solution obj;

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (obj.isIsomorphic(s, t)) {
        cout << "Strings are Isomorphic" << endl;
    } else {
        cout << "Strings are Not Isomorphic" << endl;
    }

    return 0;
}