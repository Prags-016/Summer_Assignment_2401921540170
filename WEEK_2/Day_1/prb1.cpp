#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 1) {
            return false;
        }
        else if (n == 1) {
            return true;
        }
        else {
            while (n % 2 == 0) {
                n = n / 2;
            }

            if (n == 1) {
                return true;
            }
            else {
                return false;
            }
        }
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (obj.isPowerOfTwo(n)) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }

    return 0;
}