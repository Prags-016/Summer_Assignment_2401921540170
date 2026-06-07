#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) {
            return 0;
        }

        vector<int> temp(n);
        int j = 0;

        temp[j++] = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                temp[j++] = nums[i];
            }
        }

        for (int i = 0; i < j; i++) {
            nums[i] = temp[i];
        }

        return j;
    }
};

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int k = obj.removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}
