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
    void traveller(TreeNode* root, int& sum, bool isLeft) {
    if (root == nullptr) {
        return;
    }
    if (isLeft && root->left == nullptr && root->right == nullptr) {
        sum += root->val;
    }
    traveller(root->left, sum, true);
    traveller(root->right, sum, false);
}

    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        traveller(root, sum, false);
        return sum;
        
    }
};