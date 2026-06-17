#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
            return false;

        vector<int> freq(26, 0);

        for(char c : s)
            freq[c - 'a']++;

        for(char c : t)
            freq[c - 'a']--;

        for(int x : freq)
        {
            if(x != 0)
                return false;
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

    if(obj.isAnagram(s, t))
        cout << "Valid Anagram" << endl;
    else
        cout << "Not an Anagram" << endl;

    return 0;
}