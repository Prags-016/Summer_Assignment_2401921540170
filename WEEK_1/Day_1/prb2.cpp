#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int r = 0;
        int temp = x;
        int n = x;

        if (x < 0) {
            return false;
        }

        while (n > 0) {
            r = n % 10;
            rev = rev * 10 + r;
            n = n / 10;
        }

        return rev == temp;
    }
};

int main() {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    Solution obj;

    if (obj.isPalindrome(x)) {
        cout << x << " is a Palindrome Number." << endl;
    } else {
        cout << x << " is not a Palindrome Number." << endl;
    }

    return 0;
}
