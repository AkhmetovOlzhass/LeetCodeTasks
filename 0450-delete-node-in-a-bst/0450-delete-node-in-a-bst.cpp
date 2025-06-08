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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;

        if(root-> val == key){
            TreeNode* tempLeft = root-> left;
            TreeNode* tempRight = root-> right;

            if(!tempLeft){
                return root->right;
            } 
            if(!tempRight){
                return root->left;
            }

            TreeNode* minNode = root->right;
            while (minNode->left != nullptr) {
                minNode = minNode->left;
            }
            
            root->val = minNode->val;
            root->right = deleteNode(root->right, minNode->val);

        } else if(root->val > key){
            root->left = deleteNode(root->left, key);
        } else{
            root-> right = deleteNode(root->right, key);
        }

        return root;
    }
};