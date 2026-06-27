#include <iostream>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    bool isValid(TreeNode* root, long long minVal, long long maxVal) {

        if(root == NULL)
            return true;

        if(root->val <= minVal || root->val >= maxVal)
            return false;

        return isValid(root->left, minVal, root->val) &&
               isValid(root->right, root->val, maxVal);
    }

    bool isValidBST(TreeNode* root) {
        return isValid(root, LLONG_MIN, LLONG_MAX);
    }
};

int main() {

    // Create BST
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(8);

    Solution obj;

    if(obj.isValidBST(root))
        cout << "Valid BST";
    else
        cout << "Invalid BST";

    return 0;
}