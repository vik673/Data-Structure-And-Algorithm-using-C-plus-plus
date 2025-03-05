#include<iostream>

using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr){}
};

void mirror(TreeNode* root)
{
    if(!root) return;
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}

void printInorder(TreeNode* root)
{
    if(!root) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Original Tree(inorder): ";
    printInorder(root);

    mirror(root);
    cout << "\n Mirror Tree(inorder): ";
    printInorder(root);
    return 0;
}