#include <iostream>
#include <vector>

using namespace std;
int main(int, char **)
{
    std::cout << "Hello, from InvertBinary!\n";
}

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

TreeNode *invertTree(TreeNode *root)
{
    if (root == nullptr)
    {
        return nullptr;
    }
    if (root->left != nullptr || root->right != nullptr)
    {
        swap(root->left, root->right);
    }
    if (root->left != nullptr)
    {
        invertTree(root->left);
    }
    if (root->right != nullptr)
    {
        invertTree(root->right);
    }
    return root;
}
