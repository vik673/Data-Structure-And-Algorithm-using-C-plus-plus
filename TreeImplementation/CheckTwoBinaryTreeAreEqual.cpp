#include<iostream>

using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr){}
};

bool areEqual(TreeNode* a, TreeNode* b)
{
    if(!a && !b) return true;
    if(!a || !b) return false;
    return (a->data == b->data) && areEqual(a->left,b->left) && areEqual(a->right, b->right);
}

int main()
{
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    
    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    cout << "Are Trees equal? " << ((areEqual(root1, root2)) ? "Yes" : "No") << endl;
    return 0;
}