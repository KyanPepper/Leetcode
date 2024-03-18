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

int maxDepth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }    
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);
    return 1 + max(leftDepth, rightDepth);
}
