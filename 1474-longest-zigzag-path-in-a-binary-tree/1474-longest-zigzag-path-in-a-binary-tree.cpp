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
    int maxLen = 0;
    int longestZigZag(TreeNode* root) {
        zig(root->left, false, 1);
        zig(root->right, true, 1);
        return maxLen;
    }

    void zig(TreeNode* root, bool goLeft, int length){
        if(root == NULL) return;

        maxLen = max(maxLen, length);
        if(goLeft){
            zig(root -> left, false, length +1);
            zig(root -> right, true, 1);
        } else{
            zig(root -> right, true, length +1);
            zig(root -> left, false, 1);
        }
    }
};