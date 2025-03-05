#include<iostream>

using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr){}
};

int countLeaves(TreeNode* root)
{
   if(!root) return 0;
   if(!root->left && !root->right) return 1;
   return countLeaves(root->left) + countLeaves(root->right);
}
int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout <<"Number of Leaf Node: "<< countLeaves(root) << endl;
    return 0;
}