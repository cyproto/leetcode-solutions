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
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> nodes;
        traverse(root, nodes);
        return nodes;
    }

    void traverse(TreeNode *root, vector<int> &nodes)
    {
        if (!root)
            return;

        traverse(root->left, nodes);
        nodes.push_back(root->val);
        traverse(root->right, nodes);
    }
};