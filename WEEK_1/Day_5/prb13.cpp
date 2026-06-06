#include <iostream>
#include <string>

using namespace std;

class Solution {
private:
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')) {
            return true;
        }
        else {
            return false;
        }
    }

    char getLowerCase(char ch) {
        if (ch >= 'a' && ch <= 'z') {
            return ch;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }

        return ch; // for digits
    }

    bool checkPalin(string s) {
        int st = 0;
        int e = s.size() - 1;

        while (st <= e) {
            if (s[st] != s[e]) {
                return false;
            }
            st++;
            e--;
        }

        return true;
    }

public:
    bool isPalindrome(string s) {
        string temp = "";

        for (int j = 0; j < s.size(); j++) {
            if (valid(s[j])) {
                temp.push_back(s[j]);
            }
        }

        for (int j = 0; j < temp.size(); j++) {
            temp[j] = getLowerCase(temp[j]);
        }

        return checkPalin(temp);
    }
};

int main() {
    Solution obj;

    string s = "A man, a plan, a canal: Panama";

    if (obj.isPalindrome(s)) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}