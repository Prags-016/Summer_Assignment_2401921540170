#include <iostream>
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
    TreeNode* searchBST(TreeNode* root, int val) {

        while(root != NULL) {

            if(root->val == val)
                return root;

            if(val < root->val)
                root = root->left;
            else
                root = root->right;
        }

        return NULL;
    }
};

int main() {

    // Creating BST
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    Solution obj;

    int val;
    cout << "Enter value to search: ";
    cin >> val;

    TreeNode* ans = obj.searchBST(root, val);

    if(ans != NULL)
        cout << "Value found: " << ans->val << endl;
    else
        cout << "Value not found" << endl;

    return 0;
}