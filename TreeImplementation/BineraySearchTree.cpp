#include<iostream>

using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left,*right;
    TreeNode(int val) :  data(val), left(nullptr), right(nullptr){}
};

TreeNode* insertBST(TreeNode* root, int val)
{
    if(!root) return new TreeNode(val);
    if(val < root->data) root->left = insertBST(root->right, val);
    return root;
}

void inorder(TreeNode* root)
{
    if(!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    TreeNode* root = nullptr;
    root = insertBST(root,5);
    root = insertBST(root,3);
    root = insertBST(root,7);
    root = insertBST(root,2);
    root = insertBST(root,4);

   cout << "Inorder Traversal of BST: ";
   inorder(root);
   return 0;
}