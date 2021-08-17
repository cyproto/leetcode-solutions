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
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return nullptr;
        }

        return solve(nums, 0, nums.size() - 1);
    }

    TreeNode *solve(vector<int> nums, int low, int high)
    {
        if (low > high)
            return nullptr;

        int mid = (low + high) / 2;
        TreeNode *node = new TreeNode();
        node->val = nums[mid];
        node->left = solve(nums, low, mid - 1);
        node->right = solve(nums, mid + 1, high);
        return node;
    }
};