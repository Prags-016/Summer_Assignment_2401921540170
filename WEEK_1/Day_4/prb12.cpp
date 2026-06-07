#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = 0, maxsum = INT_MIN;

        for (int val : nums) {
            currsum += val;
            maxsum = max(currsum, maxsum);

            if (currsum < 0) {
                currsum = 0;
            }
        }

        return maxsum;
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution obj;
    int result = obj.maxSubArray(nums);

    cout << "Maximum Subarray Sum = " << result << endl;

    return 0;
}
