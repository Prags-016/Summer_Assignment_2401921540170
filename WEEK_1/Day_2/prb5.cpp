#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        } else {
            return 0;
        }
    }

    char getLowerCase(char ch) {
        if (ch >= 'a' && ch <= 'z') {
            return ch;
        } else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkPalin(string s) {
        int st = 0;
        int e = s.size() - 1;

        while (st <= e) {
            if (s[st] != s[e]) {
                return 0;
            } else {
                st++;
                e--;
            }
        }
        return 1;
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
