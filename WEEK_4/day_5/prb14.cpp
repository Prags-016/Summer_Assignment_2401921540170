#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left,*right;

    TreeNode(int x){
        val=x;
        left=right=NULL;
    }
};

class Solution{

public:

    unordered_map<int,int> mp;
    int preIndex=0;

    TreeNode* build(vector<int>& preorder,
                    vector<int>& inorder,
                    int left,
                    int right){

        if(left>right)
            return NULL;

        int val=preorder[preIndex++];

        TreeNode* root=new TreeNode(val);

        int index=mp[val];

        root->left=build(preorder,inorder,left,index-1);
        root->right=build(preorder,inorder,index+1,right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder,
                        vector<int>& inorder){

        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;

        return build(preorder,inorder,0,inorder.size()-1);
    }
};

void inorderPrint(TreeNode* root){

    if(root==NULL)
        return;

    inorderPrint(root->left);
    cout<<root->val<<" ";
    inorderPrint(root->right);
}

int main(){

    vector<int> preorder={3,9,20,15,7};
    vector<int> inorder={9,3,15,20,7};

    Solution obj;

    TreeNode* root=obj.buildTree(preorder,inorder);

    inorderPrint(root);

    return 0;
}