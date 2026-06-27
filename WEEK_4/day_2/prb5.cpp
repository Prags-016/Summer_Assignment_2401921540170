#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode{

    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val=x;
        left=right=NULL;
    }
};

class Solution{

public:

    int diameter=0;

    int height(TreeNode* root){

        if(root==NULL)
            return 0;

        int left=height(root->left);
        int right=height(root->right);

        diameter=max(diameter,left+right);

        return 1+max(left,right);
    }

    int diameterOfBinaryTree(TreeNode* root){

        height(root);

        return diameter;
    }
};

int main(){

    TreeNode* root=new TreeNode(1);

    root->left=new TreeNode(2);
    root->right=new TreeNode(3);

    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    Solution obj;

    cout<<"Diameter = "<<obj.diameterOfBinaryTree(root);

    return 0;
}