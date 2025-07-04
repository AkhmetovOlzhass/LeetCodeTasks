/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return zig(root, p, q);
    }

    TreeNode* zig(TreeNode* root, TreeNode* p, TreeNode* q){

        if(root == NULL){
            return NULL;
        }

        if(root == p || root == q){
            return root;
        } 
        TreeNode* left = zig(root -> left,  p,  q);

        TreeNode* right = zig(root -> right, p,q);

        if(left != NULL && right != NULL){
            return root;
        }

        return left ? left : right; 

    }


};