#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        vector<int> freq(26, 0);

        for(char c : magazine) {
            freq[c - 'a']++;
        }

        for(char c : ransomNote) {
            freq[c - 'a']--;

            if(freq[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {

    Solution obj;

    string ransomNote, magazine;

    cout << "Enter ransom note: ";
    cin >> ransomNote;

    cout << "Enter magazine: ";
    cin >> magazine;

    if(obj.canConstruct(ransomNote, magazine))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}