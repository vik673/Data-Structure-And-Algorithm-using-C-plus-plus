#include<iostream>

using namespace std;


struct TreeNode{
   int data;
   TreeNode *left, *right;
   TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}  
};

bool isStrict(TreeNode* root)
{
    if(!root) return true;
    if((!root->left && root->right) || (root->left && !root->right)) return false;
    return isStrict(root->left) && isStrict(root->right);
}

int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout <<"Is strictly Binary Tree: "<< ((isStrict(root)) ? "Yes" : "No")<< endl;
    return 0;
}
