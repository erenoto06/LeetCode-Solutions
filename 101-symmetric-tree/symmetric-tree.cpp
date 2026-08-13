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
    bool isMirror(TreeNode* leftRoot, TreeNode* rightRoot) {
        if (leftRoot == nullptr && rightRoot == nullptr) {
            return true;
        }
        else if (leftRoot == nullptr || rightRoot == nullptr) {
            return false;
        }
        if (leftRoot->val != rightRoot->val) {
            return false;
        }
        bool leftCheck = isMirror(leftRoot->left, rightRoot->right);
        bool rightCheck = isMirror(leftRoot->right, rightRoot->left);
        return (leftCheck && rightCheck);
    


}

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        bool final = isMirror(root->left, root->right);
        return final;

        
    }
};