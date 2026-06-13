#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0, r = 0;

        while (x != 0) {
            r = x % 10;

            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return 0;
            }

            rev = rev * 10 + r;
            x = x / 10;
        }

        return rev;
    }
};

int main() {
    Solution obj;
    int x;

    cout << "Enter an integer: ";
    cin >> x;

    cout << "Reversed Integer: " << obj.reverse(x) << endl;

    return 0;
}