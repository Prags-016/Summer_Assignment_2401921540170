#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {

        vector<int> freq(26, 0);

        for(char c : s) {
            freq[c - 'a']++;
        }

        for(int i = 0; i < s.length(); i++) {
            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};

int main() {

    Solution obj;
    string s;

    cout << "Enter string: ";
    cin >> s;

    int result = obj.firstUniqChar(s);

    if(result == -1)
        cout << "No unique character found" << endl;
    else
        cout << "Index of first unique character: " << result << endl;

    return 0;
}