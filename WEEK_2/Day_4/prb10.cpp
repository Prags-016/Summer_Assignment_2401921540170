#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n, 0);

        int posIdx = 0;
        int negIdx = 1;

        for (int i = 0; i < n; i++) {

            if (nums[i] < 0) {
                ans[negIdx] = nums[i];
                negIdx += 2;
            }
            else {
                ans[posIdx] = nums[i];
                posIdx += 2;
            }
        }

        return ans;
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

    vector<int> result = obj.rearrangeArray(nums);

    cout << "Rearranged Array: ";
    for (int x : result) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}