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
    void traverse(TreeNode* root) {
        if(root == NULL)
            return;
        traverse(root->left);
        traverse(root->right);
        
    }
    int maxDepth(TreeNode* root) {
        
        if(root == NULL)
           return 0;
        int left_depth=1, right_depth = 1;
        while((root->left && root->right) != NULL) {
            if(root->left != NULL) {
                root = root->left;
                left_depth++;
            }
            if(root->right != NULL) {
                root = root->right;
                right_depth++;
            }
        }
    return max(left_depth, right_depth);
    
}};

// doesn't work
//


