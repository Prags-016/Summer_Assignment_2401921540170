#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i = 0;
        bool inc = true, dec = true;

        for (i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                dec = false;
            }
            else if (nums[i] > nums[i + 1]) {
                inc = false;
            }
        }

        return inc || dec;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (obj.isMonotonic(nums)) {
        cout << "Array is Monotonic" << endl;
    } else {
        cout << "Array is Not Monotonic" << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i = 0;
        bool inc = true, dec = true;

        for (i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                dec = false;
            }
            else if (nums[i] > nums[i + 1]) {
                inc = false;
            }
        }

        return inc || dec;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (obj.isMonotonic(nums)) {
        cout << "Array is Monotonic" << endl;
    } else {
        cout << "Array is Not Monotonic" << endl;
    }

    return 0;
}