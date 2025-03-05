#include<iostream>

using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr){}
};

int height(TreeNode* root)
{
    if(!root) return 0;
    return 1+ max(height(root->left), height(root->right));
} 

int levels(TreeNode* root)
{
    return height(root);
}


int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Number of levels: " <<levels(root) << endl;
    return 0;
}