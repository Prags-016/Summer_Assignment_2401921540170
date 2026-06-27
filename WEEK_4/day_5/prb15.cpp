#include <iostream>
#include <string>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left,*right;

    TreeNode(int x){
        val=x;
        left=right=NULL;
    }
};

class Codec{
public:

    void helper(TreeNode* root,string &s){

        if(root==NULL){
            s+="N,";
            return;
        }

        s+=to_string(root->val)+",";

        helper(root->left,s);
        helper(root->right,s);
    }

    string serialize(TreeNode* root){

        string s="";

        helper(root,s);

        return s;
    }

    TreeNode* build(string &data,int &i){

        if(i>=data.size())
            return NULL;

        if(data[i]=='N'){
            i+=2;
            return NULL;
        }

        string num="";

        while(data[i]!=','){
            num+=data[i];
            i++;
        }

        i++;

        TreeNode* root=new TreeNode(stoi(num));

        root->left=build(data,i);
        root->right=build(data,i);

        return root;
    }

    TreeNode* deserialize(string data){

        int i=0;

        return build(data,i);
    }
};

void preorder(TreeNode* root){

    if(root==NULL)
        return;

    cout<<root->val<<" ";

    preorder(root->left);
    preorder(root->right);
}

int main(){

    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->right->left=new TreeNode(4);
    root->right->right=new TreeNode(5);

    Codec obj;

    string s=obj.serialize(root);

    cout<<"Serialized: "<<s<<endl;

    TreeNode* ans=obj.deserialize(s);

    cout<<"Preorder after Deserialization: ";

    preorder(ans);

    return 0;
}