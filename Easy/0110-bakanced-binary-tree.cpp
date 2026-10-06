/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
private:
    int height(TreeNode*root)
    {
        if (root == nullptr) return 0;

        int leftt = height(root->left);
        if (leftt == -1) return -1;

        
        int rightt = height(root->right);
        if (rightt == -1) return -1;

        if (abs(leftt-rightt)>1) return -1;

        return max(leftt, rightt) +1;


    }
};