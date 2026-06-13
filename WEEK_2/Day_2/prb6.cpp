#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0) {
            return 0;
        }
        else if (n == 1) {
            return 1;
        }

        int ans = fib(n - 1) + fib(n - 2);
        return ans;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " is: "
         << obj.fib(n) << endl;

    return 0;
}

#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0) {
            return 0;
        }
        else if (n == 1) {
            return 1;
        }

        int ans = fib(n - 1) + fib(n - 2);
        return ans;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " is: "
         << obj.fib(n) << endl;

    return 0;
}