#include <iostream>
using namespace std;

class Solution {
public:
    int getNext(int num) {
        int sum = 0, r = 0;

        while (num > 0) {
            r = num % 10;
            sum = sum + r * r;
            num = num / 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        do {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        } while (slow != fast);

        return slow == 1;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (obj.isHappy(n)) {
        cout << n << " is a Happy Number." << endl;
    } else {
        cout << n << " is not a Happy Number." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

class Solution {
public:
    int getNext(int num) {
        int sum = 0, r = 0;

        while (num > 0) {
            r = num % 10;
            sum = sum + r * r;
            num = num / 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        do {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        } while (slow != fast);

        return slow == 1;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (obj.isHappy(n)) {
        cout << n << " is a Happy Number." << endl;
    } else {
        cout << n << " is not a Happy Number." << endl;
    }

    return 0;
}