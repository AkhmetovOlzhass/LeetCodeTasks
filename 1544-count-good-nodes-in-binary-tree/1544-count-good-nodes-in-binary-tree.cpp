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
    int goodNodes(TreeNode* root) {
        return findMaxNode(root, root-> val);

    }

    int findMaxNode(TreeNode* root, int maxNode){
        if(root == NULL){
            return 0;
        }

        int good = 0;

        if(maxNode <= root-> val){
            good = 1;
            maxNode = root-> val;
        }

        int leftMax = findMaxNode(root->left, maxNode);
        int rightMax = findMaxNode(root->right, maxNode);

        return leftMax + rightMax + good;



    }
};