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
    bool isSymmetric(TreeNode* root) {
        vector<int> leftt;
        vector<int> rightt;
        if (root == nullptr) return true;
        dfsLeft(root->left, leftt);
        dfsRight(root->right, rightt);

        return leftt==rightt;
    }
private:
    const int NUL = 1001;
    void dfsLeft(TreeNode* root, vector<int>& v)
    {
        if(root == nullptr) { v.push_back(NUL); return;}
        v.push_back(root->val);
        dfsLeft(root->left, v);
        dfsLeft(root->right, v);
    }

    void dfsRight(TreeNode* root, vector<int>& v)
    {
        if(root == nullptr) { v.push_back(NUL); return;}
        v.push_back(root->val);
        dfsRight(root->right, v);
        dfsRight(root->left, v);
    }
    
};