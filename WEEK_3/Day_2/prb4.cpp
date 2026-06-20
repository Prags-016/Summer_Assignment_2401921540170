#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if(s.length() < p.length())
            return ans;

        vector<int> pFreq(26, 0);
        vector<int> winFreq(26, 0);

        for(char c : p)
            pFreq[c - 'a']++;

        int k = p.length();

        for(int i = 0; i < k; i++)
            winFreq[s[i] - 'a']++;

        if(winFreq == pFreq)
            ans.push_back(0);

        for(int i = k; i < s.length(); i++) {

            winFreq[s[i] - 'a']++;
            winFreq[s[i - k] - 'a']--;

            if(winFreq == pFreq)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};

int main() {

    Solution obj;

    string s, p;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string p: ";
    cin >> p;

    vector<int> result = obj.findAnagrams(s, p);

    cout << "Indices: ";

    for(int idx : result)
        cout << idx << " ";

    cout << endl;

    return 0;
}